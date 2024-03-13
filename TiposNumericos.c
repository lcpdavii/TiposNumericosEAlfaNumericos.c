#include<stdio.h>

int main(){
    //inteiros  e reais
    //int numeroInteiro; //7, 1000, 456.
    //float numero; //4,25, 3.142536, 47,52.
    //double; //suporta uma quantidade maior de dados depois da virgula.

    float media, nota1 , nota2;

    printf("insira nota1:\n");
    scanf("%f", &nota1);

    printf("insira nota2:\n");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("A media e %.2f", media);
}
