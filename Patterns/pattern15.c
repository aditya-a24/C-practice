#include<stdio.h>
int main()
{
    int i, j, rows, n, k=0, l;
    printf("enter the number of rows : ");
    scanf("%d", &rows);
    n=(rows+1)/2;
    for(i=1 ; i<=rows ; i++)
    {
        l=1;
        (i<=n ? k++ : k--);
        for(j=1 ; j<=n ; j++)
        {
            if(j>=(n+1-k))
            {
                printf("%d",l);
                l++;
            }
            else
            {
                printf(" ");

            }
        }
        printf("\n");
    }
}

