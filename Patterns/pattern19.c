#include<stdio.h>
int main()
{
    int i, j, rows;
    char ch;
    printf("enter the number of rows : ");
    scanf("%d", &rows);
    for(i=1 ; i<=rows ; i++)
    {
        ch='A';
        for(j=1 ; j<=rows*2-1 ; j++)
        {
            if(j>=rows+1-i && j<=rows-1+i)
            {
               printf("%c", ch);
               (j<rows ? ch++ : ch--);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}




