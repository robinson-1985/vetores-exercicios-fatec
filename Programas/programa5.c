/* 5) Preencher um vetor com 3 nomes com 20 letras no máximo cada. Imprimir os 
nomes.*/

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<locale.h>

int i, j, totalA=0, totalE=0;
char nome[3][20],tam=0;

void entrada(){
    for(i = 0; i < 3; i++){
        printf("\nDigite o %d nome: ", i+1);
        gets(nome[i]);
    }
}

void testa()
{
    for(i=0;i<3;i++)
    {
        tam = strlen(nome[i]);
            for(j = 0; j < tam-1; j++)
            {
                if(nome[i][j]=='A' || nome[i][j]=='a')
                    totalA++;
                    if(nome[i][j]=='E' || nome[i][j]=='e')
                    totalE++;
            }
    }
}

void mostraDados(){
    setlocale(LC_ALL,"Portuguese");
    printf("\no nome contém %d letra A", totalA);
    printf("\no nome contém %d letra E", totalE);
}

int main(){
    entrada();
    testa();
    mostraDados();
    return 0;
}
