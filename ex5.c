/* Escreva um programa em C que calcula a m�dia de elementos armazenados em um
vetor de 30 posi��es.*/
#include<stdio.h>
#include<stdlib.h>
int main (){
	int v[30];
	int i,soma = 0;
	float m;
	for (i=0;i<30; i++){
   printf ("\n Digite os numeros   \n",v[i]);
    	scanf ("%d",&v[i]);
    	soma = soma + v[i];
    
	
}
      m = soma / i;


	printf("\n O resultado %d / %d = %2.f ",soma,i,m);
   	
   

	return 0;
}
