#include <stdio.h> /*comentario*/
#include <ctype.h>

int main()
{
    int i=0;
    char c;
    char str[] = "Oromion GitHub";

    while ( str[i] )
    {
        putchar(tolower(str[i]));
        i++;
    }

    return (0);
}
