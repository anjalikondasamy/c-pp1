#include <stdio.h>
#include<conio.h>
int main()
{
    int num, i;
    clrscr();

    printf("Enter a positive integer: ");
    scanf("%d",&num);
    printf(" 1  %d",num);
    printf("Factors of %d are: ", num);
    for(i=1; i <= num; ++i)
    {
        if (num%i == 0)
        {
            printf("%d ",i);
        }
    }

    return 0;
}
