#include <stdio.h>

int main(void)
{
    int min, max, step; 
    float fahrenheit, celcius; 

    min = 0;
    max = 300;
    step = 20;

    fahrenheit = min;

    while(fahrenheit <= max)
    {
        celcius = (5.0 / 9.0) * (fahrenheit - 32.0);
        printf("%3.0f\t%6.1f\n", fahrenheit, celcius);
        fahrenheit = fahrenheit + step;
    }
}