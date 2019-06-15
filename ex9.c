#include <stdio.h>

int main(int argc, char *argv[])
{
	int numbers[4]= {0};
	char name[8]= {'a'};

	//first, print them out raw
	printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
	printf("name each: %c %c %c %c %c %c %c %c\n", name[0], name[1], name[2], name[3], name[4], name[5], name[6], name[7]);
	printf("name: %s\n", name);

	// setup the numbers
	numbers[0]=1;
	numbers[1]=9;
	numbers[2]=9;
	numbers[3]=5;

	//setup name
	name[0]='I';
	name[1]='n';
	name[2]='F';
	name[3]='i';
	name[4]='N';
	name[5]='i';
	name[6]='X';
	name[7]='\0';

	// then print them out initialized
	printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
	printf("name each: %c %c %c %c %c %c %c %c\n", name[0], name[1], name[2], name[3], name[4], name[5], name[6], name[7]);

	// print the name like string
	printf("name: %s\n", name);

	// another way to use name
	char *another = "InFiNiX";

	printf("another: %s\n", another);

	printf("another each: %c %c %c %c %c %c %c %c\n", another[0], another[1], another[2], another[3], another[4], another[5], another[6], another[7]);
return 0;
}

