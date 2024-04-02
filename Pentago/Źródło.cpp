// Jakub Dutkiewicz EiT gr.2 188833
// Visual Studio 2019

#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <ctime>

using namespace std;

void Menu_gry();

void Rysowanie(char T[9][9]) // funkcja rysujaca tablice
{



	const char kraw_poz = 0xCD;
	const char kraw_pion = 0xBA;
	const char lewa_gora_rog = 0xC9;
	const char lewa_dol_rog = 0xC8;
	const char prawa_gora_rog = 0xBB;
	const char prawa_dol_rog = 0xBC;
	const char litera_t = 0xCB;
	const char odwroc_t = 0xCA;
	const char lewe_t = 0xCC;
	const char prawe_t = 0xB9;
	const char krzyz = 0xCE;
	const char spacja = 0xFF;
	char znak1 = 111;
	char znak2 = 120;

	cout << endl << endl << endl << endl;

	cout << endl << endl;
	cout << endl << "                         " << lewa_gora_rog << kraw_poz << kraw_poz << kraw_poz << litera_t << kraw_poz << kraw_poz << kraw_poz << litera_t << kraw_poz << kraw_poz << kraw_poz << prawa_gora_rog << " " << lewa_gora_rog << kraw_poz << kraw_poz << kraw_poz << litera_t << kraw_poz << kraw_poz << kraw_poz << litera_t << kraw_poz << kraw_poz << kraw_poz << prawa_gora_rog;
	cout << endl << "                         " << kraw_pion << spacja << T[0][0] << spacja << kraw_pion << spacja << T[0][1] << spacja << kraw_pion << spacja << T[0][2] << spacja << kraw_pion << " " << kraw_pion << spacja << T[0][3] << spacja << kraw_pion << spacja << T[0][4] << spacja << kraw_pion << spacja << T[0][5] << spacja << kraw_pion;
	cout << endl << "                         " << lewe_t << kraw_poz << kraw_poz << kraw_poz << krzyz << kraw_poz << kraw_poz << kraw_poz << krzyz << kraw_poz << kraw_poz << kraw_poz << prawe_t << " " << lewe_t << kraw_poz << kraw_poz << kraw_poz << krzyz << kraw_poz << kraw_poz << kraw_poz << krzyz << kraw_poz << kraw_poz << kraw_poz << prawe_t;
	cout << endl << "                         " << kraw_pion << spacja << T[1][0] << spacja << kraw_pion << spacja << T[1][1] << spacja << kraw_pion << spacja << T[1][2] << spacja << kraw_pion << " " << kraw_pion << spacja << T[1][3] << spacja << kraw_pion << spacja << T[1][4] << spacja << kraw_pion << spacja << T[1][5] << spacja << kraw_pion;
	cout << endl << "                         " << lewe_t << kraw_poz << kraw_poz << kraw_poz << krzyz << kraw_poz << kraw_poz << kraw_poz << krzyz << kraw_poz << kraw_poz << kraw_poz << prawe_t << " " << lewe_t << kraw_poz << kraw_poz << kraw_poz << krzyz << kraw_poz << kraw_poz << kraw_poz << krzyz << kraw_poz << kraw_poz << kraw_poz << prawe_t;
	cout << endl << "                         " << kraw_pion << spacja << T[2][0] << spacja << kraw_pion << spacja << T[2][1] << spacja << kraw_pion << spacja << T[2][2] << spacja << kraw_pion << " " << kraw_pion << spacja << T[2][3] << spacja << kraw_pion << spacja << T[2][4] << spacja << kraw_pion << spacja << T[2][5] << spacja << kraw_pion;
	cout << endl << "                         " << lewa_dol_rog << kraw_poz << kraw_poz << kraw_poz << odwroc_t << kraw_poz << kraw_poz << kraw_poz << odwroc_t << kraw_poz << kraw_poz << kraw_poz << prawa_dol_rog << " " << lewa_dol_rog << kraw_poz << kraw_poz << kraw_poz << odwroc_t << kraw_poz << kraw_poz << kraw_poz << odwroc_t << kraw_poz << kraw_poz << kraw_poz << prawa_dol_rog;

	cout << endl << "                         " << lewa_gora_rog << kraw_poz << kraw_poz << kraw_poz << litera_t << kraw_poz << kraw_poz << kraw_poz << litera_t << kraw_poz << kraw_poz << kraw_poz << prawa_gora_rog << " " << lewa_gora_rog << kraw_poz << kraw_poz << kraw_poz << litera_t << kraw_poz << kraw_poz << kraw_poz << litera_t << kraw_poz << kraw_poz << kraw_poz << prawa_gora_rog;
	cout << endl << "                         " << kraw_pion << spacja << T[3][0] << spacja << kraw_pion << spacja << T[3][1] << spacja << kraw_pion << spacja << T[3][2] << spacja << kraw_pion << " " << kraw_pion << spacja << T[3][3] << spacja << kraw_pion << spacja << T[3][4] << spacja << kraw_pion << spacja << T[3][5] << spacja << kraw_pion;
	cout << endl << "                         " << lewe_t << kraw_poz << kraw_poz << kraw_poz << krzyz << kraw_poz << kraw_poz << kraw_poz << krzyz << kraw_poz << kraw_poz << kraw_poz << prawe_t << " " << lewe_t << kraw_poz << kraw_poz << kraw_poz << krzyz << kraw_poz << kraw_poz << kraw_poz << krzyz << kraw_poz << kraw_poz << kraw_poz << prawe_t;
	cout << endl << "                         " << kraw_pion << spacja << T[4][0] << spacja << kraw_pion << spacja << T[4][1] << spacja << kraw_pion << spacja << T[4][2] << spacja << kraw_pion << " " << kraw_pion << spacja << T[4][3] << spacja << kraw_pion << spacja << T[4][4] << spacja << kraw_pion << spacja << T[4][5] << spacja << kraw_pion;
	cout << endl << "                         " << lewe_t << kraw_poz << kraw_poz << kraw_poz << krzyz << kraw_poz << kraw_poz << kraw_poz << krzyz << kraw_poz << kraw_poz << kraw_poz << prawe_t << " " << lewe_t << kraw_poz << kraw_poz << kraw_poz << krzyz << kraw_poz << kraw_poz << kraw_poz << krzyz << kraw_poz << kraw_poz << kraw_poz << prawe_t;
	cout << endl << "                         " << kraw_pion << spacja << T[5][0] << spacja << kraw_pion << spacja << T[5][1] << spacja << kraw_pion << spacja << T[5][2] << spacja << kraw_pion << " " << kraw_pion << spacja << T[5][3] << spacja << kraw_pion << spacja << T[5][4] << spacja << kraw_pion << spacja << T[5][5] << spacja << kraw_pion;
	cout << endl << "                         " << lewa_dol_rog << kraw_poz << kraw_poz << kraw_poz << odwroc_t << kraw_poz << kraw_poz << kraw_poz << odwroc_t << kraw_poz << kraw_poz << kraw_poz << prawa_dol_rog << " " << lewa_dol_rog << kraw_poz << kraw_poz << kraw_poz << odwroc_t << kraw_poz << kraw_poz << kraw_poz << odwroc_t << kraw_poz << kraw_poz << kraw_poz << prawa_dol_rog;
};

