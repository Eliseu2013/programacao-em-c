#include <stdio.h>

void main(){
/*QUESTÃO 03: Joãozinho investiu Q reais em
uma aplicação com rendimento fixo de R% ao
mês. Pede-se a implementação de um
programa que calcule o valor (e exiba-o)
disponível na conta de Joãozinho após A anos
de investimento.*/

 float q,r,a,valor;
    printf("Digite o valor investido: ");
    scanf("%f",&q);
    printf("Digite a taxa de rendimento: ");
    scanf("%f",&r);
    printf("Digite o tempo de investimento em anos: "); 
    scanf("%f",&a);
    
    printf("O valor disponivel na conta após %.2f anos é: %.2f",a,valor=q*(1+(r/100))*a);
}