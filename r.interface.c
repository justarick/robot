#include <stdio.h>

void requestInput()
{
	printf("\nIst eine Wand vor mir?\nAntwort (j/n): ");
}

void receiveInput(char *input)
{
	scanf("%s", input);
}

void throwInputError()
{
	printf("Das habe ich nicht verstanden.\n");
}
