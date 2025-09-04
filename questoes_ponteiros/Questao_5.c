#include <stdio.h>

int main() {
    int notas[6];
    int i;
    int *p_Inicio, *p_Fim;
    int temp;

    printf("Digite as notas de 6 alunos:\n");
    for (i = 0; i < 6; i++) {
        scanf("%d", &notas[i]);
    }

    p_Inicio = notas; 
    p_Fim = notas + 5;   

    while (p_Inicio < p_Fim) {
        temp = *p_Inicio;
        *p_Inicio = *p_Fim;
        *p_Fim = temp;

        p_Inicio++;  
        p_Fim--;   
    }


    printf("\nNotas na ordem invertida:\n");
    for (i = 0; i < 6; i++) {
        printf("%d ", notas[i]);
    }
    printf("\n");

    return 0;
}

