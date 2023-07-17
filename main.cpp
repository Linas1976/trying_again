#include "mbed.h"

int main()
{

// prints hello world
printf("Hello World");
}
InterruptIn bttn(PC_13);

void bttn_interrupt(){
    printf("bttn pressed \r\n");
}

int main2()
{
    bttn.fall(&bttn_interrupt);
    while (true) {
    }

