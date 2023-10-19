#include <stdio.h>
#include <stdlib.h>


int main()
{

    unsigned int NumberOne ;
    unsigned int NumberTwo ;
    unsigned int CounterOne = 0;
    unsigned int CounterTwo = 0;


    printf("Enter the Number of Rows    :");
    scanf("%i",&NumberOne);
    printf("Enter the Number of Columns :");
    scanf("%i",&NumberTwo);


    for(CounterOne = 0; CounterOne < NumberOne ; CounterOne++)
    {
        for (CounterTwo = 0; CounterTwo < NumberTwo ; CounterTwo++)
        {

          printf("*");

        }
        printf("\n");
    }



    return 0;
}
