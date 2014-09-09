#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter Score: ");
    scanf("%d",&x);
    if(80<x&&x<=100)
    {
         printf("Your Grade: A\n");
    }

    if(70<=x&&x<=79)
    {
        printf("Your Grade: B\n");
    }

    if(60<=x&&x<=69)
    {
        printf("Your Grade: C\n");
    }

    if(50<=x&&x<=59)
    {
        printf("Your Grade: D\n");
    }

    if(0<=x&&x<50)
    {
        printf("Your Grade: F\n");
    }
    if(x<0||x>100)
    {
        printf("Error\n");
    }
        system("pause");
    return 0;
}
