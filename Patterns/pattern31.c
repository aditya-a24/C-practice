#include<stdio.h>
int main()
{
    int i, j, rows, k, n;
    char ch;
    printf("enter the number of rows : ");
    scanf("%d", &rows);
    for(i=1 ; i<=rows ; i++)
    {
        k=1;
        n=1;
        ch='A';
        for(j=1 ; j<=(rows*2)-1 ; j++)
        {
            if(j>=rows+1-i && j<=rows-1+i && k)
            {
                if(i%2==0)
                {
                    printf("%c", ch);
                    ch++;
                }
                else
                {
                    printf("%d", n);
                    n++;
                }
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
