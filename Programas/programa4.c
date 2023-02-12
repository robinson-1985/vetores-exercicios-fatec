/* 4) Preencher um vetor de 8 elementos inteiros. Mostrar o vetor e informar 
quantos números são maior que 30, somar estes números. Somar todos os 
números.*/

#include <stdio.h>

int main(){
	int soma=0, somaMaior = 0, maior=0, i;
	int vet[8] ;
	int maiorTrinta [8];
	
//	Entrada de dados
	printf("\nPreencha o vetor\n ");
	
	for(i=0; i<8; i++){
		printf("\nDigite o numero %d: ",i+1);
		scanf("%d",&vet[i]);
	}
	printf("\nOs numeros do vetor sao: ");
	for(i=0; i<8; i++){
		somaMaior= vet[i]+somaMaior;
		printf(" %d",vet[i]);
	}
//	processamento e saida 
	printf("\n A soma deles = %d ", somaMaior);
	
	printf("\n Os  numeros maior que trinta =  " );
	
	for(i = 0; i < 8; i++){
		if(vet[i] > 30){
			maior = maior+ 1;
			maiorTrinta[i]= vet[i];
			soma = maiorTrinta[i] + soma;
			
			printf(" %d ", maiorTrinta[i]);
	    }
	}
	printf("\n A soma deles = %d ",soma);
	
	return 0;
}
