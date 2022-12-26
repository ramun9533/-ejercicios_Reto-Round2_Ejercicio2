#include <stdio.h>

#define MAXSIZE 7

void main ()

{
    //Números: [15, 75, 46, 50, 4, 97, 67]
    int vector[MAXSIZE] = {15, 75, 46, 50, 4, 97, 67};
    int acum, acum1;

    for (int i = 0; i < MAXSIZE - 1 ;i++)
      {
        for (int j = 0; j < MAXSIZE - 1 - i; j++) // Pner atencion a este detalle para optimizatr el metodo
         {
            if (vector [j] > vector[j+1])
            {
                acum = vector [j];
                vector [j] = vector [j+1];
                vector [j+1] = acum;
            }

         }
      }
      printf("\n");
         for (int i = 0; i < MAXSIZE; i++)
         {
            /* code */
            printf("\t%d\t", vector[i]);
         }
}