#include<stdio.h>
int main(int argc, char* argv[])
{
    char* name[] = {
        "Sauronil", "Das"};

    int i=0;
    int count = 2;

    for(i=1; i<argc; i++) {
        printf("Command Line String : %s\n", argv[i]);

        printf("Command Line Character Stored : %c\n", *argv[i]);

        printf("Command Line Address Stores : %d\n", argv[i]);
    }


    for(i=0; i<count; i++) {
        printf("Name Line String : %s\n", name[i]);

        printf("Name Line Character Stored : %c\n",*name[i]);

        printf("Name Line Address Stored : %d\n", name[i]);
    }
    return 0;
}







