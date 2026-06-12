#include <mega32.h> 
#include <delay.h>
#include "lcd_serial.h"

void main(void)
{
    unsigned char i;    
    LCD_init();
    
    while (1)
    {
        lcd_gotoxy(0,0);
        lcd_puts("Test LCDserial !");
        lcd_gotoxy(0,1);   
        lcd_putchar('T');
        lcd_putchar('E');
        lcd_putchar('S');
        lcd_putchar('T');   
        lcd_putchar(' ');
        lcd_putchar(' ');
        lcd_putchar(' ');
        lcd_putchar(' ');
        lcd_putchar(' ');
        lcd_putchar(' ');
        lcd_putchar(' ');
        lcd_putchar(' ');
        lcd_putchar('T');
        lcd_putchar('E');
        lcd_putchar('S');
        lcd_putchar('T');
        delay_ms(5000);
        lcd_Clear();

        for(i=0; i<16; i++){
            lcd_Clear();
            lcd_gotoxy(i,0);
            lcd_putchar('>');
            delay_ms(200);
        } 
        
        lcd_Clear();
        lcd_puts("test passed!");
        delay_ms(3000);
    }
}