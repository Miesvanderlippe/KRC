#include <stdio.h>

# define MIN 0
# define MAX 300
# define STEP 20

int main(void)
{
    int fahrenheit, celcius; 

    printf("===== Fahrenheit to Celcius ===== \n");

    for(fahrenheit = MAX; fahrenheit >= MIN; fahrenheit = fahrenheit - STEP)
    {
        printf("%d\t%6.1f\n", fahrenheit, (5.0 / 9.0) * (fahrenheit - 32.0));
    }

    printf("\n===== Celcius to Fahrenheit ===== \n");

    for(celcius = MAX; celcius >= MIN; celcius = celcius - STEP)
    {
        printf("%d\t%6.1f\n", celcius, (celcius / (5.0 / 9.0)) + 32);
    }
}