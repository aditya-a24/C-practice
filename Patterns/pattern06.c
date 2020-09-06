#include<stdio.h>
int main()
{
    int i, j, k=1, rows;
    printf("enter the number of rows : ");
    scanf("%d", &rows);
    for(i=1 ; i<=rows ; i++)
    {

        for(j=1 ; j<=rows*2-1 ; j++)
        {
            if(j>=rows+1-i && j<=rows-1+i && k)
            {
                printf("*");
                k=0;
            }
            else
            {
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }
}

