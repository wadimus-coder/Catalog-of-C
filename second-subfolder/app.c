#include <stdio.h>
#define F 2025

void hello();

int main()
{
    hello();
    printf("Hello Git in %d\n!", F);

    puts("+++++++++++++++++");
    puts("_________________\n");

    return 0;
}

void hello()
{

    printf("Hello Git :%d\n", F);
}