#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    if(n%2==0&&n%3!=0)
        printf("%d is divisible by 2\n",n);
    if(n%2!=0&&n%3==0)
        printf("%d is divisible by 3\n",n);
    if(n%2==0&&n%3==0)
        printf("%d is divisible by 2 or 3\n",n);
    if(n%2!=0&&n%3!=0)
        printf("%d is not divisible by 2 or 3\n",n);
    system("pause");
    return 0;
}
