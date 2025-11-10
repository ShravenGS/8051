//use delay.h which is present in the main repository
#include<REGX51.h>
#include"delay.h"
	sbit LED1=P1^0;
	sbit LED2=P1^1;
int main(){
	while(1){
		LED1=1;
		LED2=0;
		delay(1020);
		LED1=0;
		LED2=1;
		delay(1020);
	}
}
