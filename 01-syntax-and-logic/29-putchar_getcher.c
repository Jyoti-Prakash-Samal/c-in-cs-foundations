#include <stdio.h>
#include <ctype.h>

int main(void) {
    int ch;
    int char_count = 0;

    printf("Enter a sentence (press Enter to finish):\n");

    while ((ch = getchar()) != '\n' && ch != EOF) {
        putchar(toupper(ch));
        char_count++;
    }

    printf("\n\nTotal characters processed: %d\n", char_count);

    return 0;
}