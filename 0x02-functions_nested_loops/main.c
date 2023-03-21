#include "main.h"

int main(){
    int r;

    r = print_sign(-8);
    _putchar(r + '0');
    r = print_sign(1);
    _putchar(r + '0');
    r = print_sign(0);
    _putchar(r + '0');
    r = print_sign(87);
    _putchar(r + '0');
    return 0;
}
