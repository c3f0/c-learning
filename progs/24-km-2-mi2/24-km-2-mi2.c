#include <stdio.h>

double convert_km(double arr[], double result[], size_t size);

int main()
{
    double values[] = {1.1, 2.2, 3.3};
    double result[3];
    size_t size = sizeof(values) / sizeof(values[0]);
    convert_km(values, result, size);
    
    for(int i = 0; i < size; i++)
    {
        printf("%.2lf km = %.2lf mi\n", values[i], result[i]);
    }

    return 0;
}

double convert_km(double arr[], double result[], size_t size)
{
    double mile = 1.609344;
    for(int i = 0; i < size; i++)
    {
        result[i] = arr[i] * mile;
    }
    
    return 0;
}
