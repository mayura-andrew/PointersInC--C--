#include<stdio.h>
#include<string.h>

int main(){
    char C[5];  //  C[5] = {'J', 'O', 'H', 'N'}  this can also used
    C[0] = 'J';
    C[1] = 'O';
    C[2] = 'H';
    C[3] = 'N';
    C[4] = '\0';
    int len = strlen(C);
    printf("%s \n", C);
    printf("Length = %d\n" ,len);

    char A[] = "JOHN"; // automatically added '\0' null terminator
    printf("Size in bytes = %d\n", sizeof(A));
    int lenA = strlen(A);
    printf("Length = %d\n", lenA);
}