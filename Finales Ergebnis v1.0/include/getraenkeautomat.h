//=============================================================
//Autor: Maximilian Müller
//Datum: 22.04.2020
//Funktion: Getränkeautomat Funktionen
//=============================================================

#ifndef GETRAENKEAUTOMAT_H_INCLUDED
#define GETRAENKEAUTOMAT_H_INCLUDED
#define GlobalDEBUG 1
//#define debug 0 | DEBUG Stuff off
//#define debug 1 | DEBUG Stuff on
#define MAX_LEN 128
#include <windows.h>

extern int irerun;
float preis(float a);
float payment(float price);
void image(FILE *fptr);
int iAgeCheck( int iAgeSell);

void hidden(void)
{
    system("cls");
    printf("This hidden message is brought to you by Maximilian M. :P!\n\n\n");
    Sleep(10000);
    system("cls");
}

int funtime(void)
{
    int iAuswahl;
    do
    {


char *name = "image.txt";
    FILE *fptr = NULL;

    if((fptr = fopen(name,"r")) == NULL)
    {
        fprintf(stderr,"error opening %s\n",name);
        return 1;
    }

    image(fptr);

    fclose(fptr);

        printf("\n\n\n==============================Getraenkeautomat==============================\n");
        printf("Getraenkeliste: \n");
        printf("Cola                  %10.2f EUR (01)\n", preis(1));
        printf("Cola Zero             %10.2f EUR (02)\n", preis(2));
        printf("Fanta                 %10.2f EUR (03)\n", preis(3));
        printf("Eistee Zitrone        %10.2f EUR (04)\n", preis(4));
        printf("Eistee Pfirsich       %10.2f EUR (05)\n", preis(5));
        printf("Eistee Limette        %10.2f EUR (06)\n", preis(6));
        printf("Kirschschorle         %10.2f EUR (07)\n", preis(7));
        printf("Apfelschorle          %10.2f EUR (09)\n", preis(8));
        printf("Jack Daniels (+18)    %10.2f EUR (09)\n", preis(9));
        printf("Jim Beam (+18)        %10.2f EUR (10)\n", preis(10));
        printf("\n\n\n");
        printf("Auswahl: ");
        fflush(stdin);
        scanf("%d", &iAuswahl);
        system("cls");
        //if (debug=1 && iAuswahl==99)
        //{
        //    irerun=0;
        //}
        if(iAuswahl !=1 && iAuswahl !=2 && iAuswahl !=3 && iAuswahl !=4 && iAuswahl !=5 && iAuswahl !=6 && iAuswahl !=7 && iAuswahl !=8 && iAuswahl !=9 && iAuswahl !=10 && iAuswahl !=99)
        {
            printf("Falsche Eingabe erkannt!\n\n");
        }
    }
    while(iAuswahl !=1 && iAuswahl !=2 && iAuswahl !=3 && iAuswahl !=4 && iAuswahl !=5 && iAuswahl !=6 && iAuswahl !=7 && iAuswahl !=8 && iAuswahl !=9 && iAuswahl !=10 && iAuswahl !=99);
//    printf("Toll!\n\n");
//   funtime=iAuswahl;
    return iAuswahl;


//    _sleep (5000);
}

float preis( float a )
{
    if(a==1)
    {
        return 2.00;
    }
    else if(a==2)
    {
        return 1.20;
    }
    else if(a==3)
    {
        return 2.50;
    }
    else if(a==4)
    {
        return 3.50;
    }
    else if(a==5)
    {
        return 2.50;
    }
    else if(a==6)
    {
        return 4.50;
    }
    else if(a==7)
    {
        return 1.50;
    }
    else if(a==8)
    {
        return 5.50;
    }
    else if(a==9)
    {
        return 25.50;
    }
    else if(a==10)
    {
        return 19.99;
    }
return 0;
}

float payment(float fPrice)
{
    float fEinwurf;
    float fPayed=fPrice;
    int error;


    do
    {
        system("cls");
        error=0;
        printf("Faelliger Betrag: %10.2f EUR\n\n\n", fPayed);
        printf("Einwurf (10,20,50 Cent, 1,2 EUR (z.B. 0.10 oder 1)): ");
        fflush(stdin);
        scanf("%f", &fEinwurf);
        if(fEinwurf !=0.1f && fEinwurf !=0.2f && fEinwurf !=0.5f && fEinwurf !=1.0f && fEinwurf !=2.0f)
        {
            printf("\nError! Kontrolliere die Zulaessigen Muenzen!");
            error=1;
            Sleep(5000);
        }
        if(error==0)
        {
        fPayed=fPayed-fEinwurf;
        }
    }
    while(fPayed > 0);
    if(fPayed < 0)
    {
        float fPayback=fPayed;
        fPayback=-fPayback;
        printf("\n______________________________________\n");
        printf("Ihr Rueckgeld: %10.2f EUR", fPayback);
        Sleep(5000);
        printf("\n\n\nLassen Sie es sich schmecken und begehren eh beehren Sie uns bald wieder!\n\n");
        Sleep (10000);
    }


    return 0;
}
void image(FILE *fptr)
{
    char read_string[MAX_LEN];

    while(fgets(read_string,sizeof(read_string),fptr) != NULL)
        printf("%s",read_string);
}
int AgeCheck( int iAgeSell){
    int iAgeInput;
printf("\n\nUm fortzufahren geben Sie bitte ihr alter an(Alter in Jahren): ");
fflush(stdin);
scanf("%d", &iAgeInput);
if(iAgeInput >= iAgeSell){
    return 1;
}
else{
    printf("\n\nSie haben nicht das erforderliche Mindestalter!");
    Sleep(5000);
    return 0;
}
}

#endif // GETRAENKEAUTOMAT_H_INCLUDED
