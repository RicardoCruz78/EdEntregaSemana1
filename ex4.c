/*4) Escreva um programa em C que ordena um vetor de 40 elementos digitados pelo
usuário.*/
#include <stdio.h>
#include <stdlib.h>

int main (){
   int vetor [8];
   int i;  
  
  
   for (i=0;i<8; i++){
   printf ("\n Digite os numeros na posicao %d  \n",i);
    	scanf ("%d",&vetor[i]);
    	
   }
   for (i=0;i<8;i++){
   	printf("\n Numeros digitados na posicao %d he [%d]",i,vetor[i]);
   }

}
