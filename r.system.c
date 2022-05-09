#include <stdio.h>

// robot.c
extern char userInput[64];
extern int inputIsValid;
extern int wallCheck;

// FUNCTIONS
void validateUserInput()
{
	if(*userInput == 'j' || *userInput == 'n')
	{
		inputIsValid = 1;
	}
}

void setWallCheck()
{
	if(*userInput == 'j')
        {
                wallCheck = 1;
        }
	else
	{
		wallCheck = 0;
	}
}
