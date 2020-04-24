//=============================================================
//Autor: Maximilian Müller
//Datum: 22.04.2020
//Funktion: Getränkeautomat
//=============================================================

#include <stdio.h>
#include <stdlib.h>
#include <getraenkeautomat.h> // Beinhaltet die eigenen Funktionen für den Getränkeautomaten
#include <windows.h> // Für Windows als Target, wenn Linux oder MacOS, dann auskommentieren!
#if GlobalDEBUG >= 1 // In diesem Abschnitt werden die Debug-Funktionen aktiviert, wenn in getraenkeautomat.h GlobalDEBUG aktiv
#define debug 1
#else
#define debug 0
#endif // GlobalDEBUG

int irerun=1; // Solange dieser Wert 1 ist, wird das Hauptprogramm wiederholt.
float babby=1.99; // Wird später noch gelöscht

//

int main()
{
    system("color a"); // Hier wird die Ausgabefarbe auf Grün gestellt
    do
    {
        int iSelect = funtime(); // Diese Var verwende ich, um den Rückgabewert von funtime, also die Auswahl zu bekommen.
        int iCheck;
        printf("Ihre Auswahl ist: %d\n\n", iSelect);
//        if(iSelect==9||iSelect==10)
//        {
//            printf("Altersnachweiss!\n\n");
//        }

        switch(iSelect)
        {
        case 1:
            printf("Sie haben Cola ausgewaehlt! Einen Moment bitte...");
            Sleep(4000);
            payment(preis(iSelect));
            break;
        case 2:
            printf("Sie haben Cola Zero ausgewaehlt! Einen Moment bitte...");
            Sleep(4000);
            payment(preis(iSelect));
            break;
        case 3:
            printf("Sie haben Fanta ausgewaehlt! Einen Moment bitte...");
            Sleep(4000);
            payment(preis(iSelect));
            break;
        case 4:
            printf("Sie haben Eistee Zitrone ausgewaehlt! Einen Moment bitte...");
            Sleep(4000);
            payment(preis(iSelect));
            break;
        case 5:
            printf("Sie haben Eistee Pfirsich ausgewaehlt! Einen Moment bitte...");
            Sleep(4000);
            payment(preis(iSelect));
            break;
        case 6:
            printf("Sie haben Eistee Limette ausgewaehlt! Einen Moment bitte...");
            Sleep(4000);
            payment(preis(iSelect));
            break;
        case 7:
            printf("Sie haben Kirschschorle ausgewaehlt! Einen Moment bitte...");
            Sleep(4000);
            payment(preis(iSelect));
            break;
        case 8:
            printf("Sie haben Apfelschorle ausgewaehlt! Einen Moment bitte...");
            Sleep(4000);
            payment(preis(iSelect));
            break;
        case 9:
            printf("Sie haben Jack Daniels ausgewaehlt! Einen Moment bitte...");
            Sleep(4000);
            iCheck=AgeCheck(18);
            if(iCheck==1)
            {
                payment(preis(iSelect));
            }
            break;
        case 10:
            printf("Sie haben Jim Beam ausgewaehlt! Einen Moment bitte...");
            Sleep(4000);
            iCheck=AgeCheck(18);
            if(iCheck==1)
            {
                payment(preis(iSelect));
            }
            break;
        }

#if debug >= 1
        hidden();
#endif // debug

        // payment(preis(iSelect));
        system("cls");


    }
    while(irerun == 1);



    return 0;
}
