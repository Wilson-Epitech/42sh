/*
** 42SH PROJECT, 2023
** 42sh
** File description:
** get_term_size
*/

#include <sys/ioctl.h>

int get_size_term(void)
{
    struct winsize size;
    int cols = 0;

    ioctl(0, TIOCGWINSZ, &size);
    cols = size.ws_col;
    return cols;
}
