#include <stdio.h>

int SumOfElements(int*, int);
int main(){
    int A[] = {1,2,3,4,5,6};
    int size = sizeof(A)/sizeof(A[0]);
    int total = SumOfElements(A, size);
    printf("SUM of elements = %d\n", total);
    printf("MAIN - Size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));

}

int SumOfElements(int* A, int size){
    int i, sum = 0;
    printf("SOE - Size of A = %d, size od A[0] = %d\n", sizeof(A),sizeof(A[0]));
    for(i=0; i<size; i++){
        sum+= A[i];  // A[i] is *(A+i)
    }
    return sum;
}

