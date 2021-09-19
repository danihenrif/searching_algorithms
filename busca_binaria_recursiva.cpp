#include <iostream>
#include <vector>

using namespace std;

int buscaBinariaRecursiva(const vector<int> a, int esq, int dir, int chave ){
  if(esq > dir){return -1;}
  int meio = (dir + esq)/2;
  if(a[meio] > chave){ 
    return buscaBinariaRecursiva(a, esq, meio-1, chave);
  }
  else if(a[meio] < chave){ 
    return buscaBinariaRecursiva(a, meio+1, dir, chave);
  }
  else{return meio;}
}
int main() {
  vector<int> vetor = {0,1,2,3,4,5};
  cout << buscaBinariaRecursiva(vetor, 0, vetor.size() - 1, 4);
}
