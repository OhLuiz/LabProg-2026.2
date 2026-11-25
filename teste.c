#include <stdio.h>
#include <stdbool.h>
const int INICIO =  0;  // limite inferior da tabela
const int FIM = 300; // limite superior
const int INCR = 20; // Incremento


//usando o const int significa que a variável não terá seu valor tipo modificado
//usando define há a chance da variável ter seu valor mudado

#define convertF(c) (9.0/5.0)*c + 32
#define convertC(f) (5.0/9.0)*(f -32)
//podemos usar define para criar funções
//sempre usar parenteses quando definir
//isso ganha velocidade

/* Imprime a tabela Fahrenheit-Celsius */
bool choice = true;
int main(void){
  //A variável dentro do for, existe apenas dentro do for
  if (choice == false){
   for (int fahr = FIM; fahr >= INICIO; fahr = fahr- INCR){
    float celsius = convertC(fahr);
    printf("%3d %6.1f\n", fahr, celsius);
   }
  }else{
  for (int celsius = FIM; celsius >= INICIO; celsius = celsius - INCR){
   float fahr =convertF(celsius);
   printf("%3d %6.1f\n",celsius, fahr);
  }
 }
 return 0;
}
