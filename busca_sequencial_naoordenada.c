#include <stdio.h>

int buscaSequencialNaoOrdenadaIterativa(int vet[], int tam, int chave){
  for(int i = 0 ; i < tam ; i++){
    if(vet[i] == chave) return 1;
  }
  return 0;
}

int main(){ 
  
  int vetor[10] = {1,3,5,6,7,20,10,50,10,29};
  
  printf("%d", buscaSequencialNaoOrdenadaIterativa(vetor, 10, 6));
  
  return 0;
}