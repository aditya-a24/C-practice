#include<stdio.h>
int main()
{
    int i, j, rows, n;
    printf("enter the number of rows : ");
    scanf("%d", &rows);
    for(i=1 ; i<=rows ; i++)
    {
        n=1;
        for(j=1 ; j<=rows ; j++)
        {
            if(j<=i)
            {
                printf("%d", n);
                n=1-n;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
