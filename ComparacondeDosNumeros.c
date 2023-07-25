#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/**Estas variables de tipo entero guardan los numeros ingresados por el usuario**/
	int numeroOne;
	int numeroTwo;
	
	printf("Ingresa un numero: ");
	scanf("%i", &numeroOne);
	printf("Ingresa otro numero: ");
	scanf("%i", &numeroTwo);
	
	if(numeroOne > numeroTwo){
		printf("El numero %i es mayor al numero %i", numeroOne, numeroTwo);
	}else if(numeroTwo > numeroOne){
		printf("El numero %i es mayor al nummero %i", numeroTwo, numeroOne);
	}else{
		printf("Los numeros son iguales.");
	}
	
	return 0;
}
