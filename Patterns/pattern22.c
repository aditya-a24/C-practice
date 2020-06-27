#include<stdio.h>
int main()
{
    int i, j, rows, n;
    char ch;
    printf("enter the number of rows : ");
    scanf("%d", &rows);
    for(i=1 ; i<=rows ; i++)
    {
        ch='A';
        n=1;
        for(j=1 ; j<=rows*2-1 ; j++)
        {
            if(j>=rows+1-i && j<=rows-1+i)
            {
                if(j<=rows)
                {
                    printf("%d", n);
                    n++;

                }
                else
                {
                   printf("%c", ch);
                   ch++;
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






