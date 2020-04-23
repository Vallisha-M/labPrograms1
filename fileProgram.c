#include <stdio.h>
int main()
{
    char content[30];
    FILE *fp = NULL;
    fp=fopen("data.txt","w");
    if(fp==NULL)
    {
        printf("ERROR!");
        exit(1);
    }
    printf("Enter content for the file ;\n");
    gets(content);
    fprintf(fp,"%s",content);
    fclose(fp);
    fp=NULL;
    fp=fopen("data.txt","r");
    if(fp==NULL)
    {
        printf("ERROR!");
        exit(1);
    }
    char ch;
    printf("Content of file ;\n");
    do{
        ch=fgetc(fp);
        putchar(ch);
    }while(ch!=EOF);
    return 0;

}
