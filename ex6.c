
/* 6) Escreva um programa que preenche um vetor de 10 posi��es
 com valores digitadospelo usu�rio. Declare um outro vetor
 que dever� conter esses mesmos valores, s� que sem repeti��es.*/
 #include <stdio.h>
 int main (){ 
 	int v[10],v2[10];
 	int i;
 	printf ("\nDigite os numeros do vetor 1 e 2\n");
 	for (i=0;i<10; i++){ 
 	scanf ("%d",&v[i]);
 
 	scanf ("%d",&v2[i]);
 	if (v[i]==v2[i]){
 		printf("\nDigite outro numero\n");
	 }
 }
 for (i=0;i<10;i++){
 	printf("\ primeiro Vetor %d segundo vetor %d \n" ,v[i],v2[i]);
 }
 
 	return 0;
 }
 
