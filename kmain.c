    #include "drivers/frame_buffer.h"
    #include "drivers/serial_port.h"


    
    int main(){

           char ptr2[] = "Welcome to JA-OS";
   
    
    serial_write(0x3F8, ptr2, 19);
    fb_write(ptr2, 19);
    
    }
