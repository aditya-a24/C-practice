#include<stdio.h>
int main()
{
    int i, j, rows, n, k=0;
    printf("enter the number of rows : ");
    scanf("%d", &rows);
    for(i=1 ; i<=rows ; i++)
    {
        if(i%2==1)
        {
            k=k+1;
        }
        else
        {
            k--;
            k=k+i;
        }
        n=k;
        for(j=1 ; j<=(rows*2)-1 ; j++)
        {
            if(j<=2*i-1)
            {
                if(j%2==0)
                {
                    printf("* ");
                }
                else
                {
                    printf("%2d ", n);
                    if(i%2)
                    {
                        n++;k++;
                    }
                    else
                    {
                        n--;
                    }
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

