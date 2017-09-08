#include<stdio.h>

int main()
{
    char str[50];
    int len=0, i=0;

    printf("Enter the String\t:\t");
    scanf("%s", str);

    while(str[i] != '\0')
    {
        len+=1;
        i++;
    }
    printf("\n\nReverse String\t:\t", len);

    for(i=len; i>=0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n\n");

    return 0;
}
