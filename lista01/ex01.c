
#include <stdio.h>

int main() {
    char nome[50];
    int idade;
    char curso[50];
    int anoNascimento;
    int anoAtual = 2025;

    printf("Digite seu nome: ");
    scanf(" %[^\n]", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu curso: ");
    scanf(" %[^\n]", curso);

    anoNascimento = anoAtual - idade;

    printf("\nBem-vindo(a), %s!\n", nome);
    printf("Voce esta cursando %s.\n", curso);
    printf("Voce nasceu em %d.\n", anoNascimento);

    return 0;
}

