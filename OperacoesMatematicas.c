#include<stdio.h>

/*soma +;
subtrair -; 
multiplicar *;
dividir /;
modulo(saber se o numero e par ou impar, resto da divisao de x por y);
elevar ao quadrado x * x;
*/
int main(){

    int num1, num2, resultado;
    float res;

    printf("Insira o num1:\n");
    scanf("%d", &num1);

    printf("Insira o num2:\n");
    scanf("%d", &num2);


    //soma
    resultado = num1 + num2;
    printf("A soma dos dois numeros e %d.\n", resultado);//cast - conversao de somente uma variavel sem ter que mexer em todo o codigo

    //subtracao
    resultado = num2 - num1;
    printf("A subtracao e %d.\n", resultado);//cast - conversao de somente uma variavel sem ter que mexer em todo o codigo

    //multiplicacao
    resultado = num1 * num2;
    printf("A multiplicacao e %d.\n", resultado);//cast - conversao de somente uma variavel sem ter que mexer em todo o codigo

    //divisao
    res = (float)num1 / (float)num2;
    printf("A divisao e %.2f.\n", res);

    //quadradp
    resultado = num1 * num1;
    printf("O quadrado e %d.\n", resultado);//cast - conversao de somente uma variavel sem ter que mexer em todo o codigo

    //verificar se e par ou impar
    if(num1 % 2 == 0){
        printf("%d e par.\n", num1);
    }else{
        printf("%d e impar.\n", num1);
    }

}