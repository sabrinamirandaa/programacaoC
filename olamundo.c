#include <stdio.h>

int main() {

    printf("Jogo Super Trunfo em C\n");
    char Estado [20];
    char Codigo [3];
    char Cidade [20];
    int População;
    float Area;
    float PIB;
    int Pontos_Turisticos;

    printf("Carta 1\n");

    printf("Digite seu Estado - 'A' a 'H':  ");
    scanf("%s", &Estado);
    printf("Seu Estado é: %s\n", Estado);

    printf("Digite seu Codigo 'ex: A01, B03': ");
    scanf("%s", &Codigo);
    printf("Seu Codigo é: %s\n", Codigo);

    printf("Digite sua Cidade: ");
    scanf("%s", &Cidade);
    printf("Sua Cidade é: %s\n", Cidade);

    printf("Digite sua População: ");
    scanf("%d", &População);
    printf("Sua População é: %d\n", População);

    printf("Digite sua Area (em km²): ");
    scanf("%f", &Area);
    printf("Sua Area é: %.3f km²\n", Area);



}