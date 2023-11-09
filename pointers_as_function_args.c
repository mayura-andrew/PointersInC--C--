 #include <stdio.h>

 // call by value
// void Increment(int);
// int main(){
//     int a;
//     a = 10;
//     Increment(a);
//     printf("Address of variable a in main = %d\n", &a);
//     printf("value of a is = %d\n", a);

// }

// void Increment(int a){
//     a = a + 1;
//     printf("Address of variable a in increment = %d\n", &a);
// }

// call by referance

void Increment(int*); // function prototypying
int main(){
    int a;
    a = 10;
    Increment(&a);
    printf("Address of variable a in main = %d\n", &a);
    printf("value of a is = %d\n", a);

}

void Increment(int *a){
    *a = (*a) + 1;
    printf("Address of variable a in increment = %d\n", &a);
}