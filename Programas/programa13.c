/* 13) Preencher um valor com 6 números e mostrá-los na tela. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int x, vetp[6];

void entrada (){
    for(x = 1; x < 6; x++){
        printf ("\tDigite um numero: ");
        scanf("%d",&vetp[x]);
        printf ("\n");
    }
}

void saida (){
    for(x = 1; x <= 6; x++)
        printf ("%d\t",vetp[x]);
        printf ("\n");
        printf("\n");
}

main(){
    entrada();
    saida();
    system("pause");
    return(0);
}
