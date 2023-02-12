// 21) Preencher um vetor com os numeros 10 a 20, e depois mostrar o vetor.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
    int i, vetor[11], x=10;

    for(i=0; i < 11; i++){
        vetor[i]= x;
        x++;
    }

    for(i = 0; i < 11; i++)

    printf("%d\t",vetor[i]);
    printf("\n");
    system("pause");
    return(0);
}