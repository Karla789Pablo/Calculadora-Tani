#include<stdio.h>
void titulo();
void menu(int *);
void opciones(int);

VOID suma();
void resta();

void fin();

int main(){
  int opc;
  titulo();
  while(opc!=5){
    menu(&opc);
    opciones(opc);
  }
}

void titulo(){
  printf("\t &&& CALCULADORA &&&");
}

void menu(int * opc){
  printf("\n\n Selecciona que hacer");
}

void resta() {
  printf("RESTA");
  int n1, n2,resultado;
printf("Ingresa un valor");
 scanf("%d", &n1);
printf("Ingresa otro valor");
 scanf("%d", &n2);
resultado=n1-n2;
printf("Resultado: %d", resultado);
}
