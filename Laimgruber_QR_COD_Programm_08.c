#include <stdio.h>

int main()
{

    int numbers;

    //auswahl

    printf("Sortierreihenfolge auswaehlen:\n");
    printf("(1) Aufsteigend\n");
    printf("(2) Absteigend\n");
    printf("Ihre Wahl: ");
    scanf_s("%d", &numbers);



    //aufsteigend

    if (numbers == 1)
    {

        for (int i = 1; i <= 25; i++)
        {
            printf("\n %d", i);
        }
    }


    //absteigend

    else if (numbers == 2)
    {

        for (int i = 25; i >= 1; i--)
        {
            printf("\n %d", i);
        }
    }


    //error

    else
    {
        printf("Error - Bitte 1 oder 2 waehlen.\n");
    }


    return 0;
}

/*


Programm 8 – Zahlen von 1 - 25


Schreiben Sie ein Programm, mit dem Sie auswählen können, ob die Zahlen von 1 bis 25 entweder aufsteigend oder absteigend ausgeben können



*/