/*
Print an increasing pattern of numbers, where each row contains the same number.

Expected output:

1
22
333
4444
55555

*/


#include<stdio.h>
int main(){
    int i,j;
    int num;

    printf("Enter a Number of How Many rows you want :- ");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        for(j=1;j<=i;j++){
            printf("%d",i);

        }
        printf("\n");
    }
    return 0;
}