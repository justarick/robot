#include <stdio.h>

void getInput(char *input);
void phrase(int phraseNumber);
void error(int errorNumber);

void validateInput();
void setWallCheck();

void walkHome();
void walk();
void turn();

int isAtStart;
char userInput[64];
int inputIsValid;
int wallCheck;
int status[3];

void boot()
{
	phrase(0);

	isAtStart = 0;
	inputIsValid = 0;
	wallCheck = 0;
	status[0] = 0;
	status[1] = 0;
	status[2] = 0;
}

void lookaround()
{
	while(status[2] < 3 && inputIsValid == 0)
	{
		phrase(1);
		getInput(userInput);
		validateInput();
	}

	inputIsValid = 0;

	setWallCheck();
}

void move()
{
	if(status[2] == 3)
	{
		walkHome();
	}
	else if(wallCheck == 0)
	{
		walk();
	}
	else if(wallCheck == 1)
	{
		turn();
	}
}
