#include <stdio.h>

#define MAX_LENGTH 20
#define BAR_HEIGHT 30

int main(void)
{
    int longest, total_words, cur_length, state, c, i, j;
    int word_lengths[MAX_LENGTH];
    int bar_heights[MAX_LENGTH];
    cur_length = total_words = longest = c = 0;

    for(i = 1; i <= MAX_LENGTH; ++i)
        word_lengths[i] = 0;

    while((c = getchar()) != EOF)
    {
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z' ))
        {
            ++cur_length;
        }
        else
        {
            if(cur_length > 0 && cur_length <= MAX_LENGTH)
            {
                ++word_lengths[cur_length];
                ++total_words;

                if(cur_length > longest)
                    longest = cur_length;
            }
            cur_length = 0;
        }
    }

    for(i = 1; i <= longest; ++i)
        bar_heights[i] = BAR_HEIGHT * ((double) word_lengths[i] / total_words);

    for(i = BAR_HEIGHT; i >= 0; --i)
    {
        putchar('|');
        for(j = 1; j <= longest; ++j)
        {
            if(i >= bar_heights[j])
                printf("   ");
            else
                printf(" ▓ ");
        }
        putchar('|');
        putchar('\n');
    }

    for(j = 1; j <= longest; ++j)
        printf("%3d", j);

    putchar('\n');
}
