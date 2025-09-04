#include <stdio.h>

int main() {
    int notas[3][3];
    int i, j;
    int *p_notas;
    int somaDiagonal = 0;

    printf("Digite as notas de 3 provas de 3 alunos:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Aluno %d, Prova %d: ", i + 1, j + 1);
            scanf("%d", &notas[i][j]);
        }
    }

    printf("\nNotas registradas:\n");
    p_notas = &notas[0][0];  
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", *(p_notas + i*3 + j));  
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++) {
        somaDiagonal += *(p_notas + i*3 + i);
    }

    printf("\nSoma da diagonal principal: %d\n", somaDiagonal);

    return 0;
}

