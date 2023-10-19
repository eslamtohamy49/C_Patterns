#include <stdio.h>
#include <stdlib.h>


int main()
{

   unsigned int Number_One ;
   unsigned int Counter_One ;
   unsigned int Counter_Two ;

   printf("Enter the Number of Rows :");
   scanf("%i",&Number_One);

   for(Counter_One = Number_One ; Counter_One > 0 ; Counter_One--)
   {
       for(Counter_Two = Counter_One; Counter_Two > 0; Counter_Two--)
       {

           printf("*");

       }

       printf("\n");

   }



    return 0;
}
