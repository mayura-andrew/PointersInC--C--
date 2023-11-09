#include <stdio.h>

int main(){
    int x = 5;
    int* p = &x;
    *p = 6;
    printf("value of x is %d", x); // 6
    int ** q = &p;
    int*** r = &q;
    printf("%d\n", *p);
    printf("%d\n", *q);
    printf("%d\n", **q);
    printf("%d\n", **r);
    printf("%d\n", ***r);
    ***r = 10;
    printf("X = %d\n", x);
    **q = *p + 2;
    printf("X = %d\n", x);
}
