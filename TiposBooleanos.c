#include<stdio.h>
//tipo de dados

/*Booleanos (Verdadeiro/Falso) true/false

Na linguagem C, nao existe tipo de dado BOOLEANO

Mas..;

Na linguagem C, reconhece o numero 0 como falso(false), 
e qualquer outro dado diferente de 0 como verdadeiro(true).*/

int main(){

    int numero = -2;

    if(numero){
        printf("Verdadeiro");
    }else{
        printf("Falso");

    }

    return 0;
}