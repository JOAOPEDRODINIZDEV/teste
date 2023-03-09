#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");

  m[t][t];
  for(int i=0; i<t; i++){
  	for(int j=0; j<t; j++){
  		printf("Insira o valor [%d][%d]",i+j, j+1);
  		scanf("%d",&m[i][j]);
	  }
  }

   int a[t][t];
   
   for(int i=0; i<t; i++){
   	for(int j=0; j<t; j++){
   		
   		m[i][j]= a[j][i];
	   }
   }
   
   printf("Matriz original\n");
   
   for(int i=0; i<t; i++){
      for(int j=0; j<t; j++){
    	printf("%d \t",m[i][j]);
    	printf("\n\n");
	  }
   }
   
   printf("Matriz Transporte \n");
   
   for(int i=0; i<t; i++){
   	for(int j=0; j<t; j++){
   		printf("%d \t\t",m[i][j]);
   		printf("\n");
	   }
   }
	return 0;
}
