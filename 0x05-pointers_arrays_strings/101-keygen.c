#include <stdio.h>
#include <time.h>
#include <math.h>
/**
 * @brief 
 * 
 */


int main(void)
{
    while(1)
    {
    
        srand(time(NULL));
        int random = rand() % 100;

        if (random >= 33 && random <= 126)
        {

            for (int i = 0; i < 100; i++)
            {

                if (random * i == 2772)
                {

                    for (int j = 0; j < i; j++)
                    {
                        putchar(random);
                    }
                    return 0;
                }
            }
        }

    }
}