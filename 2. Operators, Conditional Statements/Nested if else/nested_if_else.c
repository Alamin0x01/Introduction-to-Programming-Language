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

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char s[10001];
//     scanf("%s", s);

//     int charCount[26] = {0};
//     for (int i = 0; s[i] != '\0'; i++)
//     {
//         charCount[s[i] - 'a']++;
//     }
//     for (int i = 0; i < 26; i++)
//     {
//         if (charCount[i] > 0)
//         {
//             printf("%c - %d\n", 'a' + i, charCount[i]);
//         }
//     }

//     return 0;
// }