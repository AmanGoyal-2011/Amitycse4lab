
#include <stdio.h>

int main()
{
    int a,b;
    
    printf("enter the number");
    scanf("%d", &a);
    printf("enter other number till which table is required");
    scanf("%d", &b);
    for(int i = 1; i<= b; i++)
    {
    printf("%d * %d = %d\n", a,i,a*i);
}
    return 0;
}