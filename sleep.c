#include <stdio.h>
#include <unistd.h>
int main(void) {
// your code goes here
	int i;
	char string[]={'H','A','P','P','Y',' ','P','O','N','G','A','L','\0'};
	for(i=0;string[i]!='\0';i++)
	{
	    printf("%c",string[i]);
	    fflush(stdout);
	    usleep(10*1000);
	}
	return 0;
}
