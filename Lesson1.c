#include <stdio.h>

int main()
{
    int counter;

    counter = 0;

    while(counter < 10)
    {
        printf("hello world %d i`m string!\n", counter);
        counter += 1;
    }

    return 0;
}