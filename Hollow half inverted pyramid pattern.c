#include <stdio.h>
#include <stdlib.h>

int main()
{
   unsigned int Number_Rows ;
   unsigned int Counter_One = 0;
   unsigned int Counter_Two = 0;

   printf("Enter the Number of the Rows :");
   scanf("%i",&Number_Rows);

      //     5  4  3  2  1
   for(Counter_One = Number_Rows ; Counter_One > 0; Counter_One--)
   {
                           // 5
       for(Counter_Two = 0 ; Counter_Two <= Counter_One ; Counter_Two++)
       {

           if( Counter_Two == 0 ||  Counter_One == Number_Rows || Counter_One ==  Counter_Two )
           {

               printf("*");

           }
           else
           {

               printf(" ");

           }

       }

       printf("\n");

    }
    printf("*\n");

    return 0;
}
