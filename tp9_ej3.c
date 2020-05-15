#include <stdio.h>
#include <stdlib.h>

int suma_digitos(int);

int main(void){
    int value;
    value=suma_digitos(256);
    printf("La suma de los digitos es: %d \n",value);

return 0;
}

int suma_digitos(int n1){
   if((n1%10)==0){
       return 0;  //caso base
   }
   else{
       return ((n1 % 10) + suma_digitos(n1/10)); //recursividad
   }
}
