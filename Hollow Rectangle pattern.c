#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int Number_One ;
    unsigned int Number_Two ;
    unsigned int Index_One = 0;
    unsigned int Index_Two = 0;

    printf("Enter the Number of the Rows     :");
    scanf("%i",&Number_One);

    printf("Enter the Number of the Columns  :");
    scanf("%i",&Number_Two);
                                                                         //   ****
                                                                         //   *  *
                                                                         //   *  *
     //                                    5                             //   ****
    for(Index_One = 1 ; Index_One <= Number_One; Index_One++)
    {
     //                                       3
        for(Index_Two = 1 ; Index_Two <= Number_Two; Index_Two++)
        {

                // 1- 0                                        0 1 2 3
                // 2- 1                                        0     3
                // 3- 2                                        0 1 2 3
            if( Index_One ==1 || Index_One==Number_One || Index_Two==1 || Index_Two==Number_Two)
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

    return 0;
}
