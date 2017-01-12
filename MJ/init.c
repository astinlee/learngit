#include<stdio.h>


int main (void)
{
    int i;
    char c;

    for (i = 0; i < 100; i++)
    {
        c += c;
    }
    printf("c = %x\n", c);
}
