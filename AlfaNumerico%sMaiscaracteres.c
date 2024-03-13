#include<stdio.h>
//Nao existe tipo de dado STRING.
/*Quando for usar o CHAR, e ele contem varias palavras, usa-se Ex: CHAR NOME[50], parenteses com o numero dentro,
significa quantos caracteres podem contem na resposta.*/

//Nesse exemplo vai ser usado o CHAR com o dado %s, ou seja, com mais caracteres.
int main(){

 char nome[3];

 printf("Qual seu nome:\n");
 gets(nome);

 printf("Seu nome e %s.\n", nome);
}