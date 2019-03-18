#include <stdio.h>

int main(void)
{
    int min, max, step; 
    float fahrenheit, celcius; 

    min = 0;
    max = 300;
    step = 20;

    fahrenheit = min;

    printf("===== Fahrenheit to Celcius ===== \n");

    while(fahrenheit <= max)
    {
        celcius = (5.0 / 9.0) * (fahrenheit - 32.0);
        printf("%3.0f\t%6.1f\n", fahrenheit, celcius);
        fahrenheit = fahrenheit + step;
    }

    celcius = min;

    printf("\n===== Celcius to Fahrenheit ===== \n");

    while(celcius <= max)
    {
        fahrenheit = (celcius / (5.0 / 9.0)) + 32 ;
        printf("%3.0f\t%6.1f\n", celcius, fahrenheit);
        celcius = celcius + step;
    }
}