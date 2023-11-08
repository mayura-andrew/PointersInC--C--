#include <stdio.h>
int main(){
    int a;
    int *p;
    p = &a;
    a = 10;
    printf("%d\n", p);
    printf("%d\n", *p);
    printf("%d\n", &a);
}