#include <stdio.h>

extern int isAtStart;

void boot();
void lookaround();
void move();
void checkStatus();

void main()
{
	boot();

	while(isAtStart == 0)
	{
		lookaround();
		move();
		checkStatus();
	}
}
