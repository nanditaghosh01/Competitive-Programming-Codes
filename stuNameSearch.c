/*Program 3 — Student Name SearchA university maintains a list of N student names. Given a name to search, 
determine whether thestudent exists and display their position.The program should support:
1. Case-sensitive search — "Priya" and "priya" are different.
2. Case-insensitive search — "Priya" and "priya" are considered the same.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    int n, i, choice, found = 0;
    char name[10][10], search[5];
    printf("Enter number of students: ");
    scanf("%d", &n);
    printf("Enter names:\n");
    for(i = 0; i < n; i++)
        scanf("%s", name[i]);
    printf("Enter name to search: ");
    scanf("%s", search);
    printf("1. Case Sensitive\n");
    printf("2. Case Insensitive\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    for(i = 0; i < n; i++){
        if(choice == 1){
            if(strcmp(name[i], search) == 0){
                found = 1;
                printf("Student found at position %d\n", i + 1);
                break;
            }
        }else{
            if(strlen(name[i]) == strlen(search)){
                int j, same = 1;
                for(j = 0; name[i][j] != '\0'; j++){
                    if(tolower(name[i][j]) != tolower(search[j])){
                        same = 0;
                        break;
                    }
                }if(same){
                    found = 1;
                    printf("Student found at position %d\n", i + 1);
                    break;
                }
            }
        }
    }if(found == 0)
        printf("Student not found\n");
    return 0;
}