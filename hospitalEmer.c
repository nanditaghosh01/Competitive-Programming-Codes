/*Program 2 — Hospital Emergency MonitoringA hospital records the number of patients arriving in its emergency 
department during N consecutivehours. Determine:
1. The maximum number of patients and the hour when it occurred.
2. The minimum number of patients.
3. The peak hour.
4. The number of hours whose patient count is above the average.*/

#include <stdio.h>
int main(){
    int n, i, a[100];
    int max, min, peak, count = 0;
    float sum = 0, avg;
    printf("Enter number of hours: ");
    scanf("%d", &n);
    printf("Enter patients:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    max = min = a[0];
    peak = 0;
    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
            peak = i;
        }
        if(a[i] < min)
            min = a[i];
    }
    avg = sum / n;
    for(i = 0; i < n; i++)
    {
        if(a[i] > avg)
            count++;
    }
    printf("Maximum patients = %d\n", max);
    printf("Maximum at hour = %d\n", peak + 1);
    printf("Minimum patients = %d\n", min);
    printf("Peak hour = %d\n", peak + 1);
    printf("Average = %.2f\n", avg);
    printf("Hours above average = %d\n", count);
    return 0;
}