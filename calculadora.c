#include<stdio.h>

void titulo();
void menu(int *);
void opciones(int);

void suma();

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
  printf("\n\n Selecciona que hacer:\n");
  printf("1. Sumar\n");
  printf("2. Restar\n");
  printf("3. Multiplicar\n");
  printf("4. Dividir\n");
  printf("5. Modulo\n");
  printf("\n");
}

void suma(){
  printf("\t SUMA");
  int s1, s2, t;
  printf("\n Ingresa el primer valor:");
  scanf("%d", &s1);
  printf("\n Ingresa el segundo valor:");
  scanf("%d", &s2);
  t = s1 + s2;
  printf("\n El resultado es %d", t);
}
