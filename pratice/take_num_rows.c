/*

Take the number of rows from the user and print an increasing star pattern.

Expected output:

Input: 3

*
**
***

*/

#include<stdio.h>
int main(){
    int i,j;
    int num;
    printf("Enter how many rows you want to Print :- ");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");

    }
    return 0;
}