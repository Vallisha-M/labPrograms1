#include <stdio.h>
#include <string.h>
int main()
{
    int i,j;
    char s1[100],s2[50];
    printf("Enter string1 : ");
    gets(s1);
    printf("Enter string2 : ");
    gets(s2);
    for (i = 0; s1[i] != '\0'; ++i);
    for (j = 0; s2[j] != '\0'; ++j, ++i)
        s1[i] = s2[j];
    s1[i] = '\0';

    printf("After concatenation: ");
    puts(s1);
    return 0;
}
