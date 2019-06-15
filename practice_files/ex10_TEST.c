#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	// go through each string in argv
	// why am I skipping argv[0]?
	for(i = 1; i < argc; i++) {
		printf("arg %d: %s\n", i, argv[i]);
	}

	// let's make our own array of strings
	char *city[] = {"\0","Guwahati", "New Delhi", "Bangalore", "Bombay"};

	int num_city = 5;

	for(i=1; i<num_city; i++) {
		printf("City %d: %s\n", i, city[i]);
	}

	return 0;
}

