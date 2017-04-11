#include <stdio.h>
#include <time.h>
#include "E101.h"

int adc_reading;

adc_reading = read_analog(0);

int average(int adc_reading){
	int num = 0;
	for(;num<5;){
		num++;
		average = average + adc_reading;
		return average;
	}
	average = average/5
	return average;
}

int main(){
	init();
	
return 0;
}
