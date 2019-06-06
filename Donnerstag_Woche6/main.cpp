#include <iostream>

using namespace std;


// Funktion die zwei Zahlen addiert
int addiereZahlen(int zahl1, int zahl2)
{
	int ergebnis = zahl1 + zahl2;
	return ergebnis;
}


// Funktion die zwei Zahlen multipliziert
int multipliziereZahlen(int zahl1, int zahl2)
{
	return zahl1 * zahl2;
}


// main
int main()
{
	cout << "Programm zum Donnerstag Woche 6" << endl << endl;

	int zahl1 = 4;
	int zahl2 = 6;
	
	cout << addiereZahlen(zahl1, zahl2) << endl;
	
	// Funktionszeiger deklarieren / benennen
	
	// Datentyp = Zeiger auf eine Funktion, die int zurückgibt und 2 int als Parameter hat
	int(*funktionszeiger)(int, int);

	// Wert des Funktionszeigers ist die Adresse einer Funktion, die die geiche Signatur hat
	funktionszeiger = &addiereZahlen;

	int ergebnis = funktionszeiger(zahl1, zahl2);
	cout << "Ergebnis mit Funktionszeiger " << ergebnis << endl;
	

	cout << "Zahl 1 eingeben: ";
	cin >> zahl1;

	cout << "Zahl 2 eingeben: ";
	cin >> zahl2;

	char eingabe;

	cout << "Welche Rechenoperation [+ , *]: ";
	cin >> eingabe;

	if (eingabe == '+')
	{
		funktionszeiger = &addiereZahlen;
	}
	else if (eingabe == '*')
	{
		funktionszeiger = &multipliziereZahlen;
	}
	else
	{
		cout << "meow" << endl;
	}

	ergebnis = funktionszeiger(zahl1, zahl2);
	cout << "Ergebnis lautet: " << ergebnis << endl;




	system("pause");
	return 0;
}