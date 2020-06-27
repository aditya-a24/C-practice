#include<stdio.h>
int main()
{
    int i, j, rows;
    char ch=64;
    printf("enter the number of rows : ");
    scanf("%d", &rows);

    for(i=1 ; i<=rows ; i++)
    {
        ch=ch+2*(i-1)+1;
        for(j=1 ; j<=rows ; j++)
        {

            if(j>=rows+1-i)
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

