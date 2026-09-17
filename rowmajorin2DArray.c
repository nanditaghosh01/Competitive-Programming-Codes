/*WACP to find an effective address of an element of a 2D Array using row major order form.*/

#include <stdio.h>
int main(){
    int a[5][5];
    int rows, cols, i, j;
    int row, col;
    int base, address;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    printf("Enter array elements:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter row number: ");
    scanf("%d", &row);
    printf("Enter column number: ");
    scanf("%d", &col);
    base = (int)&a[0][0];
    address = base + ((row * cols) + col) * sizeof(int);
    printf("Effective Address = %d\n", address);
    return 0;
}