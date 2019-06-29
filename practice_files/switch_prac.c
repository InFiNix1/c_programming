//Extra Credit
//Program that uses math on the letter to convert it to lowercase, and then remove all the extraneous uppercase letters in switch

#include <stdio.h>

int main(int argc, char *argv[])
{
	if(argc != 2) {
		printf("ERROR: You Need One Argument.\n");
	return 1;
}

int i = 0;
for (i=0; argv[1][i] != '\0'; i++) {
	char letter = argv[1][i];
	switch(letter) {
		case 'a':
		case 'A':
			printf("a");
		break;
		case 'b':
                case 'B':
                        printf("b");
                break;
		case 'c':
                case 'C':
                        printf("c");
                break;
		case 'd':
                case 'D':
                        printf("d");
                break;
		case 'e':
                case 'E':
                        printf("E");
                break;
		case 'f':
                case 'F':
                        printf("F");
                break;
		case 'g':
                case 'G':
                        printf("g");
                break;
		case 'h':
                case 'H':
                        printf("h");
                break;
		
		default:
			printf("\nNot yet Assigned");
	}
}

return 0;
}

