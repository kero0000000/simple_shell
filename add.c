#include<stdio.h>
#include<unistd.h>
/**
 * main - main
 * entry point
 * Return: void
 **/
int main(void)
{
int a = 3;
int b = 5;
int sum = a + b;
pid _tpid;
pid = getpid();
printf("sum is % d \n", sum);
printf("pid is % u \n", pid);
return (0);
}
