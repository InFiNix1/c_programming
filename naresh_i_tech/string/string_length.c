#include<stdio.h>
#include<string.h>
int main()
{
    char lyrics[30];
    unsigned int len;
    printf("Enter Any Song Lyrics: ");
    gets(lyrics);
    len=strlen(lyrics);
    printf("\n'%s' has '%d' words in it\n", lyrics, len);
    printf("Including Spaces and other characters\n");
    return 0;
}
