#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 50
struct tipo_pessoa{
    int idade;
    float peso;
    char nome [TAM];
    
};

typedef struct tipo_pessoa pessoa;

int main(){
    setlocale(LC_ALL, "Portuguese");

    pessoa pes = {0, 0.0, "Teste"};

    printf ("Início:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    pes.idade = 10;
    pes.peso = 99.99;
    strcpy(pes.nome, "Texto");

    printf("\nAlterando os campos via código:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    // Solicitando inserções via teclado

    printf("\nInsira um número inteiro para a idade:\n");
    scanf ("%d", &pes.idade);
    printf("Insira um número real para o peso:\n ");
    scanf("%f", &pes.peso);
    printf ("Insira uma palavra para o nome:\n");
    scanf("%s", &pes.nome);

    printf("\nAlterando com dados do usuário:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);


}