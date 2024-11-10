#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    int numeros [10], i, j, numero, repetido ;
         
     for (i = 0; i < 10; i++){
        printf("Digite um número inteiro para armazenar: \n");
        scanf("%d", &numero);
        int repetido = 0;
        for (j = 0; j < 10; j++){
            if (numeros [j] == numero){
                repetido = 1;
                printf("Número repetido. Tente novamente.\n");
                i--;
                
                break;
            }
        }
        if (!repetido ){
            numeros[i] = numero;
        }

     }
    printf("\nNúmeros Digitados:\n");
    for (i = 0; i < 10; i++){
        printf("%d", numeros[i]);
    }
    printf("\n");

    return 0;
}