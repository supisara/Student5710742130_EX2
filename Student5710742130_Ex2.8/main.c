#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter midterm final: ");
    scanf("%d %d",&a,&b);
    c = a+b;
    if(a>=20&&b>=30)
    {
        printf("passed with score %d\n",c);
    }
    if(a<20||b<30)
    {
        if(c>=60)
        {
            printf("passed with score %d\n",c);
        }
        if(c<60)
        {
            printf("failed with score %d\n",c);
        }
    }
    if(a<20&&b<30)
    {
        printf("failed with score %d\n",c);
    }

    return 0;
}
