#include<stdio.h>
void titulo();
void menu(int *);
void opciones(int);

void fin();

int main(){
  int opc;
  titulo();
  while(opc!=5){
    menu(&opc);
    opciones(opc);
  }
}
