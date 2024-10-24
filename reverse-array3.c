#include<stdio.h>

int a[100000];

int main(){

    int length;
    scanf("%d", &length);

    for(int i = 0; i<length; i++){
        scanf("%d", &a[i]); 
    }

    for(int i = length-1, j = 0; i>=j; i--, j++){
        int temp = a[j];
        a[j] = a[i];
        a[i] = temp;
    }

    for(int i = 0; i<length; i++){
        printf("%d ", a[i]);
    }

    return 0;

}