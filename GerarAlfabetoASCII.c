#include<stdio.h>
/*para que voce consiga elaboras o alfabeto, quando for colocar o scanf, no char voce coloca %c, dai voce pega os numeros da tabela ascii
que correspondam as letras, e coloca os numeros correspondentes.*/
int main(){
    for(int i = 97; i <= 122; i++){
        printf("%c\n", i);
    }
}
