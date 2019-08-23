#include <stdio.h>

	int main(){
		int tamanio;
		//Pedimos tamaño del array
		printf("Ingrese el número de datos a ingresar.");
		scanf("%d",&tamanio);
		//Declaramos ambos array
		int vector[tamanio];
		int copia[tamanio];
		
		for (int i = 0; i < tamanio; i++)
		{
			printf("Ingrese el valor N° %d",(i+1));
			scanf("%i",&vector[i]);
			copia[i]=vector[i];
		}
		
		printf("Vector ");
		for (int j = 0; j < tamanio; j++)
		{
			printf("| %i |",vector[j]);	
		}
		printf("\n");
		
		printf("Vector_copia ");
		
		for (int k = 0; k < tamanio; k++)
		{
			printf("| %i |",copia[k]);	
		}
		printf("\n");
		
		
		return 0;
		}
