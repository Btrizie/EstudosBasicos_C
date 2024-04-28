#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void){

    char msg1[] = "Beatriz e Luisa";
	char msg2[20];
	char *ptr1 = msg1;
	
    int tamanho = strlen(msg1);
    char *ptr2 = msg2 + tamanho - 1;

    printf("-------Inverte nome--------- \n");
    printf("Nome: \n %s", msg1);

    while(tamanho > 0){  
        *ptr2 = *ptr1;
        ptr1++;
        ptr2--;
        tamanho--;
    } 
    ptr2++;

    printf("\nNome invertido: \n");
    printf(" %s", ptr2);

    return 0;
}