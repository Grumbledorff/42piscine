#include <unistd.h>

// void ft_print_numbers(void){
//     write(1, "0123456789\n", 11);
// }

void ft_print_numbers(void){
    char i = '0';
    while(i <= '9'){
        write(1, &i, 1);
        i++;
    }
    write(1, "\n", 1);     
}

int main(void){
    ft_print_numbers();
}