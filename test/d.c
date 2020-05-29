#include<stdio.h>
int main(int argc,char *argv[])
{ 
	int count;
        
	printf("%d",argc-1);
	for(count=1;count<argc;count++)
		printf("%d %s\n",count,argv[count]);
	printf("hhhhhhh\n");

	return 0;

}	

