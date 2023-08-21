#include <stdio.h>
#include <time.h>
#include <math.h>
/**
 * @brief 
 * 
 */


int main(void)
{

    int random_integer, j;

    for (random_integer = 33 ; random_integer < 127 ; random_integer++)
    {
        for (int i = 0; i < 80 ; i++)
        {
            if (random_integer * i == 2772)
            {
                for (j = 0; j < i ; j++)
                {
                    putchar(random_integer);
                }
                return (0);
            }
        }
    }
}
