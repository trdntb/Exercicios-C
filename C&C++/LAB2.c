#include <stdio.h>
#include <stdlib.h>

void criarArquivo() {
    FILE *arquivo;
    arquivo = fopen("dados.txt", "w");
    fclose(arquivo);
    printf("Arquivo criado com sucesso!\n");
}

void lerArquivo() {
    FILE *arquivo;
    char caractere;

    arquivo = fopen("dados.txt", "r");
    if (arquivo == NULL) {
        printf("Arquivo não encontrado.\n");
        return;
    }

    printf("Conteúdo do arquivo:\n");
    while ((caractere = fgetc(arquivo)) != EOF) {
        printf("%c", caractere);
    }

    fclose(arquivo);
}

void adicionarDados() {
    FILE *arquivo;
    char dados[100];

    arquivo = fopen("dados.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    printf("Digite os dados a serem adicionados: ");
    fflush(stdin);
    gets(dados);

    fprintf(arquivo, "%s", dados);

    fclose(arquivo);
    printf("Dados adicionados com sucesso!\n");
}

int main() {
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Criar arquivo\n");
        printf("2. Ler arquivo\n");
        printf("3. Adicionar dados\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                criarArquivo();
                break;
            case 2:
                lerArquivo();
                break;
            case 3:
                adicionarDados();
                break;
            case 4:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 4);

    return 0;
}
