#include <stdio.h>
#include <stdlib.h>

typedef enum{false,true} bool;

bool busca_binaria_recursiva(int* v, int n, int X){
    if(n==0){return false};

}   

int main () {
    int* vetor = (int*)malloc(5*sizeof(int));
    bool retorno;
    *(vetor) = 1;
    *(vetor + 1) = 2;
    *(vetor + 2) = 3;
    *(vetor + 3) = 4;
    *(vetor + 4) = 5;

    retorno = busca_binaria_recursiva(vetor, 0, 4, -1);

    retorno == true ? printf("true\n") : printf("false\n");


    return 0;
}