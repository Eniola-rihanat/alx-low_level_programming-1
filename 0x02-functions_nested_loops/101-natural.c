/*
 * File: 7-print_last_digit.c
 * Auth: Keenmuhammad
 */
#include "main.h"
/**
 *main - check for multiples of 3 and 5
 *Return: 0 always
 */
int main(void)

{

    int x = 1024, y, sum = 0;

    for (y = 0; y < x; y++)

    {

        if ((y % 3 == 0) || (y % 5 ==0))

        {

            sum = sum + y;

        }

    }

    printf("%d\n", sum);

    retun (0);
    
}