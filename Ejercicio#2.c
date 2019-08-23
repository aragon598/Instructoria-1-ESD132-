#include <stdio.h>
	int main(){
		
		int vector[]={10,5,8,9};
		int eliminar;
		
		//Mostramos los elementos
		for ( int i = 0; i < 4; i++)
		{
			printf("| %i |",vector[i]);
		}		
//--------------------------------------------------------------------------------		
		printf("\n ¿Que elemento desea borrar?");
		scanf("%d",&eliminar);
		
		for (int j = 0; j< 4;j++)
		{
			if (eliminar==vector[j])
			{
				vector[j]= 0 ;
			}
			else{
				
				}
		}
		printf("\n");
		for ( int k = 0; k < 4; k++)
		{
			printf("| %i |",vector[k]);
		}	
		
			
		return 0;
		}
