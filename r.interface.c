#include <stdio.h>

void requestInput()
{
	printf("\nIst eine Wand vor mir?\nAntwort (j/n): ");
}

void receiveInput(char *input)
{
	scanf("%s", input);
}

void throwError(int errorNumber)
{
	switch(errorNumber)
	{
		case 0: printf("Das habe ich nicht verstanden.\n");
			break;
	}
}

void sayMove()
{
	printf("Schritt\n");
}

void sayTurn()
{
	printf("Drehung\n");
}
