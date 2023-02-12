// 2) Preencher um vetor com os números pares do número 2 a 20 

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int array[10], x = 0, y = 0;

void preencVetor(){
    for(x = 0; x < 10; x++){
        array[x] = y + 2;
        y = y + 2;
    }
}  

void mostraDados(){
    for(x = 0; x < 10; x++)
    printf(" %d ", array[x]);
}

int main(){
    preencVetor();
    mostraDados();
    printf("\n\n");
    system("pause");
    return(0);
}
