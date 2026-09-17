/*WACP to find the memory address of an element in an 1D Array*/

#include <stdio.h>
int main(){
    int a[5], n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\nMemory addresses:\n");
    for(i = 0; i < n; i++)
        printf("Address of a[%d] = %p\n", i, (void*)&a[i]);
    return 0;
}
