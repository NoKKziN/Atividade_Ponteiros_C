#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *horas;
    int total = 0;

    printf("Quantos funcionarios? ");
    scanf("%d", &n);

    horas = (int*) malloc(n * sizeof(int));
    if (horas == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Horas trabalhadas pelo funcionario %d: ", i+1);
        scanf("%d", horas + i);  
    }


    for (i = 0; i < n; i++) {
        total += *(horas + i);  
    }

    printf("\nTotal de horas trabalhadas no mes: %d\n", total);

    free(horas);  
    return 0;
}

