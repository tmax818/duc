// rewrite the sourcecode for 7-1 to use getc

#include <stdio.h>

int main()
{
    int char1;
    char char2;

    printf("I'm waiting for a character: ");
    char1 = getchar();
    printf("I waited for the '%c' character.\n",char1);
    printf("I waited for the '%d' character.\n",char1);
    char2 = getc(stdin);
    printf("I waited for the '%c' character.\n",char2);
    printf("I waited for the '%d' character.\n",char2);
    return(0);
}
