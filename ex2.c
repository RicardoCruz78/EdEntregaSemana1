/*  2Escreva um programa em C que encontra o maior elemento em um vetor de 10
valores digitados pelo usuário.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, maior=0;
    float n[10];
    
    printf("digite 10 numeros");
    printf("\n");
    for (i=0;i<10;i++)
    {
    printf("numeros %d : \n", i+1);
    scanf("%f", &n[i]);
}

        
        for(i=0;i<10;i++){
            if(n[i]>maior){
                maior=n[i];
            }
        }
     printf("o maior valor he %d", maior);
     
        

return 0;
}


