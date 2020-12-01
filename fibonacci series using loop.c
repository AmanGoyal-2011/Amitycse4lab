
#include <stdio.h>

int main()
{
    int sum = 0, n;
    int a = 0;
    int b = 1;
    printf("enter the value\n");
    scanf("%d", &n);
    printf("nth fibonacci term");
    while(sum <= n)
    {
        printf("%d\n", sum);
        a = b;
        b = sum;
        sum = a + b;
    }

    return 0;
}
