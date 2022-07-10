#include <stdio.h>
#include <stdlib.h>

#include "curl.h"
#include "hangman.h"

int main() {
    rand_init();

    char *output = NULL;

    get_words(
        &output,
        "https://raw.githubusercontent.com/IY314/hangman-/main/words.txt");
    puts(output);

    char *word = get_word(output);
    puts(word);

    free(output);
    free(word);
    return 0;
}
