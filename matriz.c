#include <stdio.h>

int main (void)
{
    int matriz[5][5];
    for (int i = 0; i < 5; i++)
    {
       for (int j = 0; j < 5; j++)
       {
        matriz [i][j] = 0;
        
        if (i == j)
        {
            matriz[i][j] = 1;
        }
        
       }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
        
    }

    return 0;
}