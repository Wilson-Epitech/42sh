/*
** 42SH PROJECT, 2023
** 42sh
** File description:
** init_input
*/

#include <stdlib.h>
#include "my.h"

void init_input(stock_t *sk)
{
    sk->input.cmd = malloc(sizeof(char));
    sk->input.cmd[0] = '\0';
    sk->array_st.buffer = NULL;
    sk->input.cmd_len = 1;
}