void tablica_ruchow(string ruch, int& indeks_ruchu) // indeks ruchow przekazywanych do switch case
{


	if (ruch == "q1") indeks_ruchu = 49;
	if (ruch == "q2") indeks_ruchu = 50;
	if (ruch == "q3") indeks_ruchu = 51;
	if (ruch == "q4") indeks_ruchu = 52;
	if (ruch == "q5") indeks_ruchu = 53;
	if (ruch == "q6") indeks_ruchu = 54;
	if (ruch == "q7") indeks_ruchu = 55;
	if (ruch == "q8") indeks_ruchu = 56;
	if (ruch == "q9") indeks_ruchu = 57;
	if (ruch == "w1") indeks_ruchu = 12593;
	if (ruch == "w2") indeks_ruchu = 12594;
	if (ruch == "w3") indeks_ruchu = 12595;
	if (ruch == "w4") indeks_ruchu = 12596;
	if (ruch == "w5") indeks_ruchu = 12597;
	if (ruch == "w6") indeks_ruchu = 12598;
	if (ruch == "w7") indeks_ruchu = 12599;
	if (ruch == "w8") indeks_ruchu = 12600;
	if (ruch == "w9") indeks_ruchu = 12601;
	if (ruch == "a1") indeks_ruchu = 12849;
	if (ruch == "a2") indeks_ruchu = 12850;
	if (ruch == "a3") indeks_ruchu = 12851;
	if (ruch == "a4") indeks_ruchu = 12852;
	if (ruch == "a5") indeks_ruchu = 12853;
	if (ruch == "a6") indeks_ruchu = 12854;
	if (ruch == "a7") indeks_ruchu = 12855;
	if (ruch == "a8") indeks_ruchu = 12856;
	if (ruch == "a9") indeks_ruchu = 12857;
	if (ruch == "s1") indeks_ruchu = 13105;
	if (ruch == "s2") indeks_ruchu = 13106;
	if (ruch == "s3") indeks_ruchu = 13107;
	if (ruch == "s4") indeks_ruchu = 13108;
	if (ruch == "s5") indeks_ruchu = 13109;
	if (ruch == "s6") indeks_ruchu = 13110;
	if (ruch == "s7") indeks_ruchu = 13111;
	if (ruch == "s8") indeks_ruchu = 13112;
	if (ruch == "s9") indeks_ruchu = 13113;
	if (ruch == "h") indeks_ruchu = 104;
	if (ruch == "c") indeks_ruchu = 99;
	if (ruch == "p") indeks_ruchu = 112;
	if (ruch == "m") indeks_ruchu = 109;
	if (ruch == "o") indeks_ruchu = 111;

} //

int KiK_win(char T[9][9], char znak_gracz_1, char znak_gracz_2, int& wynik, string gracz_1, string gracz_2) // warunek wygranej  i remisu dla Kó³ka i krzy¿yk
{
	const char spacja = 32;

	for (int i = 0; i < 6; i++) // sprawdzanie dla wierszy
	{
		if (((T[i][0] == znak_gracz_1) && (T[i][1] == znak_gracz_1) && (T[i][2] == znak_gracz_1) && (T[i][3] == znak_gracz_1) && (T[i][4] == znak_gracz_1) && (T[i][5] == znak_gracz_1))) wynik = 1;
	}
	for (int j = 0; j < 6; j++) // sprawdzanie dla kolumn
	{
		if (((T[0][j] == znak_gracz_1) && (T[1][j] == znak_gracz_1) && (T[2][j] == znak_gracz_1) && (T[3][j] == znak_gracz_1) && (T[4][j] == znak_gracz_1) && (T[5][j] == znak_gracz_1))) wynik = 1;
	}

	if ((T[0][0] == znak_gracz_1) && (T[1][1] == znak_gracz_1) && (T[2][2] == znak_gracz_1) && (T[3][3] == znak_gracz_1) && (T[4][4] == znak_gracz_1) && (T[5][5] == znak_gracz_1)) wynik = 1; // SPRAWDZANIE
	if ((T[5][0] == znak_gracz_1) && (T[4][1] == znak_gracz_1) && (T[3][2] == znak_gracz_1) && (T[2][3] == znak_gracz_1) && (T[1][4] == znak_gracz_1) && (T[0][5] == znak_gracz_1)) wynik = 1; // PRZEKATNYCH




	for (int i = 0; i < 6; i++) // sprawdzanie dla wierszy
	{
		if (((T[i][0] == znak_gracz_2) && (T[i][1] == znak_gracz_2) && (T[i][2] == znak_gracz_2) && (T[i][3] == znak_gracz_2) && (T[i][4] == znak_gracz_2) && (T[i][5] == znak_gracz_2))) wynik = 2;
	}
	for (int j = 0; j < 6; j++) // sprawdzanie dla kolumn
	{
		if (((T[0][j] == znak_gracz_2) && (T[1][j] == znak_gracz_2) && (T[2][j] == znak_gracz_2) && (T[3][j] == znak_gracz_2) && (T[4][j] == znak_gracz_2) && (T[5][j] == znak_gracz_2))) wynik = 2;
	}

	if ((T[0][0] == znak_gracz_2) && (T[1][1] == znak_gracz_2) && (T[2][2] == znak_gracz_2) && (T[3][3] == znak_gracz_2) && (T[4][4] == znak_gracz_2) && (T[5][5] == znak_gracz_2)) wynik = 2; // SPRAWDZANIE
	if ((T[5][0] == znak_gracz_2) && (T[4][1] == znak_gracz_2) && (T[3][2] == znak_gracz_2) && (T[2][3] == znak_gracz_2) && (T[1][4] == znak_gracz_2) && (T[0][5] == znak_gracz_2)) wynik = 2; // PRZEKATNYCH


	if ((T[0][0] != spacja) && (T[0][1] != spacja) && (T[0][2] != spacja) && (T[0][3] != spacja) && (T[0][4] != spacja) && (T[0][5] != spacja) && (T[1][0] != spacja)
		&& (T[1][1] != spacja) && (T[1][2] != spacja) && (T[1][3] != spacja) && (T[1][4] != spacja) && (T[1][5] != spacja) && (T[2][0] != spacja)
		&& (T[2][1] != spacja) && (T[2][2] != spacja) && (T[2][3] != spacja) && (T[2][4] != spacja) && (T[2][5] != spacja) && (T[3][0] != spacja)
		&& (T[3][1] != spacja) && (T[3][2] != spacja) && (T[3][3] != spacja) && (T[3][4] != spacja) && (T[3][5] != spacja) && (T[4][0] != spacja)
		&& (T[4][1] != spacja) && (T[4][2] != spacja) && (T[4][3] != spacja) && (T[4][4] != spacja) && (T[4][5] != spacja) && (T[5][0] != spacja)
		&& (T[5][1] != spacja) && (T[5][2] != spacja) && (T[5][3] != spacja) && (T[5][4] != spacja) && (T[5][5] != spacja))  	wynik = 3;


	if (wynik == 1)
	{



		cout << endl << "GRACZ: " << gracz_1 << " WYGRYWA! GRATURACJE!";
		return 0;
	}

	if (wynik == 2)
	{
		cout << endl << "GRACZ: " << gracz_2 << " WYGRYWA! GRATURACJE!";
		return 0;
	}
	if (wynik == 3)
	{
		cout << endl << "BRAK WOLNYCH RUCHOW - REMIS!";
		return 0;
	}

	return 1;
}

