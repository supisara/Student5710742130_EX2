#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    if(n>40&&n<=100)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    system("pause");
    return 0;
}
