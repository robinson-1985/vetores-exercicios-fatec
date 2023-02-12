/* 3) Preencher um vetor com os números pares do número 2 a 20. preencher 
um vetor com números de 10 a 19. Somar os vetores acima.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int x, y=0, vetor[10], vetor1[10];

void processamento(){
    for(x = 0; x <= 9; x++){
        vetor[x]= y + 2;
        y = y + 2;
    }
    
    for(x=0;x<=9;x++){
        printf("\t %d ",vetor[x]);
    }
}

void soma(){
    for(x=0;x<=9;x++){
        vetor1[x] = x + 10;
    }
}

void saida(){
    for(x = 0; x <= 9; x++){
        printf("\t %d ",vetor1[x]);
    }

    for(x=0;x<=9;x++){
        printf("\t %d ", vetor[x] + vetor1[x]);
        printf("\n\n");
    }
}

main(){
    processamento();
    soma();
    saida();
    system("pause");
    return(0);
}

// esse programa não está correto! tem que corrigir. 