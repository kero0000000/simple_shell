#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
/**
 * main - main
 * entry type
 * Return: void
 **/
int main(void)
{
pid_t pid;
/* child process in created */
pid = fork();
/* if fork fails */
if (pid == -1)
{
perror("unsuccessful\n");
return (1);
}
/* in child process */
if (pid == 0)
{
printf("child process\n");
}
/* in parent process */
else
{
printf("parent process\n");
}
return (0);
}
