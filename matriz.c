#include <stdio.h>

int main (void)
{
    int matriz[5][4];
    for (int i = 0; i < 5; i++)
    {
       for (int j = 0; j < 4; j++)
       {
        matriz [i][j] = 0;
        
        if (i==2 && j==3)
        {
            matriz[i][j] = 4;
        }
        
       }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
        
    }

    return 0;
}