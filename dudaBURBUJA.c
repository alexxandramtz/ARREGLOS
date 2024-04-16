#include <stdio.h>

void ordenamientoascendente(int arreglo[], int n ){
	
	int i,j,aux;
	
	for(i=0; i<n; i++){
		for(j=0; j<n-1; j++){
			if(arreglo[j] > arreglo[j+1]){
				aux = arreglo[j];
				
				arreglo[j] = arreglo[j+1];
				
				arreglo[j+1] = aux;
			}
		}
	}
	
	
	
}
	
	
	int main(int argc, char *argv[]) {
		
		int arreglo[3]={30,20,10};
		int i;
		
		printf("ARREGLO INICIAL\n");
		for(i = 0; i<3; i++){
			printf("%d ",arreglo[i]);
		}
		
		
		ordenamientoascendente(arreglo,3);
		
		
		printf("\nARREGLO ASCENDENTE --- MENOR a MAYOR\n");
		for(i = 0; i<3; i++){
			printf("%d ",arreglo[i]);
		}
	
	
	return 0;
}

