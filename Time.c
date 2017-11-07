//c code to get time using syscall
#include <stdio.h>
#include <sys/time.h>

void main(){
	time_t t;
	t = time(NULL);
	printf("%s",ctime(&t));
}
