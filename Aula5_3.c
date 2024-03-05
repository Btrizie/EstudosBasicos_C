#include <stdio.h>

void main(void){

    char nome[20];
    float altura;
    float peso;
    float imc;

    printf("Insira seu nome:  ");
    scanf("%s", nome);
    printf("Insira sua altura:  ");
    scanf("%f", &altura);
    printf("Insira seu peso:  ");
    scanf("%f", &peso);

    imc = peso/(altura*altura);
    printf("Calculando..");
    if(imc < 17){
        printf("Nome: %s \nValor do imc: %.2f \nClassificação do imc: Abaixo do peso", nome, imc);
    }
    else if(imc >= 17 && imc < 18.5){
        printf("Nome: %s \nValor do imc: %.2f \nClassificação do imc: Abaixo do peso", nome, imc);
    }
    else if(imc >= 18.5 && imc < 25){
        printf("Nome: %s \nValor do imc: %.2f \nClassificação do imc: Peso normal", nome, imc);
    }
    else if(imc >= 25 && imc < 30){
        printf("Nome: %s \nValor do imc: %.2f \nClassificação do imc: Acima do Peso", nome, imc);
    }
    else if(imc >= 30 && imc < 35){
        printf("Nome: %s \nValor do imc: %.2f \nClassificação do imc: Obesidade grau I", nome, imc);
    }
    else if(imc >= 35 && imc < 40){
        printf("Nome: %s \nValor do imc: %.2f \nClassificação do imc: Obesidade grau II", nome, imc);
    }
    else{
        printf("Nome: %s \nValor do imc: %.2f \nClassificação do imc: Obesidade grau III", nome, imc);
    }
}
