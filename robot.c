#include <stdio.h>

// r.interface.c
void requestInput();
void receiveInput(char *input);
void throwError(int errorNumber);

// r.system.c
void validateUserInput();
void setWallCheck();

// r.movement.c
void walkHome();
void walk();
void turn();

// VARIABLES
int isAtStart;
char userInput[64];
int inputIsValid;
int wallCheck;
int status[3];

// FUNCTIONS
void switchOn()
{
	isAtStart = 0;
	inputIsValid = 0;
	wallCheck = 0;
	status[0] = 0;
	status[1] = 0;
	status[2] = 0;
}

void checkForWall()
{
	do
	{
		if(status[2] == 3)
		{
			walkHome();
		}

		requestInput();
		receiveInput(userInput);
		validateUserInput();

		if(inputIsValid == 0)
		{
			throwError(0);
		}
	}
	while(inputIsValid == 0);

	inputIsValid = 0;

	setWallCheck();
}

void move()
{
	if(wallCheck == 0)
	{
		walk();
	}
	else if(wallCheck == 1)
	{
		turn();
	}
}
