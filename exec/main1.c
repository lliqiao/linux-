#include<stdio.h>
#include<sys/types.h>
#include<fcntl.h>
void main(int argc,char* argv[])
{
	int fq;
	int buff[10]={0};
	sscanf(argv[1],"%d",&fq);
	read(fq,buff,9);
	printf("%s\n",buff);	
}
