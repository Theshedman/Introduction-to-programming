#include<stdio.h>
#include<ctype.h>

int main () /*lower: convierte la entrada a minúsculas*/
/*cambie void main () por int main()*/
{
    int c;

    while ((c= getchar()) !=EOF)
        putchar(tolower(c));
    return 0;
}
