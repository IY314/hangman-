#include <stdio.h>
#include <stdlib.h>

#include "curl.h"

int main() {
    char *output = NULL;

    get_words(
        &output,
        "https://raw.githubusercontent.com/IY314/hangman-/main/words.txt");
    puts(output);

    free(output);
    return 0;
}
