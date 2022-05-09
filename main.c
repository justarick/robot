#include <stdio.h>

extern int isAtStart;

void switchOn();
void checkForWall();

void main()
{
	switchOn();

	while(isAtStart == 0)
	{
		checkForWall();
	}
}
