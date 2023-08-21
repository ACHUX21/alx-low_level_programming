#include <stdio.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
/**
 * @brief 
 * 
 */


int main(void)
{
    while(1)
    {
        int random, i, j;
        srand(time(NULL));
        random = rand() % 100;

        if (random >= 33 && random <= 126)
        {

            for (i = 0; i < 100; i++)
            {

                if (random * i == 2772)
                {

                    for (j = 0; j < i; j++)
                    {
                        putchar(random);
                    }
                    return (0);
                }
            }
        }

    }
    return (0);
}