#include <stdio.h>


int main()
{

    int number_1, number_2, number_3;
    int sum = 0;



    // Eingabe


    printf("Geben Sie die erste Zahl ein: ");
    scanf_s("%d", &number_1);
    printf("Geben Sie die zweite Zahl ein: ");
    scanf_s("%d", &number_2);
    printf("Geben Sie die dritte Zahl ein: ");
    scanf_s("%d", &number_3);





    // calc in a loop

    while (sum <= 1000000)
    {

        sum += number_1 + number_2 + number_3;

        printf("Aktuelle Summe: %d\n", sum);

    }


    printf("Die Summe wurde ueberschritten. Hier ist Ihr Ergebnis: %d\n", sum);




    return 0;
}



/*

Programm 10 – Summen bilden


Schreiben Sie ein Programm, in dem die/der User*in 3 Zahlen eingeben kann.
Diese 3 Zahlen sollen zu einer Variable addiert werden, bis der Wert der Summe dieser Variablen 1.000.000 überschreitet
Geben sie am Ende aus, wie viele Schleifendurchgänge dafür nötig waren.


*/