#include<REGX51.h>
sbit LED=P1^0;
sbit SW=P2^0;
int main(){
	while(1){
		if(SW==0){
			LED=1;
		}
		else{
			LED=0;
		}
	}
}
