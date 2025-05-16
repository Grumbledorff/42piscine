#include <unistd.h>

// ans:1
// void ft_print_alphabet(void)
// {
//     char str[] = "abcdefghijklmnopqrstuvwxyz\n";
//     write(1, str, 27);
// }

// Simple way ans:2
// void ft_print_alphabet(void)
// {
//     write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
// }

// Best for understanding loops & ASCII ans:3
// void ft_print_alphabet(void){
//     int i = '97';
//     while(i <= '122'){
//         write(1,&i,1);
//         i++;
//     }
//     write(1,"\n",1);     
// }

// overall best ans:4
void ft_print_alphabet(void){
    char i = 'a';
    while (i <= 'z') {
        write(1, &i, 1);
        i++;
    }
    write(1, "\n", 1);
}

// int main(void){
//     ft_print_alphabet();
// }
