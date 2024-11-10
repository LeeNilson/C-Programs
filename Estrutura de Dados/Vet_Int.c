#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
   int numero;
   int vet [11];
   int i; 

for (i = 0 ; i <= 10 ; i++){
    printf ("Digite um número inteiro:\n");
    scanf ("%d", &vet[i]);
}

printf ("\nValores armazenados no vetor:\n");
    for (i = 0 ; i <= 10 ; i++){
    printf ("%d", vet[i]);
    
}
printf ("\n");

return 0;

}

//1 - Inclusão das bibliotecas
//2 - Declaração da função main
//3 - Declaração de váriaveis
//4 - Utilização da estrutura for, utilizando a variável i como indice e iterador
//5 - Utilização da função printf para receber o input do usuário
//6 - Utilização da função scanf para fazer o endereçamento do input do usuário, 
//para a variável vet que irá receber a variável i, que será iterada pela estrutura for
//7 - Utilização da função printf para imprimir o vetor
//8 - É NECESSÁRIO FAZER OUTRA ESTRUTURA FOR PARA ASSIM IMPRIMIR O VETOR
//9 - função printf com um barra n para dar espaço
//10 - return 0; para finalizar a função main
// FECHA COLCHETES
