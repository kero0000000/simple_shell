#include<stdio.h>
#include<string.h>
int main(void)
{
char str[] = "jesus loves you";
char *delim = "";
char *token;
token = strtok(str, delim);
printf("%s", token);
return (0);
}
