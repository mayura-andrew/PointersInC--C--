#include<stdio.h>

int main(){
    int a; int *p;
    a = 10;
    p = &a; // &a = address of a 
    printf("Address of P is %d\n", p);
    printf("Value at p is %d\n", *p);
    int b = 20;;
    *p = b;
    printf("address of P is %d\n", p);
    printf("value at p is %d\n", *p);
}