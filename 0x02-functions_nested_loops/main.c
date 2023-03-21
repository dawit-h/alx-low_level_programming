#include "main.h"
#include <stdio.h>

int main(){
    int r;

    r = print_last_digit(96);
    _putchar('0' + r);

    print_last_digit(32);
    print_last_digit(-1024);
 
    return 0;
}
