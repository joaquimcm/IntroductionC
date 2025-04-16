#include <stdio.h>

int main() {
    float Nota1, Nota2, Nota3, Media;
    int peso1, peso2, peso3;

    printf("Escreva a Nota 1:\n");
    scanf("%f", &Nota1);

    printf("Escreva o Peso da Nota 1:\n");
    scanf("%d", &peso1);

    printf("Escreva a nota 2:\n");
    scanf("%f", &Nota2);

    printf("Escreva o Peso da Nota 2:\n");
    scanf("%d", &peso2);
    
    printf("Escreva a nota 3:\n");
    scanf("%f", &Nota3);

    printf("Escreva o Peso da Nota 3:\n");
    scanf("%d", &peso3);

    Media = (Nota1 * peso1 + Nota2 * peso2 + Nota3 * peso3) / (peso1 + peso2 + peso3);
    
    if (Media >= 6.0) {
        printf("\nVoce Passou!\n Sua Media e %f", Media);
    } else {
        printf("\nVoce nao Passou!\n Sua Media e %f", Media);
    }
}