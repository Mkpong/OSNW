#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

void main(){
	time_t t;
	struct tm *tm;

	t = time(NULL);
	tm = localtime(&t);
	printf("%s  %s" ,"32193424" ,  asctime(tm));
}
