#ifndef LCD_SERIAL_H   
#define LCD_SERIAL_H

#define DDRMOD         DDRC
#define PORTSR         PORTC
#define SH_CP_ShiftClock  5
#define DS_Data           6
#define ST_CP_Latch       7

#pragma used+ 
void KernelShift(unsigned char y);
void BitSerial_Send(unsigned char g, unsigned char moz);
void LCD_init(void);
void lcd_putchar(unsigned char x);
void lcd_gotoxy(unsigned char x, unsigned char y);
void lcd_Clear(void);
void lcd_puts(char *str);
#pragma used+ 
#endif 