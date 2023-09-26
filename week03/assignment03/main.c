#include <stdio.h>

extern void id();
extern int sum10();

void main(){
	printf("OSNW2023\n");
	id();
	printf("sum(1~10) : %d\n" , sum10());
}
