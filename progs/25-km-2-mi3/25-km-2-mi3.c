#include <stdio.h>

double km_to_miles(double km);
double km_to_nautical_miles(double km);

int main()
{
    
    double start_km = 0;
    double end_km = 10;
    double step = 0.5;
    
    double miles[(int)end_km];
    double nautical_miles[(int)end_km];
    int i = 0;
    printf("%-16s%-16s%-16s\n",
           "Kilometers",
           "Miles",
           "Nautical");
    while(start_km < end_km)
    {   
        
        start_km += step;
        miles[i] = km_to_miles(start_km);
        nautical_miles[i] = km_to_nautical_miles(start_km);

        printf("%-10.4lf|     %-10.4lf|     %-10lf\n",
               start_km,
               miles[i],
               nautical_miles[i]);
    }

    return 0;
}

double km_to_miles(double km)
{
    return km * 0.6213712;
}

double km_to_nautical_miles(double km)
{
    return km * 0.5399568;
}
