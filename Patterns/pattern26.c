#include<stdio.h>
int main()
{
    int i, j, rows;
    char ch;
    printf("enter the number of rows : ");
    scanf("%d", &rows);
    for(i=1 ; i<=rows ; i++)
    {
        ch=64+i;
        for(j=1 ; j<=rows ; j++)
        {
            if(j<=i)
            {
                printf("%c", ch--);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

