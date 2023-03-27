// rewrite the sourcecode for 7-1 to use getc

#include <stdio.h>

int main()
{
    char c;

    printf("I'm waiting for a character: ");
    c = getc(stdin);
    printf("I waited for the '%c' character.\n",c);
    printf("I waited for the '%d' character.\n",c);
    return(0);
}
