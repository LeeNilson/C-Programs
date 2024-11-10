#include <stdio.h>
#include <stdlib.h>

typedef unsigned int positivos[5];

int main() {
    positivos v;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o valor de v[%d]: ", i);
        scanf("%u", &v[i]);

        // Verificar se o valor é positivo
        if (v[i] < 0) {
            printf("Valor inválido. Por favor, insira um valor positivo.\n");
            i--; // Repetir a leitura para o mesmo índice
        }
    }

    for (i = 0; i < 5; i++) {
        printf("Valor de v[%d]: %u\n", i, v[i]);
    }

    system("pause");
    return 0;
}