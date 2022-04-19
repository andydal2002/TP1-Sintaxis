// Hecho por D'Alessandro Andrés

#include <stdio.h>
#include <ctype.h>

int main()
{
    int c = getchar();
    while(c != EOF)
    {
        if (isupper(c))
            putchar(tolower(c));
        else if (islower(c))
            putchar(toupper(c));
        else if (isdigit(c))
            ;
        else
            putchar(c);
        c = getchar();
    }
    
    return 0;
}