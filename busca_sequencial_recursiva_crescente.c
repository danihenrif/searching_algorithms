#include <stdio.h>
#include <stdlib.h>

typedef enum {false,true} bool;
int iteracoes = 0;

bool busca_sequencial_recursiva_crescente (int* v, int N, int x){
    iteracoes++;//Somente para controlar até onde compara

    if(N <= 0 || *v > x){return false;}
    if(*v == x){return true;}
    return busca_sequencial_recursiva_crescente(v + 1, N - 1 , x);
}

int main () {
    int *vetor = (int*)malloc(10 * sizeof(int));
    bool retorno;

    *(vetor) = 10;
    *(vetor+1) = 20;
    *(vetor+2) = 30;
    *(vetor+3) = 40;
    *(vetor+4) = 50;
    *(vetor+5) = 60;
    *(vetor+6) = 70;
    *(vetor+7) = 80;
    *(vetor+8) = 90;
    *(vetor+9) = 100;

    retorno = busca_sequencial_recursiva_crescente(vetor, 10, 51);

    retorno == true ? printf("true\n") : printf("false\n");

    printf("%d\n",iteracoes);
    iteracoes = 0;

    retorno = busca_sequencial_recursiva_crescente(vetor, 10, 72);

    retorno == true ? printf("true\n") : printf("false\n");

    printf("%d\n",iteracoes);
    
    free(vetor);
    return 0;
}