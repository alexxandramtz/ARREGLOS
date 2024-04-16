#include <stdio.h>
//con este mismo arreglo usando switch opcion 1.imprimir el arreglo,2.opcion 
//sumar todos los valores e imprimir la suma, 3.con un ciclo a cada elemento
//del arreglo sumarle 2.imprimir los nuevos valores del arreglo.
int main(int argc, char *argv[]) {
	
	int arreglo [4]={10,20,23,40};
	int opcion;
	int suma=0;
	
	
/*	arreglo [0]=10;*/
/*	arreglo [1]=20;*/
/*	arreglo [2]=23;*/
/*	arreglo [3]=40;*/
	
	
	
	do{
		
		printf("\n**** MENU DE OPCIONES ****\n");
		printf("1.Arreglo \n");
		printf("2.suma de los elementos del arreglo\n");
		printf("3.sumar 2 a cada arreglo\n");
		printf("4.salir del menu\n");
		
		scanf("%d",&opcion);
		
		switch(opcion){
		case 1:
/*			printf("****ARREGLO*****\n");*/
/*			printf("elemento inicial= %d\n",arreglo[0]);*/
/*			printf("elemento dos = %d\n",arreglo[1]);*/
/*			printf("elemento tres= %d\n",arreglo[2]);*/
/*			printf("elemento cuatro= %d\n",arreglo[3]);*/
			for(int i=0; i<=3; i++){
				//printf("%d",i);
				printf("los arreglos son: %d\n",arreglo[i]);
			}	
			break;
		case 2:
			
			for(int i=0; i<4; i++){
				
				suma = suma + arreglo[i]; 
			}
			printf("La suma de todos los elementos es: %d\n",suma);
			break;
		case 3:
			for(int i=0; i<=3; i++){
				arreglo[i] = arreglo[i] + 2;
				printf("Los elementos del arreglo %d\n",arreglo[i]+2);
			}
			
			
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

	
	
    

	

