
#include <stdio.h>

int main()
{
    int num ,index=0;
    printf("enter the number");
    scanf("%d", &num);
    
    do
    {
        printf("%d", index);
        index = index + 1;
    }while(index<num);

    return 0;
}
