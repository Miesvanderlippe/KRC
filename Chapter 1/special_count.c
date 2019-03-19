#include <stdio.h>

int main(void)
{
    int c, state, nlc, tc, bc;
    nlc = tc = bc = 0;
    
    while((c = getchar()) != EOF)
    {
        if(c == '\n')
            ++nlc;
        else if (c == '\t')
            ++tc; 
        else if (c == ' ')
            ++bc;
    }

    printf("Newlines: %d\nTab count: %d\nBlank count: %d\n", nlc, tc, bc);
}
