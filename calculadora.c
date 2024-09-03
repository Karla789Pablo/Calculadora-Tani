#include<stdio.h>
void titulo();
void menu(int *);
void opciones(int);

void fin();

int main(){
  titulo();
  int opc;
  menu();
  scanf("%d", &opc);
  while(opc!=6){
    menu(&opc);
    opciones(opc);
    if(opc == 3){
    	multiplicacion();
  }
    if(opc == 5){
    	modulo();
  }
    menu();
    scanf("%d", &opc);
      
}

void modulo(){
      int first, second;
      printf("\tMODULO\n");
    	printf("Ingresa el primer valor\n");
    	scanf("%d",&first);
    	printf("Ingresa el segundo valor\n");
    	scanf("%d",&second);
    	int resultado = first%second;
    	printf("El resultado de %d % %d es %d", first, second, resultado)
}

void multiplicacion(int first, int second){
      int first, second;
      printf("\tMULTIPLICACIOn\n");
    	printf("Ingresa el primer valor\n");
    	scanf("%d",&first);
    	printf("Ingresa el segundo valor\n");
    	scanf("%d",&second);
    	int resultado = first%second;
    	printf("El resultado de %d * %d es %d", first, second, resultado)
}

void menu(){
  printf("Menú:\n");
  printf("1. Suma\n");
  printf("2. Resta\n");
  printf("3. Multiplicación\n");
  printf("4. División\n");
  printf("5. Módulo\n");
  printf("6. Salir\n");
  printf("Ingrese una opción (1-6): ");
}
  
