//Writing And Using Function

#include<stdio.h>
#include<ctype.h>
#include<string.h>

//forward declarations
void print_letters(int length, char arg[]);

void print_arguments(int argc, char *argv[])
{
    int i=0;
    for(i=0; i<argc; i++) {
        int length = strlen(argv[i]);
        printf("Length is :%d\n", length);
        print_letters(length, argv[i]);
    }
}

void print_letters(int length, char argv[])
{
    int i=0;
    for(i=0; i<length; i++) {
        char ch = argv[i];

        if(isalpha(ch) || isdigit(ch) || isalpha(ch))  {

            printf("%c == %d ", ch, ch);
        }
    }
    printf("\n");
}

int main(int argc, char *argv[])
{
    print_arguments(argc, argv);
    return 0;
}

