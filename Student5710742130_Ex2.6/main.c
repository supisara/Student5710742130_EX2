#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Please enter base 10 number: ");
    scanf("%d",&a);
    printf("Please  select output base [8 or 16]: ");
    scanf("%d",&b);
    if(b==8)
        printf("Result:%o\n",a);
    if(b==16)
        printf("Result:%x\n",a);
    if(a!=8&&a!=16)
        printf("Error");
    system("pause");
    return 0;
}
