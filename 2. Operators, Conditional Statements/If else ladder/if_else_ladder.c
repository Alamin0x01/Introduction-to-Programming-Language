#include<stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 100)
    {
        printf("I will buy Punjabi\n");
    }
    else if (tk >= 50)
    {
        printf("I will buy Burger\n");
    }
    else if (tk >= 20)
    {
        printf("I will buy chips\n");
    }
    else if (tk >= 10)
    {
        printf("I will buy toffee\n");
    }
    else
        printf("Bad luck!\n");
    return 0;
}