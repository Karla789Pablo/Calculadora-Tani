#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

void titulo();
void menu(int *);
void opciones(int);
void division():
void suma();

void fin();

int main(){
  int opc;
  titulo();
  while(opc!=6){
    menu(&opc);
    opciones(opc);
    Sleep(5000);
    system("cls");
  }
}

void titulo(){
  printf("\t &&& CALCULADORA &&&");
}

void menu(int * opc){
  printf("\n\n Selecciona que hacer:\n");
  printf("  1. Sumar\n");
  printf("  2. Restar\n");
  printf("  3. Multiplicar\n");
  printf("  4. Dividir\n");
  printf("  5. Modulo\n");
  printf("  6. Salir del programa\n  ");
  scanf("%d", opc); 
}

void opciones(int opc){
  switch(opc){
    case 1:
      suma();
      break;
    case 2:
    case 3:
        multiplicar();
    case 4:
        division():
    case 5:
        modulo();
    case 6:
      fin();
      break;
    default:
      printf("Opcion no valida\n);
  }
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

void fin(){
  printf("\n  Fin del programa.");
}

void modulo(){
      int first, second;
      printf("\tMODULO\n");
    	printf("Ingresa el primer valor\n");
    	scanf("%d",&first);
    	printf("Ingresa el segundo valor\n");
    	scanf("%d",&second);
    	int resultado = first%second;
    	printf("El resultado de %d % %d es %d\n", first, second, resultado);
}

void multiplicacion(){
      int first, second;
      printf("\tMULTIPLICACIOn\n");
    	printf("Ingresa el primer valor\n");
    	scanf("%d",&first);
    	printf("Ingresa el segundo valor\n");
    	scanf("%d",&second);
    	int resultado = first%second;
    	printf("El resultado de %d * %d es %d\n", first, second, resultado);
}

void division(){
    float num1, num2, resultado;
    printf("Ingrese el numerador: ");
    scanf("%f", &num1);
    printf("Ingrese el denominador: ");
    scanf("%f", &num2);
    if (num2 == 0) {
      printf("Division por cero no permitida.\n");
      return 0;
    }
    resultado = num1 / num2;
    printf("El resultado es: %.2f\n", resultado);
}
