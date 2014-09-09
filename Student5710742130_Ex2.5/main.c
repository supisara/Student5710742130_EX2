#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    printf("Enter 2 Number: ");
    scanf("%d %d",&a,&b);
    c=a-b;
    if(0<=c)
    {
        printf("Absolute:%d\n",c);
    }

    else
    {
        d=c*(-1);
        printf("Absolute:%d\n",d);
    }
    system("pause");
    return 0;
}
