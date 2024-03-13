#include<stdio.h>

int main(){
    /*Na linguagem C, nao existe o tipo de dado string.
   caractere: '' aspas simples, somente uma letra.
   string: "" aspas duplas, conjunto de letras/palavras.*/
    char opcao;

    printf("escolha uma opca:\n");
    printf("a - saldo da conta.\n");
    printf("b - Extrato da conta.\n");
    printf("c - limite da conta.\n");
    scanf("%c", &opcao);

    if(opcao == 'a'){
        printf("O saldo da conta e...");
    }else if(opcao == 'b'){
        printf("O extrato da conta e...");
    }else if(opcao == 'c'){
        printf("O limite da conta e...");
    }else{
        printf("Opcao invalida.\n");
    }
}
