#include <stdio.h>

int main() {
    int pontos[4][4];
    int i, j;
    int *ptr;

    printf("Digite os pontos dos 4 jogadores em 4 sets:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Jogador %d, Set %d: ", i+1, j+1);
            scanf("%d", &pontos[i][j]);
        }
    }

    ptr = &pontos[0][0];  

    printf("\nPontos da partida:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", *(ptr + i*4 + j));
        }
        printf("\n");
    }

    int pares = 0, impares = 0;
    for (i = 0; i < 16; i++) {
        if (*(ptr + i) % 2 == 0)
            pares++;
        else
            impares++;
    }
    printf("\nPontos pares: %d, impares: %d\n", pares, impares);

    int totalJogador[4] = {0};
    int maxJogador = 0, jogadorMax = 0;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            totalJogador[i] += *(ptr + i*4 + j);
        }
        if (totalJogador[i] > maxJogador) {
            maxJogador = totalJogador[i];
            jogadorMax = i + 1;
        }
    }
    printf("\nPontuacao total de cada jogador:\n");
    for (i = 0; i < 4; i++) {
        printf("Jogador %d: %d\n", i+1, totalJogador[i]);
    }
    printf("Jogador com maior pontuacao: %d\n", jogadorMax);

    int totalSet[4] = {0};
    int maxSet = 0, setMax = 0;
    for (j = 0; j < 4; j++) {
        for (i = 0; i < 4; i++) {
            totalSet[j] += *(ptr + i*4 + j);
        }
        if (totalSet[j] > maxSet) {
            maxSet = totalSet[j];
            setMax = j + 1;
        }
    }
    printf("\nPontuacao total de cada set:\n");
    for (j = 0; j < 4; j++) {
        printf("Set %d: %d\n", j+1, totalSet[j]);
    }
    printf("Set mais disputado (maior soma): Set %d\n", setMax);

    printf("\nMedia de pontos por jogador:\n");
    for (i = 0; i < 4; i++) {
        printf("Jogador %d: %.2f\n", i+1, totalJogador[i]/4.0);
    }

    int diferencaMin = 1000, jogadorRegular = 0;
    for (i = 0; i < 4; i++) {
        int min = *(ptr + i*4), max = *(ptr + i*4);
        for (j = 0; j < 4; j++) {
            if (*(ptr + i*4 + j) < min) min = *(ptr + i*4 + j);
            if (*(ptr + i*4 + j) > max) max = *(ptr + i*4 + j);
        }
        if ((max - min) < diferencaMin) {
            diferencaMin = max - min;
            jogadorRegular = i + 1;
        }
    }
    printf("\nJogador mais regular: %d\n", jogadorRegular);

    return 0;
}

