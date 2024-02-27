#include<stdio.h>
#include<unistd.h>
/**
 * main - main
 * entry type
 * Return: void
 **/
int main(void)
{
pid_t pid;
printf("Before fork i was one\n");
fork();
if (pid == -1)
{
perror("unsuccessful\n");
return (1);
}
printf("After fork i become two\n");
return (0);
}
