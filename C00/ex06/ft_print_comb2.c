#include <unistd.h>

void ft_print_comb2(void){
    char a , b, c;
    int a = 00;
    while (a <= 98){
        int b[] =01;
        while (b <= 99){
            
            write(1,&b,2);
            b++;
        }
        write(1,&a,2);
        a++;
    }



}

int main(void){
    ft_print_comb2();
    return 0;
}