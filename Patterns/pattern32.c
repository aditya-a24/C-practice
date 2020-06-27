#include<stdio.h>
int main()
{
    int i, j, rows, k=0;
    printf("enter the number of rows : ");
    scanf("%d", &rows);
    for(i=1 ; i<=rows ; i++)
    {
        (i<=(rows+1)/2 ? k++ : k--);
        for(j=1 ; j<=rows ; j++)
        {
            if(j==k || j==rows+1-k)
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
}

