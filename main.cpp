#include "mbed.h"
printf("hello world");
InterruptIn bttn(PC_13);

void bttn_interrupt(){
    printf("bttn pressed \r\n");
}

int main()
{
    bttn.fall(&bttn_interrupt);
    while (true) {
    }

