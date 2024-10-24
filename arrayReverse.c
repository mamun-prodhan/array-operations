#include<stdio.h>

int a[100000];

int main(){

    int length;
    scanf("%d", &length);
    for(int i = 0; i<length; i++){
        scanf("%d", &a[i]);
    }

    for(int i = 0; i<length; i++){
        printf("%d ", a[i]);
    }

    int newArray[length];
    printf("\n");

    for(int i = length-1 , j = length; i >=0; i--, j++){
        newArray[j] = a[i];
    }

    for(int i = 0; i<length; i++){
        printf("%d ", a[i]);
    }

    return 0;
}