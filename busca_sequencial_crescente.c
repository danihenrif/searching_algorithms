#include <stdio.h>
//Para a busca funcionar o vetor deve estar ordenado de forma crescente
int buscaSequencialCrescenteIterativa(int vet[], int tam, int chave){
  for(int i = 0 ; i < tam ; i++){
    printf("1 exec\n");
    if(vet[i] == chave) return 1;
    else if(vet[i] > chave) return 0;
  }
  return 0;
}

int main(){ 
  
  int vetor[10] = {1,3,5,6,7,10,20,30,40,50};
  
  printf("%d", buscaSequencialCrescenteIterativa(vetor, 10, 41));
  
  return 0;
}