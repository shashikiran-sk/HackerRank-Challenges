#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
	int i=0,j=0;
	printf("%p  %p\n",argv[1]+12,argv[2]);
	while(argv[1][i]!='\0')
	{
		while(argv[1][i]!=argv[2][j])
		{
			printf("argv[1][%d]==argv[2][%d]   ",i,j);
			i++;
			j=0;
		}
		printf("\n");
		while(argv[1][i]==argv[2][j] && argv[1][i]!='\0'&& argv[2][j]!='\0')
		{
			i++;
			j++;
		}
		
		if(argv[2][j]=='\0')
		{
			printf("String found\n");
			return 0;
		}
	}
	printf("String not found\n");
	
	return 0;/*
	for(i=0;i<(strlen(argv[1])-strlen(argv[2])+1);i++)
	{
		for(j=0;j<strlen(argv[2]);j++)
			if(argv[2][j]!=argv[1][i+j])
				break;
		if(j==strlen(argv[2]))
		{
			printf("String found\n");
			return 0;
		}
	}
	printf("not found\n");
	return 0;*/
}
