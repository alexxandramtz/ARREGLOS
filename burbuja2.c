#include <stdio.h>

int main(int argc, char *argv[]) {
	//CON EL METODO BURBUJA RELIZAREMOS EL ORDENAMIENTO DE NUMEROS DE FORMA 
	//ASCENDENTE Y DESCENDENTE.
	//Primero voy a inicializar mis variables en donde necesitaré un auxiliar 
	//para estar haciendo el comparativo de mis números.
	
	int arreglo[3] = {16,15,11};//Defino las variables de mi arreglo.
	//Variable auxiliar.
	int aux;//Guarda el numero temporalmente
	
	//*Aqui comienzo a hacer uso de el método buruja, se iniciá metiendo 
	//un for dentro de otro for.
	
	for (int i = 0; i < 3; i++){//La variable i va a recorrer mi arreglo
		for(int j = 0; j < 3; j++){//La variable j recorre el arreglo y hace los cambios
			
			//16 es mi primer numero que se comparará con el siguiente número que es 15
			
			//    16     >       15 primer iteración
			//    16     >       11 segunta iteración
			//    16     >       0  tercer iteración
			if(arreglo[j]>arreglo[j+1]){//[j]Es mi primer numero,[j+1]recorre al siguiente numero.
			 
			//Aqui es donde comienzan a ordenarse con la ayuda del auxiliar
			//aux. hasta este momento vale 0, pero como arreglo [j]en la primer iteración
		    //vale 16 entonces ahora aux. tomaría el valor de la variable asignada que es 16.
			//Hasta aqui auxiliar vale 16 y arreglo[j]vale 16
			
				aux = arreglo[j];
			
			
				arreglo[j] = arreglo[j+1];
				
			
			//                                    16  15  11  inicio
		//                                       15  16  11  primer iteración
				arreglo[j+1] = aux;             //15  11  16  segunda iteración
			}                                   //11  15  16  tercer iteración
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

