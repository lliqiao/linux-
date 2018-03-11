#include<stdio.h>
#include<sys/types.h>
#include<fcntl.h>
#include<unistd.h>
void main()
{
	int fd=open("./my_math.c",O_RDONLY);
	char buff[10];
	sprintf(buff,"%d",fd);
	execl("./main1","./main1",buff,(char*)0);
}
