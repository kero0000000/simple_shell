#include<stdio.h>
#include<string.h>
/**
 * strtok - function to tokenize a string
 * main - main entry type
 * Return :void
 **/
int main(void)
{
char str[] = "jesus loves you";
char *delim = "";
char *token;
token = strtok(str, delim);
printf("%s", token);
return (0);
}
