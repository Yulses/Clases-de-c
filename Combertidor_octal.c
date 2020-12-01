#include<stdio.h>
#include<math.h>
int determinaCiclos(int numero);
void printfb(int numero);
void printB(int numero);
int main(){
  int numero= 59;
  printf("El numero es %d\n",numero );
  printf("El numero es %o\n",numero );
  printf("El numero es %x\n",numero );
  printf("El numero de ciclos es:%d\n",determinaCiclos(numero) );
  printfb(numero);
  printf("\n" );
  printB(numero);
  printf("%X\n",-1 );
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
void printB(int numero){
  unsigned int recorredor=0x80000000;
  int bandera=0;
  int i=0;
  while (i<32) {
    if((recorredor&numero)!=0){
      bandera=1;
    }
    if(bandera){
      if((recorredor&numero)==0){
        printf("0");
      }
      else{
        printf("1");
      }
    }
    i++;
    recorredor=recorredor>>1;
  }
  printf("\n");
}
