#include <stdio.h>
/*Faça um programa que leia
300 números reais. Ao final, devem ser
exibidas as seguintes informações:
a) A quantidade de valores negativos
digitados;
b) A média dos valores positivos.*/
void main(){
 float numeros[10],somaPositivos;
 int negativos,positivos,i;
negativos=0;
positivos=0;
somaPositivos=0;
 
 for(i=0;i<10;i++){
 printf("Digite o %dº número: ",i+1);
 scanf("%f",&numeros[i]);
 if(numeros[i]<0){
    negativos++;
    }else if (numeros>0){
     positivos++;
     somaPositivos+=numeros[i];
    }
 }
 printf("A quantidade de valores negativos digitados é : %d\n",negativos);
 printf("A média dos valores positivos digitados é : %.2f",somaPositivos/positivos);
}
