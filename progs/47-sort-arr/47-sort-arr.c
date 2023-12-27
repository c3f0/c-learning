/* merge two unsorted arrays and then sort them program */

#include <stdio.h>

void sort_arr(int arr1[], size_t length);

void merge_arrays
(int arr1[], size_t length, int arr2[], int arr3[], int length_combined);

int main()
{
    int arr1[] = { 4, 3, 10, 2, 1, 9, 6, 7, 5, 8 };
    int arr2[] = { 12, 15, 20, 19, 11, 13, 18, 17, 16, 14 };
    size_t length = sizeof(arr1) / sizeof(arr1[0]);
    size_t length2 = sizeof(arr2) / sizeof(arr2[0]);
    
    // combined length of 2 arrays 
    int length_combined = length + length2;
    
    printf("Combined arrays lentgh: %d\n", length_combined);
    
    // array that will hold values of 2 previous arrays
    int arr3[length_combined];
    
    // merge call
    merge_arrays(arr1, length, arr2, arr3, length_combined);
    
    // print unsorted array after merge
    for (int j = 0; j < length_combined; j++)
    {
        printf("%d ", arr3[j]);
    }
    
    printf("\n");
    
    // sort call
    sort_arr(arr3, length_combined);
    
    // print sorted array
    for (int j = 0; j < length_combined; j++)
        {
            printf("%d ", arr3[j]);
        }
    
    return 0;
}


// function that copies 1st and 2nd array values into 3rd array
void 
merge_arrays
(int arr1[], size_t length, int arr2[], int arr3[], int length_combined)
{
    // counter variables
    int i, j, k;
    
    // copy first array
    for (i = 0; i < length ;i++)
    {
        arr3[i] = arr1[i];
    }
    
    
    // copy second array starting from where first copying ended
    for (j = i, k = 0; j < length_combined;j++, k++)
    {
        arr3[j] = arr2[k];
    }
}


// sorting function
void sort_arr(int arr[], size_t length)
{
    
    // 
    for (int i = 0; i < length - 1; i++)
    {
        // inner loop compares next index to the index set
        // by the outer loop
        for (int j = i + 1; j <= length - 1; j++)
        {
            // if the value at the index n is higher then
            // the value at the index n + 1 then swap these values
            if (arr[i] > arr[j])
            {
                // assign higher value to tmp
                int tmp = arr[i];
                
                // assign lower value to arr[i]
                arr[i] = arr[j];
                
                // assign higher value back to arr[j]
                arr[j] = tmp;
                
            }
        }
    }
}
