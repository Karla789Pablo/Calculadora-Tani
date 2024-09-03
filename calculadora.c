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
      int first, second;
      printf("Haremos una multiplicacion\n");
    	printf("Dame el primer valor\n");
    	scanf("%d",&first);
    	printf("Dame el segundo valor\n");
    	scanf("%d",&second);
    	multiplicacion(first, second);
    	
  }
    if(opc == 4){
      float num1, num2, resultado;
      printf("Ingrese el numerador: ");
      scanf("%f", &num1);
      printf("Ingrese el denominador: ");
      scanf("%f", &num2);
      resultado = dividir(num1, num2);
      printf("El resultado es: %.2f\n", resultado);
    }

    
    if(opc == 5){
      int first, second;
      printf("Haremos un modulo\n");
    	printf("Dame el primer valor\n");
    	scanf("%d",&first);
    	printf("Dame el segundo valor\n");
    	scanf("%d",&second);
    	modulo(first, second);
  }
    menu();
    scanf("%d", &opc);
      
}

void modulo(int first, int second){
    	int resultado = first%second;
    	printf("El resultado de %d % %d es %d", first, second, resultado)
}

void multiplicacion(int first, int second){
    	int resultado = first%second;
    	printf("El resultado de %d * %d es %d", first, second, resultado)
}

float dividir(float numerador, float denominador) {
    if (denominador == 0) {
        printf("Division por cero no permitida.\n");
        return 0;
    }
    return numerador / denominador;
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
