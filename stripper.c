#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	
	char nameFirst[12];
	char nameSecond[12];
	char stripperName[14];
	char stripperName2[14];

	// get first name
	printf("Enter your first name: ");
	fgets(nameFirst, 12, stdin);
	// get second name
	printf("Enter your second name: ");
	fgets(nameSecond, 12, stdin);
	// removes carriage return from nameFirst that fgets collects
	strtok(nameFirst, "\n");
	printf("\nYour name: %s %s\n", nameFirst, nameSecond);


	// defining the first name
	switch (nameFirst[0])
	{
		case 'A':
		strcpy(stripperName, "Anastathia");
		break;

		case 'B':
		strcpy(stripperName, "Bannana");
		break;

		case 'C':
		strcpy(stripperName, "Cindy");
		break;

		case 'D':
		strcpy(stripperName, "Detrix");
		break;

		case 'E':
		strcpy(stripperName, "Elanomipiano");
		break;

		case 'F':
		strcpy(stripperName, "Forrest");
		break;

		case 'G':
		strcpy(stripperName, "Goldie");
		break;

		case 'H':
		strcpy(stripperName, "Harper");
		break;

		case 'I':
		strcpy(stripperName, "Indigo");
		break;

		case 'J':
		strcpy(stripperName, "Jez");
		break;

		case 'K':
		strcpy(stripperName, "Kaddlez");
		break;

		case 'L':
		strcpy(stripperName, "Louisianna");
		break;

		case 'M':
		strcpy(stripperName, "Mudcake");
		break;

		case 'O':
		strcpy(stripperName, "Oran");
		break;

		case 'P':
		strcpy(stripperName, "Persuassive");
		break;

		case 'Q':
		strcpy(stripperName, "Quarantina");
		break;

		case 'R':
		strcpy(stripperName, "Rowanda");
		break;

		case 'S':
		strcpy(stripperName, "Stacy");
		break;

		case 'T':
		strcpy(stripperName, "Telatina");
		break;

		case 'U':
		strcpy(stripperName, "Ulrich");
		break;

		case 'V':
		strcpy(stripperName, "Veranda");
		break;

		case 'W':
		strcpy(stripperName, "Welsh");
		break;

		case 'X':
		strcpy(stripperName, "Xylophone");
		break;

		case 'Y':
		strcpy(stripperName, "Ya$min");
		break;

		case 'Z':
		strcpy(stripperName, "ZELDA");
		break;
	}

	// defining the last name
	switch (nameSecond[0])
	{
		case 'A':
		strcpy(stripperName2, "Anastathia");
		break;

		case 'B':
		strcpy(stripperName2, "Bannana");
		break;

		case 'C':
		strcpy(stripperName2, "Cindy");
		break;

		case 'D':
		strcpy(stripperName2, "Detrix");
		break;

		case 'E':
		strcpy(stripperName2, "Elanomipiano");
		break;

		case 'F':
		strcpy(stripperName2, "Forrest");
		break;

		case 'G':
		strcpy(stripperName2, "Goldie");
		break;

		case 'H':
		strcpy(stripperName2, "Harper");
		break;

		case 'I':
		strcpy(stripperName2, "Indigo");
		break;

		case 'J':
		strcpy(stripperName2, "Jez");
		break;

		case 'K':
		strcpy(stripperName2, "Kaddlez");
		break;

		case 'L':
		strcpy(stripperName2, "Louisianna");
		break;

		case 'M':
		strcpy(stripperName2, "Mudcake");
		break;

		case 'O':
		strcpy(stripperName2, "Oran");
		break;

		case 'P':
		strcpy(stripperName2, "Persuassive");
		break;

		case 'Q':
		strcpy(stripperName2, "Quarantina");
		break;

		case 'R':
		strcpy(stripperName2, "Rowanda");
		break;

		case 'S':
		strcpy(stripperName2, "Stacy");
		break;

		case 'T':
		strcpy(stripperName2, "Telatina");
		break;

		case 'U':
		strcpy(stripperName2, "Ulrich");
		break;

		case 'V':
		strcpy(stripperName2, "Veranda");
		break;

		case 'W':
		strcpy(stripperName2, "Welsh");
		break;

		case 'X':
		strcpy(stripperName2, "Xylophone");
		break;

		case 'Y':
		strcpy(stripperName2, "Ya$min");
		break;

		case 'Z':
		strcpy(stripperName2, "ZELDA");
		break;
	}


	printf("Your stripper name: %s %s\n\n", stripperName, stripperName2);

	return 0;
}