#include<stdio.h>
int main()
{
    int i, j, rows, p, k=0;
    printf("enter the number of rows : ");
    scanf("%d", &rows);
    for(i=1 ; i<=rows ; i++)
    {
        p=0;
        for(j=1 ; j<=rows ; j++)
        {
            if(j<=i)
            {
                printf("%2d ", p);
                p=p+i-1;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}




