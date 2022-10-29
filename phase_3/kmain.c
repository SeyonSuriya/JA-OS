#include "frame_buffer.h"
#include "serial_port.h"



    int main(){

           char ptr2[] = "Hello Seyon Suriyakumaran";


    serial_write(0x3F8, ptr2, 26);
    fb_write(ptr2, 26);

    }

