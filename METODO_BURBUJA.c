#include <stdio.h>

int main(int argc, char *argv[]) {
//CON EL METODO BURBUJA RELIZAREMOS EL ORDENAMIENTO DE NUMEROS DE FORMA 
//ASCENDENTE Y DESCENDENTE.
	//Primero voy a inicializar mis variables en donde necesitaré un auxiliar 
	//para estar haciendo el comparativo de mis números.
	//DECLARAR VARIABLES:
	
	int arreglo[5] = {10,43,76,55,23};
	//variable auxiliar.
	int aux;
	
	
	//el metodo buruja se inicia metiendo un for en otro for
	for (int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			if(arreglo[j]>arreglo[j+1]){
				
			   //aqui es donde comienzan a ordenarse con la ayuda del auxiliar	
				aux = arreglo[j];
			    arreglo[j] = arreglo[j+1];
				arreglo[j+1] = aux;
					
			}
		}
	}
	
        printf("numeros en orden ascendente:\n");
	for (int i = 0; i < 5; i++){
		printf("%d\n",arreglo[i]);
		
	}
	
	printf("numeros en orden descendente:\n");
	for (int i = 4; i >= 0; i--){
		printf("%d\n",arreglo[i]);
	}	
	
	return 0;
}

