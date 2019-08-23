#include <stdio.h>
#include <math.h>
int main(){
int tamanio;

printf("Ingrese el número de datos a ingresar.");
		scanf("%d",&tamanio);
		//Declaramos ambos array
		float vector[tamanio];
		for (int i = 0; i < tamanio; i++)
		{
			printf("Ingrese el valor N° %d",(i+1));
			scanf("%e",&vector[i]);
		}
		
		
		
		
		
		return 0;
		}
