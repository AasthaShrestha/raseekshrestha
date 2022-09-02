#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

int main()
{
    char arr[26];
    for (int i = 0; i < 26; i++)
    {
        arr[i] = 65 + i;
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c", arr[i]);
    }
}
