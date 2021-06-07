#include <stdio.h>
int buscaBinaria (int *v, int chave, int tam){
     int inf = 0;
     int sup = tam;
     int meio;
     while(inf <= sup){
       meio = (inf + sup) / 2;
       if(v[meio] == chave) return 1;
       if(v[meio] < chave) inf = meio + 1;
       if(v[meio] > chave) sup = meio - 1;
     }
     return 0;
}

int main() {
  int vetor[10] = {2, 5, 12, 23, 29, 32, 45, 65, 66, 76};
  int chave;
  int tam = sizeof(vetor);
  printf("%d",buscaBinaria(vetor, 4040, tam));
}
