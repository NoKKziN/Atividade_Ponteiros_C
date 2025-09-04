#include <stdio.h>

int main() {
    int cofrinho = 150; 
    int *p_cofrinho;    

    p_cofrinho = &cofrinho;   

    printf("Valor guardado no cofrinho: %d\n", *p_cofrinho);  
    printf("Endereco do cofrinho: %p\n", p_cofrinho);   

    return 0;
}
