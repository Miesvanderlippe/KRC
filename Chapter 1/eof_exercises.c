#include <stdio.h>

int main(void)
{
    int c; 
    
    c = 'a';
    printf("'a' != EOF: \n%d\n", c != EOF);

    c = EOF;
    printf("EOF != EOF: \n%d\n", c != EOF);

    printf("Value of EOF\n%d\n", c);
}