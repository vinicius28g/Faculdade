#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	int matriz [2][3];
	
	
	for ( int i=0; i<3; i++ ){
		 for (int j=0; j<3; j++ )
 		{
     		scanf ("%i", &matriz[ i ][ j ]);
  		}
	}
 
  
	for(int i= 0; i<3 ;i++ ){	
		for(int j=0; j<3 ;j++ ){
			printf("%i |", matriz[i][j]);
		}
		printf("\n");
	}

}
