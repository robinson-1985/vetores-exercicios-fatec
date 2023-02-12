/* 23) Preencher um vetor com os numeros 10 a 20, e depois mostrar os elementos 
ímpares do vetor.*/

#include<stdlib.h>
#include<math.h>
#include<string.h>

int z, vet[11], t=10;

void entrada(){
    for(z=0; z<11; z++){
        vet[z]= t;
        t++;
    }
    printf("\n\n");
}

void saida (){
    for(z=1; z<11; z=z+2){
        printf("%d\t",vet[z]);
        printf("\n");
    }
}
main(){
    entrada();
    saida();
    system("pause");
    return(0);
}
