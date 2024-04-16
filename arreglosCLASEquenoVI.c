#include <stdio.h>
    
int main(int argc, char *argv[]) {
	int arreglo [4]={10,20,23,40};
	int numero=23 ;
	//sumar la posicion 0 y 3 y multuiplicar la posicion 1 y 2 .
	for (int i=0; i<=3; i++){
		//printf(" %d ",arreglo[i]);
		if (arreglo [i] == numero){
			printf ("El numero si existe en el arreglo de la posicion  %d",i);
			return 0;
		}
		
	}
	
		printf("\nEl numero no exite en el arreglo");
	
	return 0;
}

