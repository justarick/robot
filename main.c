#include <stdio.h>

extern int isAtStart;
extern int status[3];

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
		printf("x: %d, y: %d, r: %d\n", status[0], status[1], status[2]);
		checkStatus();
	}
}
