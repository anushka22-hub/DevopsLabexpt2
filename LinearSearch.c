#include<stdio.h>
int main(){
    int number,i,flag=0;
    int arr[] ={1,2,3,4,5};
    printf("Enter the number to be searched: ");
    scanf("%d", &number);
    for(i = 0; i < 5; ++i){
        if(arr[i] == number){
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        printf("Number not found.\n");
    else
        printf("Number found at position %d.\n", i+1);
    return 0;
}