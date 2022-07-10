#include <stdio.h>
#include <stdlib.h>

#include "curl.h"
#include "gen.h"

int main() {
    rand_init();

    char *output = NULL;

    get_words(
        &output,
        "https://raw.githubusercontent.com/IY314/hangman-/main/words.txt");
    char *word = get_word(output);
    free(output);
    puts(word);
    free(word);
    return 0;
}
