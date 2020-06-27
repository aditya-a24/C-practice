#include<stdio.h>
int main()
{
    int i, j, rows, col, p;
    printf("enter the number of pipes : ");
    scanf("%d", &p);
    rows=p*3;
    col=2*p-1;
    for(i=1 ; i<=rows ; i++)
    {
        for(j=1 ; j<=col ; j++)
        {
            if(i<=rows/3)
            {
                if(j>=col+1-i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }

            else if(i<=p*2)
            {
                if(j==p)
                {
                    printf("|");
                }
                else if(j<=i-(rows/3)-1)
                {
                    printf("*");
                }
                else if(j>=i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }

            else if(i<=p*3)
            {
                if(j<=rows+1-i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}


