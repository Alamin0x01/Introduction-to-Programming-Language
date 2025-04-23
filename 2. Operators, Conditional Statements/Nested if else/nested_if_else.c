#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 1000)
    {
        printf("I will buy Punjabi\n");
        if (tk >= 1500)
        {
            printf("I will buy Punjabi and pant\n");
        }
        else
        {
            printf("no taka for pant\n");
        }
    }
    else
    {
        printf("NO TAKA\n");
    }

    return 0;
}
