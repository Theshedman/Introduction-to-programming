#include <stdio.h>
#include <ctype.h>

int main()
{
    int i=0;
    char c;
    char str[] = "Oromion GitHub";

    while ( str[1] )
    {
        putchar(tolower(str[i]));
        i++;
    }

    return (0);
}
