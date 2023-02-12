/* 16) Preencher um vetor com os numeros 1O a 20, e depois mostrar os elementos 
pares do vetor de trás prá frente. E também mostrar os números ímpares.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int z,x,vet[11], t=10;

void process (){
    for(z=0; z<11; z++){
        vet[z]= t;
        t++;
    }
    printf("\n\n");
    for(z=10; z>=0; z=z-2){
        printf("%d\t",vet[z]);
        printf("\n\n");
    }
}
void saida (){
    for(x=1; x<11; x=x+2){
    printf("%d\t",vet[x]);
    printf("\n");
    }
}

main(){
    process();
    saida();
    system("pause");
    return(0);
}
