#include <stdio.h>

int main()
{
    // Jede zweite Zahl
    int i_1;
    // Jede fuenfte Zahl
    int i_2;


    printf("Hier sehen Sie jede zweite Zahl von 1 bis 50.\n\n");

    // Start bei 2 - bis 50 - variable immer + 2 dann print (2 // 2+2=4 // 4+2=6 // etc.
    for (int i_1 = 2; i_1 <= 50; i_1 = i_1 + 2)

    {

        printf("%d ", i_1);

    }

    printf("\n\nHier sehen Sie jede zweite Zahl von 1 bis 50.\n\n");

    // Start bei 5 - bis 50 - variable immer + 5 dann print (5 // 5+5=10 // 10+5=15 // etc.
    for (int i_2 = 5; i_2 <= 50; i_2 = i_2 + 5)

    {
        printf("%d ", i_2);

    }

    printf("\n\n");


    return 0;
}




/*


Programm 11 – Nur jede zweite und jede fünfte Zahl


Schreiben Sie ein Programm, mit dem Sie jede zweite und jede fünfte Zahl von  1 bis 50 ausgeben können



*/