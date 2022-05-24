#include <stdio.h>

void getInput(char *input)
{
	scanf("%s", input);
}

void phrase(int n)
{
	printf("WallE sagt: ");

	switch(n)
	{
		case 0: printf("Hallo, ich bin WallE.\n
				Ich kann in einem rechteckigen Raum an der Wand entlangfahren.\n
				Ich mache einen Schritt nach dem anderen.\n
				Du musst mir sagen, wenn eine Wand vor mir ist.\n
				Nach der dritten Drehung kann ich allein zum Start laufen.\n");
			break;
		case 1: printf("Ist eine Wand vor mir?\n
				Antwort (j/n): ");
			break;
		case 2: printf("Schritt\n");
			break;
		case 3: printf("Drehung\n");
			break;
		case 4: printf("Ich laufe zum Start\n");
			break;
	}
}

void error(int n)
{
	printf("Fehler: ");

	switch(n)
	{
		case 0: printf("Das habe ich nicht verstanden.\n");
			break;
		case 1: printf("Das kann nicht sein.\n
				Der Raum ist rechteckig.\n");
	}
}

void info(int n)
{
	printf("Info: ");

	switch(n)
	{
		case 0; printf("");
			break;
	}
}
