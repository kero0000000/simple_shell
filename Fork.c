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
/* written before Fork was called */
/* called Fork */
pid = fork();
if (pid == -1)
{
perror("unsuccessful\n");
return (1);
}
if (pid == 0)
{
sleep(40);
printf("I am the child\n");
}
else
{
ppid = getpid();
printf("I am the parent\n");
}
return (0);
}
