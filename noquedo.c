#include <stdio.h>

void ingresoarreglo (int arreglo1[],int tamano1){
	for (int i=0; i<tamano1; i++){
		printf("ingresa un valor entero en la posicion %d\n",i);
		scanf("%d",&arreglo1[i]);
	}
/*	for (int j=0; j< tamano; j++){*/
/*		printf("%d",arreglo[j]);*/
/*	}*/
	
	
}
void sumaarreglo(int arreglo2[],int tamano2){
	int suma=0;
	for (int i= 0; i< tamano2; i++){
		suma = suma + arreglo2[i];
	}
	printf("la suma es %d",suma);
}

int main(int argc, char *argv[]) {

	int arreglo1 [3];
	
	ingresoarreglo(arreglo,3);
	
	sumaarreglo(arreglo,3);
	

	
	
	
	
	
	
	return 0;
}

