#include <stdio.h>

// r.interface.c
void sayMove();
void sayTurn();

// external variables
extern int status[3];

// FUNCTIONS
void walkHome()
{
	for(status[0]; status[0] > 0; status[0]--)
	{
		sayMove();
	}

	status[2]++;
	sayTurn();

	for(status[1]; status[1] < 0; status[1]++)
	{
		sayMove();
	}
}

void walk()
{
	if(status[2] == 0)
	{
		status[1]++;
	}
	else
	{
		status[0]++;
	}

	sayMove();
}

void turn()
{
	status[2]++;
	sayTurn();
}
