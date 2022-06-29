#include <stdio.h>



void main(){
    int i;
    int arr[10];
    printf("Input 10 numbers:");
    printf("\n==============\n");
    for (i=0; i <10; i++){
        printf("+ Number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Result: ");
    for (i=9; i>=0; i--){
        printf(" %d",arr[i]);
        if (i>0) printf(",");
    }

}
