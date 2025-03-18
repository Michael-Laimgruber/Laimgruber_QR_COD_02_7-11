#include <stdio.h>

int main()
{

    int number_1, number_2, temp, choice;

    // User input

    printf("Geben Sie zwei Zahlen ein\n\n");
    printf("Zahl 1: \n");
    scanf_s("%d", &number_1);
    printf("Zahl 2: \n");
    scanf_s("%d", &number_2);


    // Check ob number_2 > number_1 ist sonst neusortierung �ber tempor�re variable

    if (number_1 > number_2)
    {
        temp = number_1;
        number_1 = number_2;
        number_2 = temp;
    }


    // Auswahl der Reihenfolge

    printf("Waehlen Sie die Reihenfolge:\n");
    printf("(1) - Aufsteigend (number_1 bis number_2)\n");
    printf("(2) - Absteigend (number_1 bis number_2)\n");
    printf("Ihre Wahl: ");
    scanf_s("%d", &choice);


    // Sortierung auf oder ab

    if (choice == 1)
    {
        for (int i = number_1; i <= number_2; i++) {
            printf("%d ", i);
        }
    }

    else if (choice == 2)
    {
        for (int i = number_2; i >= number_1; i--) {
            printf("%d ", i);
        }
    }

    else
    {
        printf("Ung�ltige Auswahl!\n");
    }

    return 0;

}

/*

Programm 9 � Zahlen variabel

Schreiben Sie ein Programm, in dem die/der User*in 2 Zahlen eingeben kann.

Diese 2 Zahlen stehen f�r number_1imum und number_2imum.


�berlegen Sie wie Sie es bewerkstelligen, dass das number_2imum immer gr��er oder gleich dem number_1imum ist

Anschlie�end sollen alle Zahlen, je nach Auswahl von number_1imum bis number_2imum oder vom number_2imum bis zum number_1imum ausgegeben werden.

*/