#include<stdio.h>
#include<string.h>
void reverseString(char *str,int len)
{
    char temp;int i,j;
    for(i=0,j=len-1;i<j;i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
}
void main()
{
    int len;
    char str[100];
    printf("\nEnter a String: ");
    scanf("%[^\n]s",str);
    len=strlen(str);
    reverseString(str,len);
    printf("\n%s",str);
}