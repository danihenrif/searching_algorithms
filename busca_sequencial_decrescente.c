#include <stdio.h>
//Para a busca funcionar o vetor deve estar ordenado de forma decrescente
int buscaSequencialCrescenteIterativa(int vet[], int tam, int chave){
  for(int i = 0 ; i < tam  ; i++){
    if(vet[i] == chave) return 1;
    else if(vet[i] < chave) return 0;
  }
  return 0;
}

int main(){ 
  
  int vetor[10] = {31,10,9,8,6,5,4,3,2,1};
  
  printf("%d", buscaSequencialCrescenteIterativa(vetor, 10, 10));
  
  return 0;
}