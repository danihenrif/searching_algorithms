#include <stdio.h>
#include <stdlib.h>

typedef enum {false,true} bool;

bool busca_sequencial_recursiva_naoordenada (int* v, int N, int x){
    if(N <= 0){return false;}
    if(*v == x){return true;}
    return busca_sequencial_recursiva_naoordenada(v + 1, N - 1 , x);
}

int main () {
    int *vetor = (int*)malloc(10 * sizeof(int));
    bool retorno;

    *(vetor) = 1;
    *(vetor+1) = 2;
    *(vetor+2) = 3;
    *(vetor+3) = 4;
    *(vetor+4) = 5;
    *(vetor+5) = 6;
    *(vetor+6) = 7;
    *(vetor+7) = 8;
    *(vetor+8) = 9;
    *(vetor+9) = 10;

    retorno = busca_sequencial_recursiva_naoordenada(vetor, 10, 9);

    retorno == true ? printf("true\n") : printf("false\n");

    retorno = busca_sequencial_recursiva_naoordenada(vetor, 10, 11);

    retorno == true ? printf("true\n") : printf("false\n");
    
    free(vetor);
    return 0;
}