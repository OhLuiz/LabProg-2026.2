#include <stdio.h>
int main(void){
 float fahr, celsius;
 int inicio, fim, incr;
 inicio = 0; //limite inferior da tabela
 fim = 300; //limite inferior
 incr = 20; //incremento
 fahr = inicio;

 while (fahr <= fim) {
  celsius = 5.0*(fahr - 32)/9.0;
  printf("%.2f\t%.2f\n",fahr, celsius);
  fahr = fahr + incr;
 }
 return 0;
}
