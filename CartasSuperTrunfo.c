#include <stdio.h>

int main() {
    // Dados da Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Dados da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Variáveis Globais de Temperaturas

int quantidade;
float temperaturas[100];
float media;

// Função: Entrada de dados (temperaturas)
void entradaDados() {
    printf("\n COLETA DE TEMPERATURAS \n");
    printf("Quantas temperaturas deseja informar? ");
    scanf("%d", &quantidade);

    for (int i = 0; i < quantidade; i++) {
        printf("Digite a temperatura %d: ", i + 1);
        scanf("%f", &temperaturas[i]);
    }
}


// Função: Calcular Média

float calcularMedia() {
    float soma = 0;

    for (int i = 0; i < quantidade; i++) {
        soma += temperaturas[i];
    }

    return soma / quantidade;
}


// Função: Exibir Média

void exibirMedia() {
    printf("\n MÉDIA DAS TEMPERATURAS \n");
    printf("Média calculada: %f °C \n", media);
}

    // ===== Entrada dos dados da Carta 1 =====
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf("%c", &estado1);

    printf("Código da carta (Ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%d", nomeCidade1);
    // depois da cidade esta cortando açao dos demais e ficando juntos me ajude por favor

    printf("População:");
    scanf("%d", &populacao1);

    printf("Área (km²):");
    scanf("%f", &area1);

    printf("PIB (em bilhões):");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos:");
    scanf("%d", &pontosTuristicos1);


    // ===== Entrada dos dados da Carta 2 =====
    printf("== Cadastro da Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf("%c", &estado2);

    printf("Código da carta (Ex: B03): ");
    scanf("%s",codigo2);

    printf("Nome da cidade: ");
    scanf(" %d", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos:");
    scanf("%d", &pontosTuristicos2);


    // ===== Exibição =====
    printf("===== Carta 1 =====\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", nomeCidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %f \n", area1);
    printf("PIB: %f \n", pib1);
    printf("Número de Pontos Turísticos:%d \n", pontosTuristicos1);

    printf("===== Carta 2 =====\n");
    printf("Estado:%c \n", estado2);
    printf("Código:%s \n",codigo2);
    printf("Nome da Cidade:%s \n", nomeCidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos2);

    return 0;
}
