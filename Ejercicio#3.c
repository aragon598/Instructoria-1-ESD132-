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
		
		//media
		float aux=0.0;
		float media;
		for (int i = 0; i < tamanio; i++)
		{
			aux=(aux + vector[i]); 
		}
		media=(aux/tamanio);
		
		printf("\nLa media es : %e",media);
		
		//varianza
		
		float var=0.0;
		for (int i = 0; i < tamanio; i++)
		{
			var += pow(vector[i]-media,2);
		}
		var=(var/tamanio);
		printf("\nLa varianza es %e",var);
		
		//Desviacion estandar
		
		float dev=sqrt(var);
		printf("\nLa desviación es %e",dev);
		
		
		
		
		
		
		return 0;
		}
