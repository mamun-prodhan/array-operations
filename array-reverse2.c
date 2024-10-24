#include<stdio.h>

int a[100000];

int main(){

    int length;
    scanf("%d", &length);

    for(int i = 0; i<length; i++){
        scanf("%d", &a[i]);
    }

    int b[length];

    for(int i = length-1, j=0; i>=0; i--, j++){
        b[j] = a[i];
    }

    for(int i = 0; i<length; i++){
        printf("%d ", b[i]);
    }


    return 0;
}