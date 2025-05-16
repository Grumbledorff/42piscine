#include <unistd.h>

void ft_print_numbers(void){
    write(1, "0123456789\n", 11);
}

void ft_print_numbers(void){
    int i = 0;
    while (i<=9)
    {
        write(1, i, 11);
    }
    
}