#include <stdio.h>

int sumanumeros(int n1, int n2){
	int resultadosum = n1 + n2;
	return resultadosum;
}
	
	int multiplicacion(int n1,int n2){
		
		int f = sumanumeros( n1, n2);
		int resultadomult = f * 2;
		return resultadomult;
		
	}
		
		
		int main(int argc, char *argv[]) {
			
			int numero1,numero2;
			numero1 = 1;
			numero2 = 1;
			
			//sumanumeros(numero1,numero2);
				
				
		printf("\nEl resultado de la multiplicacion es %d",multiplicacion(numero1,numero2));
			
			
			return 0;
		}
