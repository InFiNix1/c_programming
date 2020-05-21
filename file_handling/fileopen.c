#include<stdio.h>
int main()
{
    FILE* fp;
    fp=fopen("/home/sauronil/pandoras_box/c_programming/naresh_i_tech/file_handling/test.txt","r");
    if(fp==NULL)
    {
        printf("File Not Found\n");
    }
    else 
    {
        printf("File Found\n");
    }

    int ch;
    while((ch=fgetc(fp))!= EOF)
    {
        printf("%c", ch);
    }
    printf("\n");
    return 0;
}
