#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

char wybierzOpcjeZMenuGlownego();
char wybierzOpcjeZMenuUzytkownika();

int main() {
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");
    char wybor;

    while (true) {
        if (ksiazkaAdresowa.czyUzytkownikJestZalogowany() == false) {
            wybor = wybierzOpcjeZMenuGlownego();

            switch (wybor) {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '3':
                ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        } else {

            wybor = wybierzOpcjeZMenuUzytkownika();

            switch (wybor) {
            case '1':
                ksiazkaAdresowa.dodajAdresata();
                break;
            case '2':
                ksiazkaAdresowa.wyszukajAdresatowPoImieniu();
                break;
            case '3':
                ksiazkaAdresowa.wyszukajAdresatowPoNazwisku();
                break;
            case '4':
                ksiazkaAdresowa.wyswietlWszystkichAdresatow();
                break;
            case '7':
                ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                break;
            case '8':
                ksiazkaAdresowa.wylogowanieUzytkownika();
                break;
            }
        }
    }
    return 0;
}

/*
DOST�PNE METODY:
czyUzytkownikJestZalogowany();          XXXXXXXXXXXXXXXXXXXXXXXXXXXXX
rejestracjaUzytkownika();               XXXXXXXXXXXXXXXXXXXXXXXXXXXXX
wypiszWszystkichUzytkownikow();         XXXXXXXXXXXXXXXXXXXXXXXXXXXXX
logowanieUzytkownika();                 XXXXXXXXXXXXXXXXXXXXXXXXXXXXX
zmianaHaslaZalogowanegoUzytkownika();   XXXXXXXXXXXXXXXXXXXXXXXXXXXXX
wylogowanieUzytkownika();               XXXXXXXXXXXXXXXXXXXXXXXXXXXXX
wyswietlWszystkichAdresatow();          XXXXXXXXXXXXXXXXXXXXXXXXXXXXX
dodajAdresata();                        XXXXXXXXXXXXXXXXXXXXXXXXXXXXX
*/

char wybierzOpcjeZMenuGlownego() {
    char wybor;

    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "3. Wypisz wszystkich Uzytkonikow" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}

char wybierzOpcjeZMenuUzytkownika() {
    char wybor;

    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyszukaj po imieniu" << endl;
    cout << "3. Wyszukaj po nazwisku" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}


/*char wybierzOpcjeZMenuUzytkownika()
{



    cout << "5. Usun adresata" << endl;
    cout << "6. Edytuj adresata" << endl;

*/




