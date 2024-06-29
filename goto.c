#include <stdio.h>
int main()
{
    for (int i = 0; i < 50; i++)
    {
        if (i == 21)
        {
            goto next;
        }
        printf("%d\t", i);
    }

next:
    for (int j = 111; j < 199; j++)
    {
        printf("%d\t", j);
    }

    return 0;
}
