#include <stdio.h>

// r.interface.c
void requestInput();
void receiveInput(char *input);
void throwInputError();

// r.system.c
void validateUserInput();
void setWallCheck();

// VARIABLES
int isAtStart;

char userInput[64];
int inputIsValid;

int wallCheck;

// FUNCTIONS
void switchOn()
{
	isAtStart = 0;
	inputIsValid = 0;
	wallCheck = 0;
}

void checkForWall()
{
	do
	{
		requestInput();
		receiveInput(userInput);
		validateUserInput();

		if(inputIsValid == 0)
		{
			throwInputError();
		}
	}
	while(inputIsValid == 0);

	inputIsValid = 0;

	setWallCheck();

	printf("WallCheck: %d", wallCheck);
}
