#include <stdio.h>
#include <stdlib.h>

typedef enum{false,true} bool;

bool busca_binaria_recursiva(int* v, int esq, int dir, int X){ 
    if(esq>dir){
        return false;
    }

    int meio = (dir+esq)/2;
    
    if( *(v+meio) == X){return true;}
    
    else if( *(v+meio) > X ){
        return busca_binaria_recursiva(v, esq , meio - 1 , X);
    }
    
    else{
        return busca_binaria_recursiva(v, meio + 1, dir, X);
    }
}

int main () {
    int* vetor = (int*)malloc(5*sizeof(int));
    bool retorno;
    
    *(vetor) = 1;
    *(vetor + 1) = 2;
    *(vetor + 2) = 3;
    *(vetor + 3) = 4;
    *(vetor + 4) = 5;

    retorno = busca_binaria_recursiva(vetor, 0, 4, 2);

    retorno == true ? printf("true\n") : printf("false\n");

    free(vetor);

    return 0;
}