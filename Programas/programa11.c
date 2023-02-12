/* 11) Armazenar em Vetores, Nomes e Notas PR1 e PR2 de 6 alunos. Calcular 
a média de cada aluno e imprimir aprovado se a média for maior que 5 e 
reprovado se média for menor ou igual a 5. Obs: 2 vetores para as notas 
tipo float. 1 vetor para os nomes, 1 vetor para a média e 1 vetor para 
situação. */

#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<math.h>
#define qtd 2

char nome[6][20], situacao[6][20];
float pr1[6], pr2[6], media[6];
int i = 0;

float calcMedia(float n1, float n2){
    float md;

    md = (n1 + n2) / 2;

    return(md);
}

void entraDados(){
    for(i = 0; i < qtd; i++){
        printf("Informe nome %d: ", i+1);
        gets(nome[i]);
        printf("Informe nota %d do aluno %s: ", i, nome[i]);
        scanf("%f",&pr1[i]);
        gets(nome[i]);
        i++;
        printf("Informe nota %d do aluno %s: ", i, nome[i]);
        scanf("%f",&pr2[i]);
        gets(nome[i]);
        i = 1;
    }
}

void Media(){
    for(i = 0; i < qtd; i++){
        media[i]=(pr1[i]+ pr2[i])/2;
        if(media[i] > 5)
        strcpy(situacao[i],"Aprovado! Parabéns");
        else
        strcpy(situacao[i],"Reprovado");
    }
}

void mostraDados(){
    system("cls");
    printf("__________________________________________ ________________________");
    printf("\n\nNome\tNota1\t\tNota2\tMedia\tSituacao" );
    printf("\n________________________________________ ________________________");
    for(i = 0; i < qtd; i++){
    printf("\n%s\t%3.2f\t\t%3.2f\t%3.2f\t%s\n",nome[i], pr1[i], pr2[i], media[i], situacao[i]);
    }
}

int main(){
    entraDados();
    Media();
    mostraDados();
}
