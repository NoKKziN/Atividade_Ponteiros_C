#include <stdio.h>

int main() {
    int idade; 
    int *p_idade;   

    p_idade = &idade; 
	
    printf("Digite o valor da sua idade: "); 
    scanf("%d", &idade);
    
    printf("Valor da sua idade: %d\n", *p_idade);
	printf("Endereco da idade: %p\n", (void*)p_idade);  

    return 0;
}
