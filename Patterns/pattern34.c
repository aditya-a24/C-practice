#include<stdio.h>
int main()
{
    int i, j, rows, p, k=1;
    printf("enter the number of rows : ");
    scanf("%d", &rows);
    for(i=1 ; i<=rows ; i++)
    {
        p=k;
        for(j=1 ; j<=rows ; j++)
        {
            if(j<=i)
            {
                printf("%2d ", p);
                p=p-(rows-i+j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        k=k+rows+1-i;
    }
}



