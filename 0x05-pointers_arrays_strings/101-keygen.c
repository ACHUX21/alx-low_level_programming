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


int main(void)
{

    int random, sum;

    srand(time(NULL));
    sum = 0;
    while ( sum <= 2772 )
    {
        random = rand() % 128;
        sum += random;
        putchar(random);
    }
    putchar(2772 - sum);
    return 0;
}