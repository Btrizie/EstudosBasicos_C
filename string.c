#include <stdio.h>
#include <string.h>


int main (void){
    char nome[100];

    printf("----- Bem Vindo ----- \nVamos inverter seu nome?");
    printf("\nDigite seu nome: ");
    gets(nome);

    int tamReal = strlen(nome);
    char aux;
    char *fim = nome + tamReal - 1;
    char *inicio = nome;

    

    printf("\n\nInvertendo nome  \n[          ]\n[==        ]\n[====      ]\n[======    ]\n[========  ]\n[==========]");
    while (fim > inicio){
        aux = *inicio;
        *inicio = *fim;
        *fim = aux;
        fim--;
        inicio++;
    }
    
    printf("\n\nNome invertido: %s", nome);
    return 0;

}
