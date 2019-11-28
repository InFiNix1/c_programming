#include<stdio.h>
#include<string.h>
void email(char*, char*);
int main()
{
    char c[20] = "Sauronil";
    char d[20] = "Das";
    printf("%s\n", c);
    printf("%s\n", d);

    email(c,d);

   // strcat(c," ");
   // strcat(c, d);

   // printf("%s\n", c);
    return 0;

}

void email(char* c, char* d)
{
    strcat(d, "@gmail.com");
    strcat(c, d);
    printf("%s\n", c);

}


