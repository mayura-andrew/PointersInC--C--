#include <stdio.h>
int Add(int a, int b){
    return a+b;
}
void sayHello(char *name){
    printf("hello %s\n", name);
}
int main(){
    int c;
    int (*p)(int, int);
    p = Add; // function name will return as pointer
    c = p(2,3); //de-referencing and executing the function.
    printf("%d \n", c);
    void (*ptr)(char*);
    ptr = sayHello;
    ptr("Tom");
}