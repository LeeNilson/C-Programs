#include <stdio.h>
#include <string.h>
#include <locale.h>

int Soma (int x, int y){
int resultado = x + y ;
return resultado;
}

int main() {

int vet [8];
int x;
int y;
int resultado;
        for (int i = 0; i <= 7; i++){
            printf ("Digite um número para armazenar de 0 à 7: \n") ;
            scanf("%d", &vet[i]);
         }
    
    printf ("Digite um valor para X: \n");
    scanf ("%d", &x);
        if (x >= 8) {
            printf ("Valor inválido, digite um número de 0 a 7:\n");
            scanf("%d", &x);
        }
    
    printf ("Digite um valor para Y: \n");
    scanf("%d", &y);
        if (y >= 8) {
            printf("Valor inválido, digite um número de 0 à 7: \n");
            scanf("%d", &y);
        }
        
resultado = Soma(vet [x], vet[y]);
printf ("Resultado da Soma:%d\n", resultado);

return 0;
}

