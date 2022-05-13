#include <stdio.h>

// external variables
extern char userInput[64];
extern int inputIsValid;
extern int wallCheck;
extern int isAtStart;
extern int status[3];

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

void checkStatus()
{
	if(status[0] == 0 && status[1] == 0 && status[2] == 4)
	{
		isAtStart = 1;
	}
}
