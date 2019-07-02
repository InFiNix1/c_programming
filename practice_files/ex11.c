//if, else if, else
#include<stdio.h>
int main(int argc, char *argv[])
{
    int i = 1;
    if(argc==1) {
        printf("You have only One Argument\n");
    } else if(argc > 2 && argc < 4) {
        printf("Here are Your Arguments: ");

        for(i=1; i<argc; i++) {
            printf("%s ",
                    argv[i]); 
        }
        printf("\n");
    } else {
            printf("You Have too many arguments\n");
        }
        return 0;
  
}

