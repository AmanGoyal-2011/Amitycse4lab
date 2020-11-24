
#include <stdio.h>

int main()
{ 
    unsigned int i;
    
    printf("enter the starting number from which it should be seen");
    scanf("%d",&i);
    while(i!=0)
    {
        printf("%d\n",i);
        i--;
    }
    return 0;
}
