#include <stdio.h>
 
#define maximo 66559
 
 
void main(void) {
   unsigned long numero=3;
   unsigned long primos[maximo];
   unsigned long primos_num=1;
 
 
   //Primer numero primo: 2
   primos[0]=2;
 
   while (primos_num < maximo)
   {
 
         unsigned long i;        //Indice para la coleccion de numeros primos
 
         for (i=0;i<primos_num;i++) //"Loop" hasta usar la coleccion completa
         {
            if ( !(numero%primos[i]) ) //Si se hizo una division entera
               break;                 //salimos del "loop"
         }
 
         if (i == primos_num) //si no se pudo dividir el numero
         {
            primos[primos_num]=numero; //Entonces guardamos el numero en el indice actual
            primos_num++; //incremento del numero de numeros primos
         }
 
         numero++; //Incrementamos el numero
 
   }
   
   
