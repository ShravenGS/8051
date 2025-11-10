#include<REGX51.h>
#include"delay.h"
sbit RS=P3^0;
sbit RW=P3^1;
sbit E=P3^2;

#define LCD P2

void LCD_COMMAND(unsigned char cmd){
	LCD=cmd;
	RS=0;
	RW=0;
	E=1;
	delay_ms(2);
	E=0;
}

void LCD_DATA(unsigned char dat){
	LCD=dat;
	RS=1;
	RW=0;
	E=1;
	delay_ms(2);
	E=0;
}

void LCD_INIT(){
	LCD_COMMAND(0x38);
	LCD_COMMAND(0x0C);
	LCD_COMMAND(0x06);
	LCD_COMMAND(0x01);
	LCD_COMMAND(0x80);
}

void LCD_STR(char s[]){
	unsigned int i;
	while(s[i]!='\0'){
		LCD_DATA(s[i]);
		i++;
	}
}
int main(){
LCD_INIT();
	while(1){
		LCD_STR("Hello World");
	}
}
