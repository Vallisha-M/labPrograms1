#include <stdio.h>
#include <string.h>
int main()
{
    char str[20],cpy[20];
    printf("Enter the string [length<=20] : ");
    gets(str);
    int l=0,i=0,flag=1;
    while(str[i]!='\0')
        i++;
    l=i;
    for(i = 0; i<l ; i++)
        cpy[l-i-1]=str[i];
    for(i=0;i<l;i++)
        if(str[i]!=cpy[i])
        {
            flag=0;
            break;
        }
    if(flag)
        printf("%s is a palindrome",str);
    else
        printf("%s is not a palindrome",str);
    return 0;

}