int Pentago_win(char T[9][9], char& znak_gracz_1, char& znak_gracz_2, int& wynik, string gracz_1, string gracz_2) // warunek wygranej i remisu dla pentago
{

	const char spacja = 32;

	for (int i = 0; i < 5; i++)
	{
		if ((T[0][i] == znak_gracz_1) && (T[1][i] == znak_gracz_1) && (T[2][i] == znak_gracz_1) && (T[3][i] == znak_gracz_1) && (T[4][i] == znak_gracz_1)) wynik = 1;
	}
	for (int i = 0; i < 5; i++)
	{
		if ((T[1][i] == znak_gracz_1) && (T[2][i] == znak_gracz_1) && (T[3][i] == znak_gracz_1) && (T[4][i] == znak_gracz_1) && (T[5][i] == znak_gracz_1)) wynik = 1;
	}
	for (int i = 0; i < 5; i++)
	{
		if ((T[i][0] == znak_gracz_1) && (T[i][1] == znak_gracz_1) && (T[i][2] == znak_gracz_1) && (T[i][3] == znak_gracz_1) && (T[i][4] == znak_gracz_1)) wynik = 1;
	}
	for (int i = 0; i < 5; i++)
	{
		if ((T[i][1] == znak_gracz_1) && (T[i][2] == znak_gracz_1) && (T[i][3] == znak_gracz_1) && (T[i][4] == znak_gracz_1) && (T[i][5] == znak_gracz_1)) wynik = 1;
	}

	if ((T[1][0] == znak_gracz_2) && (T[2][1] == znak_gracz_2) && (T[3][2] == znak_gracz_2) && (T[4][3] == znak_gracz_2) && (T[5][4] == znak_gracz_2)) wynik = 1;
	if ((T[0][1] == znak_gracz_2) && (T[1][2] == znak_gracz_2) && (T[2][3] == znak_gracz_2) && (T[3][4] == znak_gracz_2) && (T[4][5] == znak_gracz_2)) wynik = 1;
	if ((T[4][0] == znak_gracz_2) && (T[3][1] == znak_gracz_2) && (T[2][2] == znak_gracz_2) && (T[1][3] == znak_gracz_2) && (T[0][4] == znak_gracz_2)) wynik = 1;
	if ((T[5][1] == znak_gracz_2) && (T[4][2] == znak_gracz_2) && (T[3][3] == znak_gracz_2) && (T[2][4] == znak_gracz_2) && (T[1][5] == znak_gracz_2)) wynik = 1;

	for (int i = 0; i < 5; i++)
	{
		if ((T[0][i] == znak_gracz_2) && (T[1][i] == znak_gracz_2) && (T[2][i] == znak_gracz_2) && (T[3][i] == znak_gracz_2) && (T[4][i] == znak_gracz_2)) wynik = 2;
	}
	for (int i = 0; i < 5; i++)
	{
		if ((T[1][i] == znak_gracz_2) && (T[2][i] == znak_gracz_2) && (T[3][i] == znak_gracz_2) && (T[4][i] == znak_gracz_2) && (T[5][i] == znak_gracz_2)) wynik = 2;
	}
	for (int i = 0; i < 5; i++)
	{
		if ((T[i][0] == znak_gracz_2) && (T[i][1] == znak_gracz_2) && (T[i][2] == znak_gracz_2) && (T[i][3] == znak_gracz_2) && (T[i][4] == znak_gracz_2)) wynik = 2;
	}
	for (int i = 0; i < 5; i++)
	{
		if ((T[i][1] == znak_gracz_2) && (T[i][2] == znak_gracz_2) && (T[i][3] == znak_gracz_2) && (T[i][4] == znak_gracz_2) && (T[i][5] == znak_gracz_2)) wynik = 2;
	}

	if ((T[1][0] == znak_gracz_2) && (T[2][1] == znak_gracz_2) && (T[3][2] == znak_gracz_2) && (T[4][3] == znak_gracz_2) && (T[5][4] == znak_gracz_2)) wynik = 2;
	if ((T[0][1] == znak_gracz_2) && (T[1][2] == znak_gracz_2) && (T[2][3] == znak_gracz_2) && (T[3][4] == znak_gracz_2) && (T[4][5] == znak_gracz_2)) wynik = 2;
	if ((T[4][0] == znak_gracz_2) && (T[3][1] == znak_gracz_2) && (T[2][2] == znak_gracz_2) && (T[1][3] == znak_gracz_2) && (T[0][4] == znak_gracz_2)) wynik = 2;
	if ((T[5][1] == znak_gracz_2) && (T[4][2] == znak_gracz_2) && (T[3][3] == znak_gracz_2) && (T[2][4] == znak_gracz_2) && (T[1][5] == znak_gracz_2)) wynik = 2;


	if ((T[0][0] != spacja) && (T[0][1] != spacja) && (T[0][2] != spacja) && (T[0][3] != spacja) && (T[0][4] != spacja) && (T[0][5] != spacja) && (T[1][0] != spacja)
		&& (T[1][1] != spacja) && (T[1][2] != spacja) && (T[1][3] != spacja) && (T[1][4] != spacja) && (T[1][5] != spacja) && (T[2][0] != spacja)
		&& (T[2][1] != spacja) && (T[2][2] != spacja) && (T[2][3] != spacja) && (T[2][4] != spacja) && (T[2][5] != spacja) && (T[3][0] != spacja)
		&& (T[3][1] != spacja) && (T[3][2] != spacja) && (T[3][3] != spacja) && (T[3][4] != spacja) && (T[3][5] != spacja) && (T[4][0] != spacja)
		&& (T[4][1] != spacja) && (T[4][2] != spacja) && (T[4][3] != spacja) && (T[4][4] != spacja) && (T[4][5] != spacja) && (T[5][0] != spacja)
		&& (T[5][1] != spacja) && (T[5][2] != spacja) && (T[5][3] != spacja) && (T[5][4] != spacja) && (T[5][5] != spacja))  	wynik = 3;


	if (wynik == 1)
	{

		cout << endl << "GRACZ: " << gracz_1 << " WYGRYWA! GRATURACJE!";

		return 0;
	}

	if (wynik == 2)
	{
		cout << endl << "GRACZ" << gracz_2 << " WYGRYWA! GRATURACJE!";

		return 0;
	}
	if (wynik == 3)
	{
		cout << endl << "BRAK WOLNYCH RUCHOW - REMIS!";
		return 0;
	}


	return 1;
}

