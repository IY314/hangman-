#include "gen.h"

#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "curl.h"

void rand_init() { srand(time(NULL)); }

unsigned long create_list(char **dest, const char *const str) {
    unsigned long lines = 0;
    char *line = malloc(64);
    unsigned long lidx = 0;
    unsigned long start = 0;
    for (unsigned long i = 0; i != strnlen(str, UINT32_MAX); i++)
        if (str[i] == '\n') {
            if (lidx == 512) return 512;
            dest[lidx++] = strndup(str + start, i - start);
            lines++;
            start = i + 1;
        }

    return lines;
}

char *get_word(const char *const wordstr) {
    char **words = calloc(sizeof(char *), 512);
    unsigned long lines = create_list(words, wordstr);
    char *ret = strdup(words[rand() % lines]);
    for (unsigned long i = 0; i < lines; i++) free(words[i]);
    free(words);
    return ret;
}
