#include <stdio.h>

void graph(int count); // prototype

int main()
{
    int value;

    value = 2;

    while(value<=64)
    {
        graph(value); // function call/invocation
        printf("Value is %d\n",value);
        value = value * 2;
    }
    return(0);
}

void graph(int count) // function definition
{
    int x;

    for(x=0;x<count;x=x+1)
        putchar('*');
    putchar('\n');
}
