#include <stdio.h>

int main() {
    int a = 1025;
    int *p;
    p = &a;
    printf("size of integer is %lu bytes\n", sizeof(int)); // use %lu for size_t
    printf("address = %p, value = %d\n", (void *)p, *p); // cast p to void* for printing address

    // Void pointer - Generic pointer
    void *p0;
    p0 = p;
    printf("Address = %p\n", p0);
    // Arithmetic on void pointer is not allowed
    //printf("address = %p\n", p0 + 1); // this will give a compilation error

    return 0;
}
