/*Program 5 — E-Commerce Product Price SortingAn e-commerce company has a list of N product prices. Write a program 
to arrange the product pricesfrom lowest to highest in ascending order.*/

#include <stdio.h>
int main(){
    int n, i, j;
    float a[100], temp;
    printf("Enter number of products: ");
    scanf("%d", &n);
    printf("Enter prices:\n");
    for(i = 0; i < n; i++)
        scanf("%f", &a[i]);
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Sorted prices:\n");
    for(i = 0; i < n; i++)
        printf("%.2f ", a[i]);
    return 0;
}