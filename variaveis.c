#include<stdio.h>
 void main () {
    // caracteres

   char letras; // o char pode armazenar 256 valores, já que representam 8 bits
   // valores esses que vão de -127, 0 até +127
   letras = 'A' /* '  aspas simles corresponde a um caracter apenas e em ascII corresponde a um numero */ 

   unsigned char caracteresnaoneg; // nesse caso armazena só de 0 até +255, ignorando os negativos

   char texto[] = "B"; // = é atribuição, == é igualdade 

  // ex: a = 1, atribuo para a o valor 1
  //     a == 1, a é igual a 1

/*
"B" é uma string.
Uma string é uma sequência de caracteres
terminada por '\0'.

"B" equivale, na memória, a:
{'B', '\0'}
*/

   // numeros inteiros 
   unsigned int naonegativos; // variavel que não armazena numeros negaetivos

   short int numerospeq;
   int numeros;
   long int numeroslongos;
   
    // numeros reais (possuem virgula)
   float reaisnormal;
   double reaisgrande;
   long double reaisenormes;


 }