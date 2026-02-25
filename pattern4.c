#include <stdio.h>

int main()
{
    int i,j;

    
    for (i = 0; i < 3; i++){
        for (int j = 0; j < 2 * i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 3 - i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
