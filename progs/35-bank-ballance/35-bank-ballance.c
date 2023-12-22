// This program simulates race condition
// when 2 threads access the same variable
// at the same time, causing program to run
// incorrectly

#include <stdio.h>
#include <pthread.h>
#include "bank.h"

void *deposit(void *amount);

pthread_mutex_t mutex;

int main()
{

  // balance before deposit
  int before = read_balance();
  printf("Before: %d\n", before);
  
  // create 2 threads
  pthread_t thread1;
  pthread_t thread2;

  // init mutex
  pthread_mutex_init(&mutex, NULL);

  int deposit1 = 200;
  int deposit2 = 300;

  // these threads run deposit function type casting
  // from int to void
  pthread_create(&thread1, NULL, deposit, (void*) &deposit1);
  pthread_create(&thread2, NULL, deposit, (void*) &deposit2);

  // deposit(300);
  // deposit(200);

  
  pthread_join(thread1, NULL);
  pthread_join(thread2, NULL);

  // destroy mutex
  pthread_mutex_destroy(&mutex);


  // balance after deposit
  int after = read_balance();
  printf("After: %d\n", after);
  return 0;
}

void *deposit(void *amount)
{

  // LOCK
  // first thread to reach the lock will use it first
  pthread_mutex_lock(&mutex);
  
  // go get current balance and store it in var
  // read_balance returns balance
  int account_balance = read_balance();

  
  // grab amount which is void pointer and add it to account_balance
  // 1st * = dereference to get amount
  // int * = typecast void pointer to int pointer
  account_balance += *((int *) amount);

  // write to balance with new amount
  write_balance(account_balance);

  // LOCK release for waiting threads
  pthread_mutex_unlock(&mutex);
  return NULL;
}
