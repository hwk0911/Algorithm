#include <stdio.h>
void Result(int a)
{
    int i,j;
    for(i = 0 ; i<a ; i++)
    {
        for(j = 0 ; j < i+1 ; j++)
            printf("*");
        printf("\n");
    }
}

int main()
{
    int number;
    scanf("%d",&number);
    Result(number);
}