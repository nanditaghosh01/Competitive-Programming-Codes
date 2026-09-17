/*University Attendance System
A university stores the attendance percentage of N students in an array. The academic section wants to:
1. Count the students whose attendance is below a given thresold.
2. Identify the student with the lowest attendance and their position.
3. Calculate the average attendance*/

#include <stdio.h>
int main(){
    int n, i, count = 0, pos = 0;
    float threshold, sum = 0, min, avg;
    printf("Enter number of students: ");
    scanf("%d", &n);
    float a[n];
    for(i = 0; i < n; i++){
        scanf("%f", &a[i]);
        sum += a[i];
    }
    printf("Enter threshold: ");
    scanf("%f", &threshold);
    min = a[0];
    for(i = 0; i < n; i++) {
        if(a[i] < threshold)
            count++;
        if(a[i] < min){
            min = a[i];
            pos = i;
        }
    }
    avg = sum / n;
    printf("Below threshold: %d\n", count);
    printf("Lowest: %.2f, Position: %d\n", min, pos + 1);
    printf("Average: %.2f\n", avg);
    return 0;
}