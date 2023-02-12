/* 17) Preencher um vetor com os numeros 10 a 20, e depois mostrar os elementos 
pares do vetor de trás prá frente.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int z, vetor[11], t = 10;

void preenchVetor(){
    for(z = 0; z < 11; z++){
        vetor[z]= t;
        t++;
    }
    printf("\n\n");
}

void mostraVetor(){
    for(z = 10; z >= 0; z = z-2){
        printf("%d\t",vetor[z]);
        printf("\n\n");
    }
}

int main(){
    preenchVetor();
    mostraVetor();
    system("pause");
    return(0);
}
