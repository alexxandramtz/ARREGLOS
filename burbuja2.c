#include <stdio.h>

int main(int argc, char *argv[]) {
	//CON EL METODO BURBUJA RELIZAREMOS EL ORDENAMIENTO DE NUMEROS DE FORMA 
	//ASCENDENTE Y DESCENDENTE.
	//Primero voy a inicializar mis variables en donde necesitar� un auxiliar 
	//para estar haciendo el comparativo de mis n�meros.
	
	int arreglo[3] = {16,15,11};//Defino las variables de mi arreglo.
	//Variable auxiliar.
	int aux;//Guarda el numero temporalmente
	
	//*Aqui comienzo a hacer uso de el m�todo buruja, se inici� metiendo 
	//un for dentro de otro for.
	
	for (int i = 0; i < 3; i++){//La variable i va a recorrer mi arreglo
		for(int j = 0; j < 3; j++){//La variable j recorre el arreglo y hace los cambios
			
			//16 es mi primer numero que se comparar� con el siguiente n�mero que es 15
			
			//    16     >       15 primer iteraci�n
			//    16     >       11 segunta iteraci�n
			//    16     >       0  tercer iteraci�n
			if(arreglo[j]>arreglo[j+1]){//[j]Es mi primer numero,[j+1]recorre al siguiente numero.
			 
			//Aqui es donde comienzan a ordenarse con la ayuda del auxiliar
			//aux. hasta este momento vale 0, pero como arreglo [j]en la primer iteraci�n
		    //vale 16 entonces ahora aux. tomar�a el valor de la variable asignada que es 16.
			//Hasta aqui auxiliar vale 16 y arreglo[j]vale 16
			
				aux = arreglo[j];
			
			
				arreglo[j] = arreglo[j+1];
				
			
			//                                    16  15  11  inicio
		//                                       15  16  11  primer iteraci�n
				arreglo[j+1] = aux;             //15  11  16  segunda iteraci�n
			}                                   //11  15  16  tercer iteraci�n
		}
	}
	//
	//
	
	printf("numeros en orden ascendente:\n");
	for (int i = 0; i < 3; i++){
		printf("%d\n",arreglo[i]);
		
	}
	
	return 0;
}

