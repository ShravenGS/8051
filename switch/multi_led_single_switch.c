#include<REGX51.h>
sbit LED1=P1^0;
sbit LED2=P1^1;
sbit SW=P2^0;
int main(){
	unsigned int state=0;
	LED1=0;
		LED2=0;
	while(1){
		
		if(SW==0){
			while(SW==0);
			state++;
			if(state>2){
				LED1=0;
				LED2=0;
				state=0;
			}
			if(state==1){
				LED1=1;
				LED2=0;
			}
			else if(state==2){
				LED1=0;
				LED2=1;
		}
	}
}
	}