void Wpisywanie_do_tab_kolko(char T[9][9], string gracz_1, string gracz_2, char znak_gracz_1, char znak_gracz_2) { // wynkonywane ruchy w grze Kó³ko i krzy¿yk

	char spacja = 32;
	int indeks_ruchu;
	int tura = 0;
	int wynik = 0;
	string ruch;
	char spacja2 = 32;
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
		{
			T[i][j] = spacja2;

		}



	int i = 0;

	do {

		if ((tura % 2) == 0)
		{

			cout << endl << endl << endl << endl << "                   " << "Ruch gracza " << gracz_1 << ". Grasz tym znakiem: " << znak_gracz_1 << " podaj ruch: ";


			cin >> ruch;

			tablica_ruchow(ruch, indeks_ruchu);

			switch (indeks_ruchu) {

			case '1':
				if (T[0][0] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}

				if (T[0][0] == spacja) T[0][0] = znak_gracz_1;
				break;

			case '2':
				if (T[0][1] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[0][1] == spacja) T[0][1] = znak_gracz_1;
				break;
			case '3':
				if (T[0][2] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[0][2] == spacja) T[0][2] = znak_gracz_1;
				break;
			case '4':
				if (T[1][0] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[1][0] == spacja) T[1][0] = znak_gracz_1;
				break;
			case '5':
				if (T[1][1] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[1][1] == spacja) T[1][1] = znak_gracz_1;
				break;
			case '6':
				if (T[1][2] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[1][2] == spacja) T[1][2] = znak_gracz_1;
				break;
			case '7':
				if (T[2][0] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[2][0] == spacja) T[2][0] = znak_gracz_1;
				break;
			case '8':
				if (T[2][1] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[2][1] == spacja) T[2][1] = znak_gracz_1;
				break;
			case '9':
				if (T[2][2] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[2][2] == spacja) T[2][2] = znak_gracz_1;
				break;
			case '11':
				if (T[0][3] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[0][3] == spacja) T[0][3] = znak_gracz_1;
				break;

			case '12':
				if (T[0][4] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[0][4] == spacja) T[0][4] = znak_gracz_1;
				break;
			case '13':
				if (T[0][5] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[0][5] == spacja) T[0][5] = znak_gracz_1;
				break;
			case '14':
				if (T[1][3] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[1][3] == spacja) T[1][3] = znak_gracz_1;
				break;
			case '15':
				if (T[1][4] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[1][4] == spacja) T[1][4] = znak_gracz_1;
				break;
			case '16':
				if (T[1][5] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[1][5] == spacja) T[1][5] = znak_gracz_1;
				break;
			case '17':
				if (T[2][3] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[2][3] == spacja) T[2][3] = znak_gracz_1;
				break;
			case '18':
				if (T[2][4] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[2][4] == spacja) T[2][4] = znak_gracz_1;
				break;
			case '19':
				if (T[2][5] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[2][5] == spacja) T[2][5] = znak_gracz_1;
				break;
			case '21':
				if (T[3][0] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[3][0] == spacja) T[3][0] = znak_gracz_1;
				break;

			case '22':
				if (T[3][1] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[3][1] == spacja) T[3][1] = znak_gracz_1;
				break;
			case '23':
				if (T[3][2] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[3][2] == spacja) T[3][2] = znak_gracz_1;
				break;
			case '24':
				if (T[4][0] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[4][0] == spacja) T[4][0] = znak_gracz_1;
				break;
			case '25':
				if (T[4][1] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[4][1] == spacja) T[4][1] = znak_gracz_1;
				break;
			case '26':
				if (T[4][2] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[4][2] == spacja) T[4][2] = znak_gracz_1;
				break;
			case '27':
				if (T[5][0] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[5][0] == spacja) T[5][0] = znak_gracz_1;
				break;
			case '28':
				if (T[5][1] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[5][1] == spacja) T[5][1] = znak_gracz_1;
				break;
			case '29':
				if (T[5][2] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[5][2] == spacja) T[5][2] = znak_gracz_1;
				break;
			case '31':
				if (T[3][3] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[3][3] == spacja) T[3][3] = znak_gracz_1;
				break;
			case '32':
				if (T[3][4] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[3][4] == spacja) T[3][4] = znak_gracz_1;
				break;
			case '33':
				if (T[3][5] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[3][5] == spacja) T[3][5] = znak_gracz_1;
				break;
			case '34':
				if (T[4][3] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[4][3] == spacja) T[4][3] = znak_gracz_1;
				break;
			case '35':
				if (T[4][4] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[4][4] == spacja) T[4][4] = znak_gracz_1;
				break;
			case '36':
				if (T[4][5] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[4][5] == spacja) T[4][5] = znak_gracz_1;
				break;
			case '37':
				if (T[5][3] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[5][3] == spacja) T[5][3] = znak_gracz_1;
				break;
			case '38':
				if (T[5][4] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[5][4] == spacja) T[5][4] = znak_gracz_1;
				break;
			case '39':
				if (T[5][5] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[5][5] == spacja) T[5][5] = znak_gracz_1;
				break;
			case 'h':
				cout << endl << "Krotka instrukcja gry: " << endl << "Pole gry 6x6 podzielone jest na 4 mniejsze kwadraty 3x3 dlatego wykonujac ruch nalezy dokonac wyboru" << endl << "w jakiej polowce bedzie sie umieszczalo symbol" << endl
					<< "nacisniecie \"q\"- lewy gorny kwadrat, \"w\" - prawy gorny, \"a\" - lewy dolny, \"s\" - prawy dolny";
				cout << endl << endl << "Wybor konkretnego pola odbywa sie za pomoca klawiatury numerycznej - \"1\" odpowiada gornemu, \"9\"- dolny lewy itd.";

				cout << endl << endl << "Gracz nie moze umiesci zetonu w zajete juz miejsce" << endl;
				tura--;
				system("PAUSE");
				break;
			default: cout << "Bledne dane! Twoj ruch przepada";
				this_thread::sleep_for(chrono::seconds(3));
				break;
			}


		};

		if ((tura % 2) == 1)
		{

			cout << endl << endl << endl << endl << "                   " << "Ruch gracza " << gracz_2 << ". Grasz tym znakiem: " << znak_gracz_2 << " podaj ruch: ";

			cin >> ruch;

			tablica_ruchow(ruch, indeks_ruchu);

			switch (indeks_ruchu) {

			case '1':
				if (T[0][0] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[0][0] == spacja) T[0][0] = znak_gracz_2;
				break;

			case '2':
				if (T[0][1] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[0][1] == spacja) T[0][1] = znak_gracz_2;
				break;
			case '3':
				if (T[0][2] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[0][2] == spacja) T[0][2] = znak_gracz_2;
				break;
			case '4':
				if (T[1][0] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[1][0] == spacja) T[1][0] = znak_gracz_2;
				break;
			case '5':
				if (T[1][1] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[1][1] == spacja) T[1][1] = znak_gracz_2;
				break;
			case '6':
				if (T[1][2] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[1][2] == spacja) T[1][2] = znak_gracz_2;
				break;
			case '7':
				if (T[2][0] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[2][0] == spacja) T[2][0] = znak_gracz_2;
				break;
			case '8':
				if (T[2][1] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[2][1] == spacja) T[2][1] = znak_gracz_2;
				break;
			case '9':
				if (T[2][2] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[2][2] == spacja) T[2][2] = znak_gracz_2;
				break;
			case '11':
				if (T[0][3] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[0][3] == spacja) T[0][3] = znak_gracz_2;
				break;

			case '12':
				if (T[0][4] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[0][4] == spacja) T[0][4] = znak_gracz_2;
				break;
			case '13':
				if (T[0][5] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[0][5] == spacja) T[0][5] = znak_gracz_2;
				break;
			case '14':
				if (T[1][3] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[1][3] == spacja) T[1][3] = znak_gracz_2;
				break;
			case '15':
				if (T[1][4] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[1][4] == spacja) T[1][4] = znak_gracz_2;
				break;
			case '16':
				if (T[1][5] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[1][5] == spacja) T[1][5] = znak_gracz_2;
				break;
			case '17':
				if (T[2][3] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[2][3] == spacja) T[2][3] = znak_gracz_2;
				break;
			case '18':
				if (T[2][4] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[2][4] == spacja) T[2][4] = znak_gracz_2;
				break;
			case '19':
				if (T[2][5] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[2][5] == spacja) T[2][5] = znak_gracz_2;
				break;
			case '21':
				if (T[3][0] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[3][0] == spacja) T[3][0] = znak_gracz_2;
				break;

			case '22':
				if (T[3][1] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[3][1] == spacja) T[3][1] = znak_gracz_2;
				break;
			case '23':
				if (T[3][2] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[3][2] == spacja) T[3][2] = znak_gracz_2;
				break;
			case '24':
				if (T[4][0] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[4][0] == spacja) T[4][0] = znak_gracz_2;
				break;
			case '25':
				if (T[4][1] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[4][1] == spacja) T[4][1] = znak_gracz_2;
				break;
			case '26':
				if (T[4][2] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[4][2] == spacja) T[4][2] = znak_gracz_2;
				break;
			case '27':
				if (T[5][0] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[5][0] == spacja) T[5][0] = znak_gracz_2;
				break;
			case '28':
				if (T[5][1] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[5][1] == spacja) T[5][1] = znak_gracz_2;
				break;
			case '29':
				if (T[5][2] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[5][2] == spacja) T[5][2] = znak_gracz_2;
				break;
			case '31':
				if (T[3][3] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[3][3] == spacja) T[3][3] = znak_gracz_2;
				break;
			case '32':
				if (T[3][4] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[3][4] == spacja) T[3][4] = znak_gracz_2;
				break;
			case '33':
				if (T[3][5] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[3][5] == spacja) T[3][5] = znak_gracz_2;
				break;
			case '34':
				if (T[4][3] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[4][3] == spacja) T[4][3] = znak_gracz_2;
				break;
			case '35':
				if (T[4][4] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[4][4] == spacja) T[4][4] = znak_gracz_2;
				break;
			case '36':
				if (T[4][5] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[4][5] == spacja) T[4][5] = znak_gracz_2;
				break;
			case '37':
				if (T[5][3] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[5][3] == spacja) T[5][3] = znak_gracz_2;
				break;
			case '38':
				if (T[5][4] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[5][4] == spacja) T[5][4] = znak_gracz_2;
				break;
			case '39':
				if (T[5][5] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[5][5] == spacja) T[5][5] = znak_gracz_2;
				break;
			case 'h':
				cout << endl << "Krotka instrukcja gry: " << endl << "Pole gry 6x6 podzielone jest na 4 mniejsze kwadraty 3x3 dlatego wykonujac ruch nalezy dokonac wyboru" << endl << "w jakiej polowce bedzie sie umieszczalo symbol" << endl
					<< "nacisniecie \"q\"- lewy gorny kwadrat, \"w\" - prawy gorny, \"a\" - lewy dolny, \"s\" - prawy dolny";
				cout << endl << endl << "Wybor konkretnego pola odbywa sie za pomoca klawiatury numerycznej - \"1\" odpowiada gornemu, \"9\"- dolny lewy itd.";

				cout << endl << endl << "Gracz nie moze umiesci zetonu w zajete juz miejsce" << endl;
				tura--;
				system("PAUSE");

				break;
			default: {
				cout << "Bledne dane! Twoj ruch przepada";
				this_thread::sleep_for(chrono::seconds(3));
			}
				   break;

			}

		};
		system("cls");
		Rysowanie(T);
		tura++;
		i++;

	} while ((KiK_win(T, znak_gracz_1, znak_gracz_2, wynik, gracz_1, gracz_2) != 0));
}

