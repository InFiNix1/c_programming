#include <stdio.h>
#include <ctype.h>
#include <string.h>

//forward declarations
void print_letters(char arg[], int arglength);

void print_argument(int argc, char *argv[])
{
	int i=0;
	int length;
	
	for(i=0; i<argc; i++){
		length = strlen(argv[i]);
		printf ("Length is: %d\n", length);

		print_letters(argv[i], length);
	}
}

void print_letters(char arg[], int arglength)
{
	int i=0;
	for (i=0; i<= arglength; i++) {
		char ch = arg[i];
		if (isalpha(ch) || isblank(ch)){
			printf("%c == %d ", ch, ch);
		}
	}
	printf("\n");
}

int main(int argc, char *argv[])
{
	print_argument(argc, argv);
	return 0;
}

