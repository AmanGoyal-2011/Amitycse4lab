

#include <stdio.h>

int main()
{
    int a;
    printf("enter number \n");
    scanf("%d", &a);
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("1");
        }
        printf("\n");
    }

    return 0;
}
