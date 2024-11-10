#include <stdio.h>
#include <string.h>

int main() {
    char nome1[50];
    printf("Insira o nome:\n");
    fgets(nome1, 50, stdin);
    int tamanho_name = strlen(nome1);

    for (int i = tamanho_name - 1; i >= 0; i--) {
        printf("%c", nome1[i]);
    }

    return 0;
}
