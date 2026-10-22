#include <stdio.h>

int main() 
{
    int r, c;
    printf("Rows and Cols enter chey: ");
    scanf("%d %d", &r, &c);

    int a[10][10], b[10][10], sum[10][10];

    printf("Matrix A values:\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matrix B values:\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // addition
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nSum Matrix:\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
