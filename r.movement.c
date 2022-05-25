#include <stdio.h>

void phrase(int phraseNumber);

extern int status[3];

void walkHome()
{
	for(status[0]; status[0] > 0; status[0]--)
	{
		phrase(2);
	}

	status[2]++;
	phrase(3);

	for(status[1]; status[1] < 0; status[1]++)
	{
		phrase(2);
	}
}

void walk()
{
	if(status[2] == 0)
	{
		status[1]++;
	}
	else if(status[2] == 1)
	{
		status[0]++;
	}
	else if(status[2] == 2)
	{
		status[1]--;
	}

	phrase(2);
}

void turn()
{
	status[2]++;
	phrase(3);
}
