#include <stdio.h>

int main () {
    int precos[5] = {10, 20, 30, 40, 50};
    float precos_desconto[5]; 
    int i;
    float desconto = 0.10; 

    printf("Precos com desconto:\n");

    for (i = 0; i < 5; i++) {
        precos_desconto[i] = precos[i] - (precos[i] * desconto);
        printf("%.2f\n", precos_desconto[i]);
    }
    return 0;
}

