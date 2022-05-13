#include <stdio.h>

extern int isAtStart;

void switchOn();
void checkForWall();
void move();
void checkStatus();

void main()
{
	switchOn();

	while(isAtStart == 0)
	{
		checkForWall();
		move();
		checkStatus();
	}
}
