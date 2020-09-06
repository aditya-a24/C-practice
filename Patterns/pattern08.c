#include<stdio.h>
int main()
{
    int i, j, rows, n;
    printf("enter the number of rows : ");
    scanf("%d", &rows);
    for(i=1 ; i<=rows ; i++)
    {
        n=0;
        for(j=1 ; j<=rows*2-1 ; j++)
        {
            if(j>=rows+1-i && j<=rows-1+i)
            {
                 (j<=rows ? n++ : n--);
                 printf("%d", n);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}



