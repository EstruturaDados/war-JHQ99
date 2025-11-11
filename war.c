#include <stdio.h>
#include <string.h>

struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    
    struct Territorio territorios[5];
    
    int c;
    int i;

    printf("--- Cadastro de Territórios (Desafio de War) ---\n");
    printf("Por favor, insira os dados para 5 territórios.\n");

    for (i = 0; i < 5; i++) {
        
        printf("\n--- Território %d ---\n", i + 1);
        printf("Digite o nome: ");
        
        fgets(territorios[i].nome, 30, stdin);
        
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = 0;

        printf("Digite a cor do exército: ");
        fgets(territorios[i].cor, 10, stdin);
        territorios[i].cor[strcspn(territorios[i].cor, "\n")] = 0;

        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);


        while ((c = getchar()) != '\n' && c != EOF);
    }

    printf("\n\n========================================");
    printf("\n== MAPA DO MUNDO - ESTADO ATUAL ==\n");
    printf("========================================\n\n");

    
    for (i = 0; i < 5; i++) {
       
        printf("--- Território %d ---\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor: %s\n", territorios[i].cor);
        printf("Tropas: %d\n", territorios[i].tropas);
        printf("-----------------------\n");
    }

    return 0; 
}