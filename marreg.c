#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    
    int o ,n, m;
    printf("Ingrese el numero de matrices \n");
    scanf("%d", &o);
    printf("Ingrese el numero de filas  \n");
    scanf("%d", &n); // se pide al usuario el tamana de la matrix
    printf("Ingrese el numero de filas  \n");
    scanf("%d", &m);
    int Matrix[n][m];

    printf("\n");
    for (int i= 0; i <o; i++)
    {
        for(int i = 0; i < n; i++)
        {
            printf("\n");
            for(int j=0; j<m ; j++)
            {
                Matrix[i][j]=0;
                printf("%d\t", Matrix[i][j]);
            }

        }
        printf("\n Matrix:" );
        printf("\n");
    }
  for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < m; j++)
        {            
            Matrix[i][j] = 1;
            printf("%d\t", Matrix[i][j]);
        }
    }
   


return 0;
}
