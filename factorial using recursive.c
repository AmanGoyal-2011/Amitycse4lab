
#include <stdio.h>

int factorial(int number)
{
    if (number ==1 || number == 0)
    {
        return 1;
    }
    else{
        return (number * factorial(number - 1));
    }
}
int main()
{
    int num;
    printf("enter the num you want the factorial of :\n\a");
    scanf("%d", &num);
    printf("the value of %d is %d\n\a", num, factorial(num));

    return 0;
}