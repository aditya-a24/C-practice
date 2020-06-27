#include<stdio.h>
int main()
{
    int i, j, rows, k=0, n;
    printf("enter the number of rows : ");
    scanf("%d", &rows);
    n=(rows+1)/2;
    for(i=1 ; i<=rows ; i++)
    {
        if(rows%2==0)
        {
            if(i<=n)
            {
                k++;
            }
            if(i>n+1)
            {
                k--;
            }
        }
        else
        (i<=n ? k++ : k--);
        for(j=1 ; j<=n ; j++)
        {
            if(j<=k)
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
