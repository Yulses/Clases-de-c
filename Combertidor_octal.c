#include<stdio.h>
#include<math.h>
int determinaCiclos(int numero);
void printfb(int numero);
int main(){
  int numero= 59;
  printf("El numero es %d\n",numero );
  printf("El numero es %o\n",numero );
  printf("El numero es %x\n",numero );
  printf("El numero de ciclos es:%d\n",determinaCiclos(numero) );
  printfb(numero);
}
void printfb(int numero){
 int nciclos=determinaCiclos(numero);
 int cicloActual=0;
 int aux=numero;
 int bit=0;
 printf("Se imprime el bit: " );
 while (cicloActual<=nciclos){
   bit=aux/pow(2,(nciclos-cicloActual));
   aux=aux-(bit*pow(2,(nciclos-cicloActual)));
   printf("%d",bit  );
   cicloActual++;
 }
 
}
int determinaCiclos(int numero){
  int nciclos=0;
  int aux=numero;
  while (aux>1) {
    aux=aux/2;
    nciclos++;
  }
  return nciclos;
}
