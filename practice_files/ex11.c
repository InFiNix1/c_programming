//if, else if, else
#include<stdio.h>
int main(int argc, char *argv[])
{
    int i =0;
    if(argc == 1) {
        printf("You have Only One Argument\n");
    } else if(argc > 1 && argc < 4) {
        printf("You arguments are : ");

        for(i=1; i<argc; i++) {
            printf("%s ",
                    argv[i]);
        }
        printf("\n");
    } else {
        printf("You have too many argumnets\n");
    }

    return 0;
}