void Kolko_i_Krzyzyk() {

	char T[9][9];
	char spacja = 32;
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
		{
			T[i][j] = spacja;
		}

	string gracz_1;
	string gracz_2;
	char znak_gracz_1;
	char znak_gracz_2;
	char x = 111;
	char o = 120;

	cout << endl << "  				  " << "Witaj w grze kokko i krzyzyk" << endl << endl;

	cout << endl << "Krotka instrukcja gry: " << endl << "Pole gry 6x6 podzielone jest na 4 mniejsze kwadraty 3x3 dlatego wykonujac ruch nalezy dokonac wyboru" << endl << "w jakiej polowce bedzie sie umieszczalo symbol" << endl
		<< "nacisniecie \"q\"- lewy gorny kwadrat, \"w\" - prawy gorny, \"a\" - lewy dolny, \"s\" - prawy dolny";
	cout << endl << endl << "Wybor konkretnego pola odbywa sie za pomoca klawiatury numerycznej - \"1\" odpowiada gornemu, \"9\"- dolny lewy itd.";

	cout << endl << endl << "Gracz nie moze umiesci zetonu w zajete juz miejsce";

	cout << endl << endl << "Aby wyswietlic instrukcje podczas rozgrywki nacisnij \"h\"" << endl;

	system("PAUSE");
	system("cls");

	cout << endl << endl << "Podaj nazwe gracza 1: ";
	cin >> gracz_1;
	cout << endl << endl << "Podaj nazwe gracza 2: ";
	cin >> gracz_2;

	char wybor;


	cout << endl << "Dostepne znaki: " << x << " " << o << endl;
	cout << gracz_1 << " wybierz znak jakim chcesz grac. Nacisnij x badz o" << endl;
	do {
		cin >> wybor;

		switch (wybor)
		{
		case 'x': {
			znak_gracz_1 = o;
			znak_gracz_2 = x;
		}
				break;

		case 'o': {
			znak_gracz_1 = x;
			znak_gracz_2 = o;
		}
				break;

		default: cout << endl << "Nieprawidlowa wartosc";

			znak_gracz_1 = 145;
			cout << endl << "Wprowadz jeszcze raz: ";
			break;
		}

	} while ((znak_gracz_1 != x) && (znak_gracz_1 != o));


	if (znak_gracz_1 == x) {
		cout << gracz_1 << " gra: " << x << ", natomiast " << gracz_2 << "gra: " << o;
	}
	if (znak_gracz_1 == o) {
		cout << gracz_1 << " gra: " << o << ", natomiast " << gracz_2 << " gra: " << x;
	}


	cout << endl << "Tak wyglada tablica:";

	Rysowanie(T);

	cout << endl << endl << "To co? ZACZYNAMY!";

	Wpisywanie_do_tab_kolko(T, gracz_1, gracz_2, znak_gracz_1, znak_gracz_2);

	cout << endl;
	system("PAUSE");
	system("cls");
	Menu_gry();
}

void obrotPlanszy(char T[9][9], string ruch_obrot) { //Funkcja obracaj¹ca plansze


	char bufor_1;
	char bufor_2;
	char stopien = 248;


	if (ruch_obrot == "qz")
	{
		bufor_1 = T[0][2];
		T[0][2] = T[0][0];
		bufor_2 = T[2][2];
		T[2][2] = bufor_1;
		bufor_1 = T[2][0];
		T[2][0] = bufor_2;
		T[0][0] = bufor_1;
		bufor_1 = T[1][2];
		T[1][2] = T[0][1];
		bufor_2 = T[2][1];
		T[2][1] = bufor_1;
		bufor_1 = T[1][0];
		T[1][0] = bufor_2;
		T[0][1] = bufor_1;
	}
	if (ruch_obrot == "qx")
	{
		bufor_1 = T[2][0];
		T[2][0] = T[0][0];
		bufor_2 = T[2][2];
		T[2][2] = bufor_1;
		bufor_1 = T[0][2];
		T[0][2] = bufor_2;
		bufor_2 = T[0][0];
		T[0][0] = bufor_1;
		bufor_1 = T[1][0];
		T[1][0] = T[0][1];
		bufor_2 = T[2][1];
		T[2][1] = bufor_1;
		bufor_1 = T[1][2];
		T[1][2] = bufor_2;
		T[0][1] = bufor_1;
	}
	if (ruch_obrot == "wz")
	{
		bufor_1 = T[0][5];
		T[0][5] = T[0][3];
		bufor_2 = T[2][5];
		T[2][5] = bufor_1;
		bufor_1 = T[2][3];
		T[2][3] = bufor_2;
		T[0][3] = bufor_1;
		bufor_1 = T[1][5];
		T[1][5] = T[0][4];
		bufor_2 = T[2][4];
		T[2][4] = bufor_1;
		bufor_1 = T[1][3];
		T[1][3] = bufor_2;
		T[0][4] = bufor_1;
	}
	if (ruch_obrot == "wx")
	{
		bufor_1 = T[2][3];
		T[2][3] = T[0][3];
		bufor_2 = T[2][5];
		T[2][5] = bufor_1;
		bufor_1 = T[0][5];
		T[0][5] = bufor_2;
		bufor_2 = T[0][3];
		T[0][3] = bufor_1;
		bufor_1 = T[1][3];
		T[1][3] = T[0][4];
		bufor_2 = T[2][4];
		T[2][4] = bufor_1;
		bufor_1 = T[1][5];
		T[1][5] = bufor_2;
		T[0][4] = bufor_1;
	}
	if (ruch_obrot == "az")
	{
		bufor_1 = T[3][2];
		T[3][2] = T[3][0];
		bufor_2 = T[5][2];
		T[5][2] = bufor_1;
		bufor_1 = T[5][0];
		T[5][0] = bufor_2;
		T[3][0] = bufor_1;
		bufor_1 = T[4][2];
		T[4][2] = T[3][1];
		bufor_2 = T[5][1];
		T[5][1] = bufor_1;
		bufor_1 = T[4][0];
		T[4][0] = bufor_2;
		T[3][1] = bufor_1;
	}
	if (ruch_obrot == "ax")
	{
		bufor_1 = T[5][0];
		T[5][0] = T[3][0];
		bufor_2 = T[5][2];
		T[5][2] = bufor_1;
		bufor_1 = T[3][2];
		T[3][2] = bufor_2;
		bufor_2 = T[3][0];
		T[3][0] = bufor_1;
		bufor_1 = T[4][0];
		T[4][0] = T[3][1];
		bufor_2 = T[5][1];
		T[5][1] = bufor_1;
		bufor_1 = T[4][2];
		T[4][2] = bufor_2;
		T[3][1] = bufor_1;
	}
	if (ruch_obrot == "sz")
	{
		bufor_1 = T[3][5];
		T[3][5] = T[3][3];
		bufor_2 = T[5][5];
		T[5][5] = bufor_1;
		bufor_1 = T[5][3];
		T[5][3] = bufor_2;
		T[3][3] = bufor_1;
		bufor_1 = T[4][5];
		T[4][5] = T[3][4];
		bufor_2 = T[5][4];
		T[5][4] = bufor_1;
		bufor_1 = T[4][3];
		T[4][3] = bufor_2;
		T[3][4] = bufor_1;
	}
	if (ruch_obrot == "sx")
	{
		bufor_1 = T[5][3];
		T[5][3] = T[3][3];
		bufor_2 = T[5][5];
		T[5][5] = bufor_1;
		bufor_1 = T[3][5];
		T[3][5] = bufor_2;
		bufor_2 = T[3][3];
		T[3][3] = bufor_1;
		bufor_1 = T[4][3];
		T[4][3] = T[3][4];
		bufor_2 = T[5][4];
		T[5][4] = bufor_1;
		bufor_1 = T[4][5];
		T[4][5] = bufor_2;
		T[3][4] = bufor_1;
	}
	if (ruch_obrot == "h")
	{
		cout << endl << "Krotka instrukcja gry: " << endl << "Pole gry 6x6 podzielone jest na 4 mniejsze kwadraty 3x3 dlatego wykonujac ruch nalezy dokonac wyboru" << endl << "w jakiej polowce bêdzie siê umieszczalo symbol" << endl
			<< "nacisniecie \"q\"- lewy gorny kwadrat, \"w\" - prawy gorny, \"a\" - lewy dolny, \"s\" - prawy dolny";
		cout << endl << endl << "Wybor konkretnego pola odbywa sie za pomoca klawiatury numerycznej - \"1\" odpowiada prawemu gorenmu, \"9\"- lewy dolny itd.";

		cout << endl << endl << "Obrot wybranej czesci planszy od 90" << stopien << " zgodnie z ruchem wskazówek zegara odbwya siê porzez wybranie \"z\""
			<< endl << "natomiast przeciwnie poprzez wybranie \"x\"";

		cout << endl << endl << "Gracz nie moze umiesci zetonu w zajete juz miejsce" << endl;

		system("PAUSE");

		cout << endl << "Teraz podaj ktora i jak ma byc obrocona plansza: ";




	}

	else cout << "Bledne dane podaj jeszcze raz: ";





}

