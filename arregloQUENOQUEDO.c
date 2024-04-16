#include <stdio.h>

void arreglo(int arreglo1[]) {
	printf("Los elementos del arreglo son:\n");
	for(int i=0; i<=3; i++){
		
		//printf("los arreglos son: %d\n",arreglo[i]);
	}
	printf("\n");
}
void sumararreglo(int arreglo2){
	int suma=0;
	for(int i=0; i<4; i++){
		
		suma = suma + arreglo[i]; 
	}
	//printf("La suma de todos los elementos es: %d\n",suma);
}



void sumaelementos(arreglo3){
	for(int i=0; i<=3; i++){
		arreglo[i] = arreglo[i] + 2;
		//printf("Los elementos del arreglo %d\n",arreglo[i]+2);
	}
}

int main(int argc, char *argv[]) {
	
	int arreglo [4]={10,20,23,40};
	int opcion;

	do{
		
		printf("\n**** MENU DE OPCIONES ****\n");
		printf("1.Arreglo \n");
		printf("2.suma de los elementos del arreglo\n");
		printf("3.sumar 2 a cada arreglo\n");
		printf("4.salir del menu\n");
		
		scanf("%d",&opcion);
		
		switch(opcion){
		case 1:
			arreglo;
			
			break;
		case 2:
			sumararreglo;
			
			break;
		case 3:
			sumaelementos;
			
			
			break;
		case 4:
			printf ("***Saliendo del menu***");
			
			break;
			
		default:
			printf("la opcion no es valida");	
			
		}
		
	}while(opcion != 4);
	
	return 0;
}

