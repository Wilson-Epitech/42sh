/*
** 42SH PROJECT, 2023
** 42sh
** File description:
** len_tab
*/

#include <unistd.h>

int len_tab(char **tab)
{
    int len = 0;

    while (tab[len] != NULL) {
        len++;
    }
    return len;
}