void zamiana_zetonow_gracz1(char T[9][9], char& znak_gracz_1, char& znak_gracz_2) {

	char x = 120;
	char o = 111;
	char stop = 33;
	char s = 3; // znak serce
	char p = 6;  // znak pik
	char nowy_znak;
	char bufor_znaku;

	cout << "Wybor nowego znaku, pamietaj ze znaki u obu grczy nie moga byc takie same";
	cout << endl << "Dostepne znaki: " << x << " " << o << " " << s << " " << p << endl;
	cout << " wybierz znak jakim chcesz grac. Nacisnij odpowiednio x , o , s lub p" << endl << "Wprowadz swoj wybor:";

	bufor_znaku = znak_gracz_1;


	do {
		cin >> nowy_znak;

		switch (nowy_znak)
		{
		case 'x':
			znak_gracz_1 = x;
			break;

		case 'o':
			znak_gracz_1 = o;
			break;
		case 's':
			znak_gracz_1 = s;
			break;
		case 'p':
			znak_gracz_1 = p;
			break;
		default:
			znak_gracz_1 = stop;
			cout << endl << "Nieprawidlowa wartosc";
			cout << endl << "Wprowadz jeszcze raz: ";
			break;
		}

		if (znak_gracz_1 == znak_gracz_2) cout << "Ach te zasady, znaki nie moga byc takie same!, Wprowadz jeszcze raz: ";

	} while ((znak_gracz_1 == znak_gracz_2) && (znak_gracz_1 != stop));



	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 6; j++) {
			if (T[i][j] == bufor_znaku) T[i][j] = znak_gracz_1;
		}

}

void przykladowaPlansza(char T[9][9], char znak_gracz_1, char znak_gracz_2) {

	char spacja = 32;



	T[0][0] = spacja;
	T[0][2] = spacja;
	T[0][3] = spacja;
	T[0][5] = spacja;
	T[1][5] = spacja;
	T[2][0] = spacja;
	T[2][2] = spacja;
	T[2][3] = spacja;
	T[2][4] = spacja;
	T[2][5] = spacja;
	T[3][2] = spacja;
	T[3][3] = spacja;
	T[3][4] = spacja;
	T[3][5] = spacja;
	T[4][1] = spacja;
	T[4][3] = spacja;
	T[4][5] = spacja;
	T[5][0] = spacja;
	T[5][2] = spacja;
	T[0][3] = spacja;
	T[0][1] = znak_gracz_1;
	T[0][4] = znak_gracz_2;
	T[1][0] = znak_gracz_2;
	T[1][1] = znak_gracz_2;
	T[1][2] = znak_gracz_1;
	T[1][3] = znak_gracz_2;
	T[1][4] = znak_gracz_1;
	T[2][1] = znak_gracz_1;
	T[3][0] = znak_gracz_2;
	T[3][1] = znak_gracz_2;
	T[4][0] = znak_gracz_1;
	T[4][2] = znak_gracz_2;
	T[4][4] = znak_gracz_1;
	T[5][1] = znak_gracz_1;
	T[5][4] = znak_gracz_1;
	T[5][5] = znak_gracz_1;

}

void zamiana_zetonow_gracz2(char T[9][9], char& znak_gracz_1, char& znak_gracz_2) {

	char x = 120;
	char o = 111;
	char stop = 33;
	char p = 6;  // znak pik
	char s = 3; // znak serce
	char nowy_znak;
	char bufor_znaku;

	cout << "Wybor nowego znaku, pamietaj ze znaki u obu grczy nie moga byc takie same";
	cout << endl << "Dostepne znaki: " << x << " " << o << " " << s << " " << p << endl;
	cout << " wybierz znak jakim chcesz grac. Nacisnij odpowiednio x , o , s lub p" << endl << "Wprowadz swoj wybor:";

	bufor_znaku = znak_gracz_2;


	do {
		cin >> nowy_znak;

		switch (nowy_znak)
		{
		case 'x':
			znak_gracz_2 = x;
			break;

		case 'o':
			znak_gracz_2 = o;
			break;
		case 's':
			znak_gracz_2 = s;
			break;
		case 'p':
			znak_gracz_2 = p;
			break;
		default:
			znak_gracz_2 = stop;
			cout << endl << "Nieprawidlowa wartosc";
			cout << endl << "Wprowadz jeszcze raz: ";
			break;
		}

		if (znak_gracz_2 == znak_gracz_1) cout << "Ach te zasady, znaki nie moga byc takie same!, Wprowadz jeszcze raz: ";

	} while ((znak_gracz_2 == znak_gracz_1) && (znak_gracz_2 != stop));


	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 6; j++) {
			if (T[i][j] == bufor_znaku) T[i][j] = znak_gracz_2;
		}


}

