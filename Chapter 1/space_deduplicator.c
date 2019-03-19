#include <stdio.h>

#define PREV_SPACE 1
#define PREV_CHAR 0

int main(void)
{
    int c, state;

    state = PREV_CHAR;
    
    while((c = getchar()) != EOF)
    {
        if(c != ' ')
        {
            putchar(c);
            state = PREV_CHAR;
        }
        else if(state != PREV_SPACE)
        {
            putchar(c);
            state = PREV_SPACE;
        }
        /* Else, the c is a space we don't do anything with. */
    }
}
