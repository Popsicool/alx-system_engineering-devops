#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int repeat();


/**
* main - entry point
* Return: 0 on success
*/

int main(void)
{
	int i;
	pid_t zombie_process;

	for (i = 0; i < 5; i++)
	{
		zombie_process = fork();
		if (!zombie_process)
			return (0);
		printf("Zombie process created, PID: %d\n", zombie_process);
	}

	repeat();
	return (0);
}


/**
* repeat - infinit loop
* Return: 0
*/

int repeat()
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}