void Wpisywanie_do_tab_pentago(char T[9][9], string gracz_1, string gracz_2, char znak_gracz_1, char znak_gracz_2) {
	char spacja = 32;
	int indeks_ruchu;
	int tura = 0;
	int wynik = 0;
	clock_t start, stop;
	long double czas_gracz_1 = 0;
	long double czas_gracz_2 = 0;
	string ruch;
	char spacja2 = 32;
	string ruch_obrot;
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
		{
			T[i][j] = spacja2;

		}



	int i = 0;

	do {

		if ((tura % 2) == 0)
		{
			cout << endl << endl << endl << endl << "                   " << "Pozostaly czas na ruchy dla: " << gracz_1 << "to: " << (120 - czas_gracz_1) << " sekund";
			cout << endl << "                   " << "Ruch gracza " << gracz_1 << ". Grasz: " << znak_gracz_1;
			cout << endl << "                  " << " Podaj ruch: ";

			start = clock();
			cin >> ruch;
			stop = clock();
			czas_gracz_1 += (stop - start) / CLOCKS_PER_SEC;


			tablica_ruchow(ruch, indeks_ruchu);

			switch (indeks_ruchu) {

			case '1':
				if (T[0][0] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}

				if (T[0][0] == spacja) {
					T[0][0] = znak_gracz_1;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;

			case '2':
				if (T[0][1] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[0][1] == spacja) {
					T[0][1] = znak_gracz_1;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;



			case '3':
				if (T[0][2] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[0][2] == spacja) {
					T[0][2] = znak_gracz_1;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '4':
				if (T[1][0] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[1][0] == spacja) {
					T[1][0] = znak_gracz_1;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '5':
				if (T[1][1] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[1][1] == spacja) {
					T[1][1] = znak_gracz_1;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '6':
				if (T[1][2] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[1][2] == spacja) {
					T[1][2] = znak_gracz_1;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '7':
				if (T[2][0] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[2][0] == spacja) {
					T[2][0] = znak_gracz_1;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '8':
				if (T[2][1] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[2][1] == spacja) {
					T[2][1] = znak_gracz_1;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '9':
				if (T[2][2] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[2][2] == spacja) {
					T[2][2] = znak_gracz_1;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '11':
				if (T[0][3] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[0][3] == spacja) {
					T[0][3] = znak_gracz_1;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;

			case '12':
				if (T[0][4] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[0][4] == spacja) {
					T[0][4] = znak_gracz_1;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '13':
				if (T[0][5] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[0][5] == spacja) {
					T[0][5] = znak_gracz_1;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '14':
				if (T[1][3] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[1][3] == spacja) {
					T[1][3] = znak_gracz_1;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '15':
				if (T[1][4] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[1][4] == spacja) {
					T[1][4] = znak_gracz_1;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '16':
				if (T[1][5] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[1][5] == spacja) {
					T[1][5] = znak_gracz_1;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '17':
				if (T[2][3] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[2][3] == spacja) {
					T[2][3] = znak_gracz_1; system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '18':
				if (T[2][4] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[2][4] == spacja) {
					T[2][4] = znak_gracz_1;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '19':
				if (T[2][5] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[2][5] == spacja) {
					T[2][5] = znak_gracz_1;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '21':
				if (T[3][0] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[3][0] == spacja) {
					T[3][0] = znak_gracz_1;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;

			case '22':
				if (T[3][1] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[3][1] == spacja) {
					T[3][1] = znak_gracz_1;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '23':
				if (T[3][2] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[3][2] == spacja) {
					T[3][2] = znak_gracz_1;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '24':
				if (T[4][0] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[4][0] == spacja) {
					T[4][0] = znak_gracz_1;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '25':
				if (T[4][1] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[4][1] == spacja) {
					T[4][1] = znak_gracz_1;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '26':
				if (T[4][2] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[4][2] == spacja) {
					T[4][2] = znak_gracz_1;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '27':
				if (T[5][0] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[5][0] == spacja) {
					T[5][0] = znak_gracz_1; system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '28':
				if (T[5][1] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[5][1] == spacja) {
					T[5][1] = znak_gracz_1;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '29':
				if (T[5][2] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[5][2] == spacja) {
					T[5][2] = znak_gracz_1;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '31':
				if (T[3][3] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[3][3] == spacja) {
					T[3][3] = znak_gracz_1;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '32':
				if (T[3][4] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[3][4] == spacja) {
					T[3][4] = znak_gracz_1;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '33':
				if (T[3][5] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[3][5] == spacja) {
					T[3][5] = znak_gracz_1;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '34':
				if (T[4][3] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[4][3] == spacja) {
					T[4][3] = znak_gracz_1;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '35':
				if (T[4][4] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[4][4] == spacja) {
					T[4][4] = znak_gracz_1;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '36':
				if (T[4][5] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[4][5] == spacja) {
					T[4][5] = znak_gracz_1;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '37':
				if (T[5][3] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[5][3] == spacja) {
					T[5][3] = znak_gracz_1;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '38':
				if (T[5][4] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}


				if (T[5][4] == spacja) {
					T[5][4] = znak_gracz_1;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '39':
				if (T[5][5] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[5][5] == spacja) {
					T[5][5] = znak_gracz_1;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case 'h':
				cout << endl << "Krotka instrukcja gry: " << endl << "Pole gry 6x6 podzielone jest na 4 mniejsze kwadraty 3x3 dlatego wykonujac ruch nalezy dokonac wyboru" << endl << "w jakiej polowce bedzie sie umieszczalo symbol" << endl
					<< "nacisniecie \"q\"- lewy gorny kwadrat, \"w\" - prawy gorny, \"a\" - lewy dolny, \"s\" - prawy dolny";
				cout << endl << endl << "Wybor konkretnego pola odbywa sie za pomoca klawiatury numerycznej - \"1\" odpowiada gornemu, \"9\"- dolny lewy itd.";

				cout << endl << endl << "Gracz ma na wszystkie swoje ruchy 2min";

				cout << endl << endl << "Gracz nie moze umiesci zetonu w zajete juz miejsce" << endl;

				cout << endl << endl << "Aby wczytac predefiniowana planesze nalezy nacisnac \"o\"" << endl;
				tura--;
				system("PAUSE");
				break;
			case 'c':
				zamiana_zetonow_gracz1(T, znak_gracz_1, znak_gracz_2);
				break;
			case 'p':
				stop = clock();
				system("cls");
				tura--;
				system("PAUSE");
				break;
			case 'm':
				Menu_gry();
				break;
			case 'o':
				przykladowaPlansza(T, znak_gracz_1, znak_gracz_2);
				break;
			default: {
				cout << "Bledne dane! Twoj ruch przepada";
				this_thread::sleep_for(chrono::seconds(3));
			}
				   break;

			}

		};

		system("cls");
		Rysowanie(T);

		i++;

		if ((tura % 2) == 1)
		{
			cout << endl << endl << endl << endl << "                   " << "Pozostaly czas na ruchy dla: " << gracz_2 << "to: " << (120 - czas_gracz_2) << " sekund";
			cout << endl << "                   " << "Ruch gracza " << gracz_2 << ". Grasz: " << znak_gracz_2;
			cout << endl << "                  " << " Podaj ruch: ";

			start = clock();
			cin >> ruch;
			stop = clock();

			czas_gracz_2 += (stop - start) / CLOCKS_PER_SEC;

			tablica_ruchow(ruch, indeks_ruchu);

			switch (indeks_ruchu) {

			case '1':
				if (T[0][0] != spacja)
				{
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[0][0] == spacja) {
					T[0][0] = znak_gracz_2;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;

			case '2':
				if (T[0][1] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[0][1] == spacja) {
					T[0][1] = znak_gracz_2;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '3':
				if (T[0][2] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[0][2] == spacja) {
					T[0][2] = znak_gracz_2;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '4':
				if (T[1][0] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[1][0] == spacja) {
					T[1][0] = znak_gracz_2;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '5':
				if (T[1][1] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[1][1] == spacja) {
					T[1][1] = znak_gracz_2;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '6':
				if (T[1][2] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[1][2] == spacja) {
					T[1][2] = znak_gracz_2;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '7':
				if (T[2][0] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[2][0] == spacja) {
					T[2][0] = znak_gracz_2;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '8':
				if (T[2][1] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[2][1] == spacja) {
					T[2][1] = znak_gracz_2;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '9':
				if (T[2][2] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[2][2] == spacja) {
					T[2][2] = znak_gracz_2;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '11':
				if (T[0][3] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[0][3] == spacja) {
					T[0][3] = znak_gracz_2;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;

			case '12':
				if (T[0][4] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[0][4] == spacja) {
					T[0][4] = znak_gracz_2;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '13':
				if (T[0][5] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[0][5] == spacja) {
					T[0][5] = znak_gracz_2;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '14':
				if (T[1][3] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[1][3] == spacja) {
					T[1][3] = znak_gracz_2;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '15':
				if (T[1][4] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[1][4] == spacja) {
					T[1][4] = znak_gracz_2;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '16':
				if (T[1][5] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[1][5] == spacja) {
					T[1][5] = znak_gracz_2;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '17':
				if (T[2][3] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[2][3] == spacja) {
					T[2][3] = znak_gracz_2;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '18':
				if (T[2][4] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[2][4] == spacja) {
					T[2][4] = znak_gracz_2;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '19':
				if (T[2][5] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[2][5] == spacja) {
					T[2][5] = znak_gracz_2;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '21':
				if (T[3][0] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[3][0] == spacja) {
					T[3][0] = znak_gracz_2;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;

			case '22':
				if (T[3][1] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[3][1] == spacja) {
					T[3][1] = znak_gracz_2;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '23':
				if (T[3][2] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[3][2] == spacja) {
					T[3][2] = znak_gracz_2;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '24':
				if (T[4][0] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[4][0] == spacja) {
					T[4][0] = znak_gracz_2;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '25':
				if (T[4][1] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[4][1] == spacja) {
					T[4][1] = znak_gracz_2;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '26':
				if (T[4][2] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[4][2] == spacja) {
					T[4][2] = znak_gracz_2;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '27':
				if (T[5][0] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[5][0] == spacja) {
					T[5][0] = znak_gracz_2;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '28':
				if (T[5][1] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[5][1] == spacja) {
					T[5][1] = znak_gracz_2;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '29':
				if (T[5][2] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[5][2] == spacja) {
					T[5][2] = znak_gracz_2;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '31':
				if (T[3][3] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[3][3] == spacja) {
					T[3][3] = znak_gracz_2;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '32':
				if (T[3][4] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[3][4] == spacja) {
					T[3][4] = znak_gracz_2;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '33':
				if (T[3][5] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[3][5] == spacja) {
					T[3][5] = znak_gracz_2;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '34':
				if (T[4][3] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[4][3] == spacja) {
					T[4][3] = znak_gracz_2;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '35':
				if (T[4][4] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[4][4] == spacja) {
					T[4][4] = znak_gracz_2;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '36':
				if (T[4][5] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[4][5] == spacja) {
					T[4][5] = znak_gracz_2;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '37':
				if (T[5][3] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[5][3] == spacja) {
					T[5][3] = znak_gracz_2;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '38':
				if (T[5][4] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[5][4] == spacja) {
					T[5][4] = znak_gracz_2;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case '39':
				if (T[5][5] != spacja) {
					cout << "Pole zajete! Tracisz ture";
					this_thread::sleep_for(chrono::seconds(3));
				}
				if (T[5][5] == spacja) {
					T[5][5] = znak_gracz_2;
					system("cls");
					Rysowanie(T);
					cout << endl << endl << endl << "                   " << "Teraz podaj, ktora plansz i jak ma sie oborcic: ";
					do {
						cin >> ruch_obrot;
						obrotPlanszy(T, ruch_obrot);
					} while ((ruch_obrot != "qz") && (ruch_obrot != "qx") && (ruch_obrot != "wz") && (ruch_obrot != "wx") &&
						(ruch_obrot != "ax") && (ruch_obrot != "az") && (ruch_obrot != "sz") && (ruch_obrot != "sx"));
				}
				break;
			case 'h':
				cout << endl << "Krotka instrukcja gry: " << endl << "Pole gry 6x6 podzielone jest na 4 mniejsze kwadraty 3x3 dlatego wykonujac ruch nalezy dokonac wyboru" << endl << "w jakiej polowce bedzie sie umieszczalo symbol" << endl
					<< "nacisniecie \"q\"- lewy gorny kwadrat, \"w\" - prawy gorny, \"a\" - lewy dolny, \"s\" - prawy dolny";
				cout << endl << endl << "Wybor konkretnego pola odbywa sie za pomoca klawiatury numerycznej - \"1\" odpowiada gornemu, \"9\"- dolny lewy itd.";

				cout << endl << endl << "Gracz ma na wszystkie swoje ruchy 2min";

				cout << endl << endl << "Gracz nie moze umiesci zetonu w zajete juz miejsce" << endl;

				cout << endl << endl << "Aby wczytac predefiniowana planesze nalezy nacisnac \"o\"" << endl;
				tura--;
				system("PAUSE");
				break;
			case 'c':
				zamiana_zetonow_gracz2(T, znak_gracz_1, znak_gracz_2);
				break;
			case 'p':
				stop = clock();
				system("cls");
				tura--;
				system("PAUSE");
				break;
			case 'm':
				Menu_gry();
				break;
			case 'o':

				przykladowaPlansza(T, znak_gracz_1, znak_gracz_2);
				tura++;
				break;
			default: {
				cout << "Bledne dane! Twoj ruch przepada";
				this_thread::sleep_for(chrono::seconds(3));
			}
				   break;

			}

		};

		system("cls");
		Rysowanie(T);
		i++;
		tura++;

	} while (((Pentago_win(T, znak_gracz_1, znak_gracz_2, wynik, gracz_1, gracz_2)) != 0) && ((czas_gracz_1 < 120) && (czas_gracz_2 < 120)));





	if (czas_gracz_1 > 120) cout << endl << gracz_1 << " PRZEGRYWA PRZEZ PRZEKROCZENIE LIMITU CZASU!";
	if (czas_gracz_2 > 120) cout << endl << gracz_2 << " PRZEGRYWA PRZEZ PRZEKROCZENIE LIMITU CZASU!";

	cout << endl;

	system("PAUSE");

	system("cls");


	Menu_gry();


}

void Pentago() {

	char T[9][9];
	char spacja = 32;
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
		{
			T[i][j] = spacja;
		}

	string gracz_1;
	string gracz_2;
	char znak_gracz_1;
	char znak_gracz_2;
	const char stopien = 248; // znak stopnia
	const char x = 120;
	char o = 111;
	char stop = 33;
	char s = 3; // znak serce
	char p = 6;  // znak pik

	system("cls");

	cout << endl << "					" << "Witaj w grze Pentago!" << endl << endl;

	cout << endl << "Krotka instrukcja gry: " << endl << endl << "Pole gry 6x6 podzielone jest na 4 mniejsze kwadraty 3x3 dlatego wykonujac ruch nalezy dokonac wyboru" << endl << "w jakiej polowce bedzie sie umieszczalo symbol" << endl
		<< "nacisniecie \"q\"- lewy gorny kwadrat, \"w\" - prawy gorny, \"a\" - lewy dolny, \"s\" - prawy dolny";
	cout << endl << endl << "Wybor konkretnego pola odbywa sie za pomoca klawiatury numerycznej - \"1\" odpowiada prawemu gorenmu, \"9\"- lewy dolny itd.";

	cout << endl << endl << "Obrot wybranej czesci planszy od 90" << stopien << " zgodnie z ruchem wskazowek zegara odbwya sie porzez wybranie \"z\""
		<< endl << "natomiast przeciwnie poprzez wybranie \"x\"";

	cout << endl << endl << "Gracz ma na wszystkie swoje ruchy 2min";

	cout << endl << endl << "Gracz nie mo¿e umiesci zetonu w zajete juz miejsce";

	cout << endl << endl << "Gracze w trakcjie rozgrywki moga wymienic zeton na dowlony inny poza tym, ktory ma aktualnie przeciwnik" <<
		" dokonuje sie poprzez nacisniecie \"c\"";


	cout << endl << endl << "Aby wyswietlic przygotowana wczesniej tablice nacisnij \"o\"" << endl;

	cout << endl << endl << "Aby wyswietlic instrukcje podczas rozgrywki nacisnij \"h\"" << endl;



	system("PAUSE");
	system("cls");

	cout << endl << endl << "Podaj nazwe gracza 1: ";
	cin >> gracz_1;
	cout << endl << endl << "Podaj nazwe gracza 2: ";
	cin >> gracz_2;

	char wybor;


	cout << endl << "Dostepne znaki: " << x << " " << o << " " << s << " " << p << endl;
	cout << gracz_1 << " wybierz znak jakim chcesz grac. Nacisnij odpowiednio x , o , s lub p i zatwiedz enterem" << endl;
	do {
		cin >> wybor;

		switch (wybor)
		{
		case 'x':
			znak_gracz_1 = x;
			break;

		case 'o':
			znak_gracz_1 = o;
			break;
		case 's':
			znak_gracz_1 = s;
			break;
		case 'p':
			znak_gracz_1 = p;
			break;
		default:
			znak_gracz_1 = stop;
			cout << endl << "Nieprawidlowa wartosc";
			cout << endl << "Wprowadz jeszcze raz: ";
			break;
		}

	} while ((znak_gracz_1 != x) && (znak_gracz_1 != o) && (znak_gracz_1 != s) && (znak_gracz_1 != p));




	cout << endl << "Teraz " << gracz_2 << " pamietaj, ze znaki nie moga byc takie same ";

	do {
		cin >> wybor;

		switch (wybor)
		{
		case 'x':
			znak_gracz_2 = x;
			break;

		case 'o':
			znak_gracz_2 = o;
			break;
		case 's':
			znak_gracz_2 = s;
			break;
		case 'p':
			znak_gracz_2 = p;
			break;
		default:
			znak_gracz_2 = stop;
			cout << endl << "Nieprawidlowa wartosc";
			cout << endl << "Wprowadz jeszcze raz: ";
			break;
		}

		if (znak_gracz_2 == znak_gracz_1) cout << "Ach te zasady, znaki nie moga byc takie same!, Wprowadz jeszcze raz: ";


	} while ((znak_gracz_2 == znak_gracz_1) || (znak_gracz_2 == stop));


	system("cls");

	cout << endl << "Tak wyglada tablica:";

	Rysowanie(T);

	cout << endl << endl << "To co? ZACZYNAMY!";

	Wpisywanie_do_tab_pentago(T, gracz_1, gracz_2, znak_gracz_1, znak_gracz_2);


};

void Menu_gry() {

	int wybor_gry;

	cout << "GRA KOLKO I KRZYZYK / PENTGO " << endl << "Wybierz w co chcesz zagrac: "
		<< endl << "1. Kolko i krzyzyk na tablicy 6x6" << endl << "2. Pentago" << endl << "0. Wyjscie z programu";


	do {
		cout << endl;
		cin >> wybor_gry;

		switch (wybor_gry)
		{
		case 1: Kolko_i_Krzyzyk();
			break;
		case 2: Pentago();
			break;
		case 0: break;
		default:
			wybor_gry = 3;
			cout << "Bledne dane podaj jeszcze raz: ";
			break;
		}
	} while (wybor_gry != 0);


};

int main() {

	Menu_gry();


	return 0;
}