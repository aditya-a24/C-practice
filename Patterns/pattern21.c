#include<stdio.h>
int main()
{
    int i, j, rows, n;
    char ch;
    printf("enter the number of rows : ");
    scanf("%d", &rows);
    for(i=1 ; i<=rows ; i++)
    {

        for(j=1 ; j<=rows*2 ; j++)
        {
            if(j>=rows+1-i && j<=(rows*2)+1-i)
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






