#include "libft.h"

static int __split_nb_words(char const *s, char c) {
    size_t pos;
    int nb_words;

    pos = 0;
    nb_words = 0;

    while (s[pos]) {
        if (s[pos] != c && (s[pos + 1] == c || s[pos + 1] == '\0'))
            nb_words++;

        pos++;
    }

    return nb_words;
}

static char *__split_get_word(char const *s, char c, int *stoped_at) {
    int size;
    int pos;
    char *word;

    pos = 0;
    size = 0;

    while (s[pos] == c)
        pos++;

    while (s[pos + size] != c)
        size++;

    word = ft_strnew(size);
    if (word == NULL)
        return NULL;

    *stoped_at = pos + size;
    return ft_strncpy(word, s + pos, size);
}

char **ft_strsplit(char const *s, char c) {
    int nb_words;
    int current_word;
    int stoped_parsing_at;
    char **splitted_words;

    if (!s)
        return NULL;
    
    current_word = 0;
    nb_words = __split_nb_words(s, c);
    splitted_words = malloc(sizeof(char *) * (nb_words + 1));

    if (splitted_words == NULL)
        return NULL;

    while (current_word < nb_words) {
        splitted_words[current_word] = __split_get_word(s, c, &stoped_parsing_at);
        s += stoped_parsing_at;
        
        current_word++;
    }

    splitted_words[nb_words] = NULL;

    return splitted_words;
}
