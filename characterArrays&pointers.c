#include<stdio.h>

void print(char* C){
    while(*C != '\0'){
        printf("%c", *C);
        C++; 
    }
    printf("\n");
    
    // int i = 0;
    // while (C[i] != '\0')
    // {
    //     /* code */
    //     printf("%c", C[i]);
    //     i++;
    // }
}

int main(){
    char C[20] = "Hello";
    print(C);
}