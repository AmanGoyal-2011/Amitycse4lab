
#include <stdio.h>

int main()
{
    int i = 0;
    printf("enter the number");
    scanf("%d", &i);
     while(i<30)
     {
         printf("%d\n\a", i);
         i = i + 1;
     }

    return 0;
}
