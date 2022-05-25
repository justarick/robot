#include <stdio.h>

void getInput(char *input)
{
	scanf("%s", input);
	printf("\n");
}

void phrase(int n)
{
	printf("WallE sagt: ");

	switch(n)
	{
		case 0: printf("Hallo, ich bin WallE.\nIch kann in einem rechteckigen Raum an der Wand entlanglaufen.\nIch mache einen Schritt nach dem anderen.\nDu musst mir sagen, wenn eine Wand vor mir ist.\nNach der dritten Drehung kann ich allein zum Start laufen.\n\n");
			break;
		case 1: printf("Ist eine Wand vor mir?\nAntwort (j/n): ");
			break;
		case 2: printf("Schritt\n\n");
			break;
		case 3: printf("Drehung\n\n");
			break;
		case 4: printf("Ich laufe zum Start\n\n");
			break;
	}
}

void error(int n)
{
	printf("Fehler: ");

	switch(n)
	{
		case 0: printf("Das habe ich nicht verstanden.\n\n");
			break;
		case 1: printf("Das kann nicht sein.\nDer Raum ist rechteckig.\n\n");
	}
}
