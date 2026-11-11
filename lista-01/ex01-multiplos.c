// Online C compiler to run C program online
#include <stdio.h>

void main(){
/*Faça um programa que leia um
número inteiro positivo N e exiba todos os
múltiplos de Y inferiores a N, onde N e Y são
fornecidos pelo usuário.*/
  int n,y,i,quant,multiplo;
  //Pegando informação do usúario
  printf("Digite o primeiro número N:");
  scanf("%d",&n);
  printf("Digite o segundo número Y:");
  scanf("%d",&y);
  
  //determinar multiplo utilizando a divisão
  quant = n/y;

  //exibir o multiplo
  //utilizando estrutura For para solução do problema
  for(i=1;i<=quant;i++){
     multiplo= i*y;
     printf("Os multiplos são : %.2d\n",multiplo);
  }
    
}