/*Program 6 — Product Price Sorting Using Different TechniquesFor the same e-commerce product-price problem, 
sort the prices in ascending order using three differentsorting techniques:
1. Bubble Sort
2. Selection Sort
3. Insertion Sort*/

//Bubble Sort
#include <stdio.h>
int main(){
    int n, i, j;
    float a[5], temp;
    printf("Enter number of products: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%f", &a[i]);
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Sorted prices:\n");
    for(i = 0; i < n; i++)
        printf("%.2f ", a[i]);
    return 0;
}

//Selection Sort
#include <stdio.h>
int main(){
    int n, i, j, min;
    float a[5], temp;
    printf("Enter number of products: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%f", &a[i]);
    for(i = 0; i < n - 1; i++)
    {
        min = i;
        for(j = i + 1; j < n; j++)
        {
            if(a[j] < a[min])
                min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    printf("Sorted prices:\n");
    for(i = 0; i < n; i++)
        printf("%.2f ", a[i]);
    return 0;
}

//Insertion Sort
#include <stdio.h>
int main(){
    int n, i, j;
    float a[5], key;
    printf("Enter number of products: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%f", &a[i]);
    for(i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while(j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
    printf("Sorted prices:\n");
    for(i = 0; i < n; i++)
        printf("%.2f ", a[i]);
    return 0;
}