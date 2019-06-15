#include <stdio.h>

int main(int argc, char *argv[])
{
	// go through each string in argv
	int i = 1;
	while(i<argc){
		printf("arg %d: %s\n", i, argv[i]);
		i++;
	}

	// let's make our own argurment
	char *states[] = {
		"\0", "Assam", "West Bengal",
		"Karnataka", "Maharashtra"
	};

	int num_states = 5;
	i = 1; // watch for this
	while(i<num_states){
		printf("State %d: %s\n", i, states[i]);
		i++;
	}

	return 0;
}


