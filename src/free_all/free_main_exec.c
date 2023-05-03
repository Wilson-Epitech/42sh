/*
** 42SH PROJECT, 2023
** 42sh
** File description:
** free_main_exec
*/

#include <stdlib.h>
#include "my.h"

void free_main_exec(stock_t *sk)
{
    free_array(sk->array_pipe);
    free_array(sk->array_duck);
    free_array(sk->array_reverse_duck);
    free_array(sk->array_space);
}
