#include <stdio.h>

int main()
{

	int number;

	printf("Hier koennen Sie Schulnoten berechnen.\n\nDer Punktebereich muss zwischen 0 und 400 liegen.\n\nGeben Sie nun die erreichte Punktezahl ein und druecken danach Enter: ");
	scanf_s("%d", &number);

	if (number >= 0 && number <= 199)
	{
		printf("Ungenuegend\n");
	}

	else if (number >= 200 && number <= 249)
	{
		printf("Genuegend\n");
	}

	else if (number >= 250 && number <= 299)
	{
		printf("Befriedigend\n");
	}

	else if (number >= 300 && number <= 349)
	{
		printf("Gut\n");
	}

	else if (number >= 350 && number <= 400)
	{
		printf("Sehr Gut\n");
	}

	else
	{
		printf("Ungueltige Eingabe. Der Punktebereich muss zwischen 0 und 400 liegen.\n");
	}


	return 0;
}


/*

Programm 7 – Schulnoten ermitteln


Schreiben Sie ein Programm, mit dem Sie Punktezahlen eingeben können.Das Programm sollte Ihnen dann eine Bewertung nach dem Schulnotensystem ausgeben.
Es soll zu Beginn eine Punktzahl eingegeben werden.Die maximal zu erreichenden Punkte sind 400

Es gilt folgende Benotungsskala:

Sehr gut : 350 - 400
Gut : 300 - 349
Befriedigend : 250 - 299
Genügend : 200 - 249
Durchgefallen : 0 - 199

Geben Sie je nach Punkten eine passende Meldung aus.
Achten Sie darauf, dass keine Punktzahl kleiner als 0 und größer als 400 eingegeben werden kann.

*/