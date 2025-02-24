#include <iostream>
#include <cmath>
#include <iomanip>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void graphics();
void fyellow(int &, int &, int &, int &, int);
void fgreen(int &, int &, int &, int &, int);
void fred(int &, int &, int &, int &, int);
void fblue(int &, int &, int &, int &, int);

char blue[12][12], red[12][12], yellow[12][12], green[12][12];
char path[72], gotiblue[4] = {'a', 'b', 'c', 'd'}, gotired[4] = {'e', 'f', 'g', 'h'}, gotiyellow[4] = {'i', 'j', 'k', 'l'}, gotigreen[4] = {'m', 'n', 'o', 'p'}, a, b, c;
int countblue, countred, countgreen, countyellow, winblue, winred, wingreen, winyellow, winner, x, z, d, e, f, g, i, j, k, l, m, n, o, p, q, r, s, t, h;
string winner1, winner2, winner3, winner4;
int main()
{
	for (i = 0; i < 72; i++)
		path[i] = ' ';
	for (i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			blue[i][j] = ' ';
			red[i][j] = ' ';
			yellow[i][j] = ' ';
			green[i][j] = ' ';
		}
	}
	i = 0, j = 0, k = 0, l = 0, d = 13, e = 13, f = 13, g = 13, m = 26, n = 26, o = 26, p = 26, q = 39, r = 39, s = 39, t = 39;
	countblue = 0, countred = 0, countgreen = 0, countyellow = 0, winblue = 0, winred = 0, wingreen = 0, winyellow = 0, winner = 0;
	blue[5][5] = gotiblue[0], blue[5][6] = gotiblue[1], blue[6][5] = gotiblue[2], blue[6][6] = gotiblue[3];
	red[5][5] = gotired[0], red[5][6] = gotired[1], red[6][5] = gotired[2], red[6][6] = gotired[3];
	green[5][5] = gotigreen[0], green[5][6] = gotigreen[1], green[6][5] = gotigreen[2], green[6][6] = gotigreen[3];
	yellow[5][5] = gotiyellow[0], yellow[5][6] = gotiyellow[1], yellow[6][5] = gotiyellow[2], yellow[6][6] = gotiyellow[3];
	graphics();
	cout << "\n \nDo you want to start the game ('y' for yes and 'n' for no): ";
	cin >> a;
	if (a == 'y')
	{
	pp:
		cout << "Enter number of players(2-4): ";
		cin >> h;
		if (h == 2 || h == 3 || h == 4)
			fblue(i, j, k, l, h);
		else
			cout << "Invalid. ";
		goto pp;
	}
	if (a == 'n')
		cout << "GOODBYE!!!";

	return 0;
}
void graphics()
{
	for (int i = 0; i < 12; i++)
		for (int j = 0; j < 26; j++)
		{
			if (j < 12)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | BACKGROUND_BLUE);
				cout << blue[i][j];
			}
			if (j == 12)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
				if (i == 0)
				{
					cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187);
				}
				else if (i == 1)
				{
					cout << char(186);
					cout << path[10];
					cout << char(179);
					cout << path[11];
					cout << char(179);
					cout << path[12];
					cout << char(186);
				}
				else if (i % 2 == 0)
				{
					cout << char(186) << char(196) << char(179) << char(196) << char(179) << char(196) << char(186);
				}
				else if (i == 3)
				{
					cout << char(186) << path[9] << char(179);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | BACKGROUND_RED);
					cout << path[57];
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
					cout << char(179);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | BACKGROUND_RED);
					cout << path[13];
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
					cout << char(186);
				}
				else if (i == 5)
				{
					cout << char(186);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | BACKGROUND_RED);
					cout << path[8];
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
					cout << char(179);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | BACKGROUND_RED);
					cout << path[58];
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
					cout << char(179) << path[14] << char(186);
				}
				else if (i == 7)
				{
					cout << char(186) << path[7] << char(179);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | BACKGROUND_RED);
					cout << path[59];
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
					cout << char(179) << path[15] << char(186);
				}
				else if (i == 9)
				{
					cout << char(186) << path[6] << char(179);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | BACKGROUND_RED);
					cout << path[60];
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
					cout << char(179) << path[16] << char(186);
				}
				else if (i == 11)
				{
					cout << char(186) << path[5] << char(179);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | BACKGROUND_RED);
					cout << path[61];
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
					cout << char(179) << path[17] << char(186);
				}
			}
			if (j < 25 && j > 12)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | BACKGROUND_RED);
				cout << red[i][j - 13];
			}
			if (j == 25)
			{
				cout << endl;
			}
		}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
	cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << char(218) << char(196) << char(196) << char(196) << char(191) << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
	cout << char(186) << path[51] << char(179);
	for (int i = 0; i < 5; i++)
	{
		if (i == 0)
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | BACKGROUND_BLUE);
		cout << path[i];
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
		if (i < 4)
			cout << char(179);
	}
	cout << " " << char(179) << "   " << char(179) << " ";
	for (int i = 18; i < 24; i++)
	{
		if (i == 21)
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | BACKGROUND_RED | BACKGROUND_GREEN);
		cout << path[i];
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
		if (i < 23)
			cout << char(179);
		if (i == 23)
			cout << char(186);
	}
	cout << endl;
	cout << char(186) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(179) << "   " << char(179) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(186) << endl;
	cout << char(186) << path[50] << char(179);
	for (int i = 52; i < 57; i++)
	{
		if (i > 51)
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | BACKGROUND_BLUE);
		cout << path[i];
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
		if (i < 56)
			cout << char(179);
	}
	cout << " " << char(179) << " " << char(178) << " " << char(179) << " ";
	for (int i = 66; i > 61; i--)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | BACKGROUND_RED | BACKGROUND_GREEN);
		cout << path[i];
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
		if (i > 61)
			cout << char(179);
	}
	cout << path[24] << char(186);
	cout << endl;
	cout << char(186) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(179) << "   " << char(179) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(186) << endl;
	for (int i = 49; i > 43; i--)
	{
		if (i == 49)
			cout << char(186);
		if (i == 47)
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | BACKGROUND_BLUE);
		cout << path[i];
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
		if (i > 44)
			cout << char(179);
	}
	cout << " " << char(179) << "   " << char(179) << " ";
	for (int i = 30; i > 24; i--)
	{
		if (i == 26)
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | BACKGROUND_RED | BACKGROUND_GREEN);
		cout << path[i];
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
		if (i > 25)
			cout << char(179);
		if (i == 25)
			cout << char(186);
	}
	cout << endl;
	cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << char(192) << char(196) << char(196) << char(196) << char(217) << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
	for (int i = 0; i < 12; i++)
		for (int j = 0; j < 26; j++)
		{
			if (j < 12)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | BACKGROUND_GREEN);
				cout << green[i][j];
			}
			if (j == 12)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
				if (i == 0)
				{
					cout << char(186) << path[43] << char(179);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | BACKGROUND_GREEN);
					cout << path[71];
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
					cout << char(179) << path[31] << char(186);
				}
				else if (i % 2 != 0 && i !=11)
				{
					cout << char(186) << char(196) << char(179) << char(196) << char(179) << char(196) << char(186);
				}
				else if (i == 2)
				{
					cout << char(186) << path[42] << char(179);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | BACKGROUND_GREEN);
					cout << path[70];
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
					cout << char(179) << path[32] << char(186);
				}
				else if (i == 4)
				{
					cout << char(186) << path[41] << char(179);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | BACKGROUND_GREEN);
					cout << path[69];
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
					cout << char(179) << path[33] << char(186);
				}
				else if (i == 6)
				{
					cout << char(186) << path[40] << char(179);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | BACKGROUND_GREEN);
					cout << path[68];
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
					cout << char(179);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | BACKGROUND_GREEN);
					cout << path[34];
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
					cout << char(186);
				}
				else if (i == 8)
				{
					cout << char(186);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | BACKGROUND_GREEN);
					cout << path[39];
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
					cout << char(179);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | BACKGROUND_GREEN);
					cout << path[67];
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
					cout << char(179) << path[35] << char(186);
				}
				else if (i == 10)
				{
					cout << char(186);
					cout << path[38];
					cout << char(179);
					cout << path[37];
					cout << char(179);
					cout << path[36];
					cout << char(186);
				}
				else if(i==11){
					cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);
				}
			}
			if (j < 25 && j > 12)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | BACKGROUND_RED | BACKGROUND_GREEN);
				cout << yellow[i][j - 13];
			}
			if (j == 25)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
				cout << endl;
			}
		}
}
void fgreen(int &q, int &r, int &s, int &t, int h)
{
	if (wingreen != 4)
	{
		cout << "It's the green turn.";
		srand(time(0));
		cout << "\nRoll dice by pressing any alphabet: ";
		cin >> b;
		x = 1 + rand() % 6;
		cout << "Your dice gave: " << x << endl;
		if (q + x > 51 && q + x < 58)
		{
			path[q] = ' ';
			if (q + x == 52)
			{
				if (x == 1)
					q = -1;
				if (x == 2)
					q = -2;
				if (x == 3)
					q = -3;
				if (x == 4)
					q = -4;
				if (x == 5)
					q = -5;
				if (x == 6)
					q = -6;
			}
			if (q + x == 53)
			{
				if (x == 2)
					q = -1;
				if (x == 3)
					q = -2;
				if (x == 4)
					q = -3;
				if (x == 5)
					q = -4;
				if (x == 6)
					q = -5;
			}
			if (q + x == 54)
			{
				if (x == 3)
					q = -1;
				if (x == 4)
					q = -2;
				if (x == 5)
					q = -3;
				if (x == 6)
					q = -4;
			}
			if (q + x == 55)
			{
				if (x == 4)
					q = -1;
				if (x == 5)
					q = -2;
				if (x == 6)
					q = -3;
			}
			if (q + x == 56)
			{
				if (x == 5)
					q = -1;
				if (x == 6)
					q = -2;
			}
			if (q + x == 57)
			{
				if (x == 6)
					q = -1;
			}
		}
		if (q < 38)
		{
			if (q + x > 37 && q + x < 44)
			{
				path[q] = ' ';
				if (q + x == 38)
				{
					if (x == 1)
						q = 66;
					if (x == 2)
						q = 65;
					if (x == 3)
						q = 64;
					if (x == 4)
						q = 63;
					if (x == 5)
						q = 62;
					if (x == 6)
						q = 61;
				}
				if (q + x == 39)
				{
					if (x == 2)
						q = 66;
					if (x == 3)
						q = 65;
					if (x == 4)
						q = 64;
					if (x == 5)
						q = 63;
					if (x == 6)
						q = 62;
				}
				if (q + x == 40)
				{
					if (x == 3)
						q = 66;
					if (x == 4)
						q = 65;
					if (x == 5)
						q = 64;
					if (x == 6)
						q = 63;
				}
				if (q + x == 41)
				{
					if (x == 4)
						q = 66;
					if (x == 5)
						q = 65;
					if (x == 6)
						q = 64;
				}
				if (q + x == 42)
				{
					if (x == 5)
						q = 66;
					if (x == 6)
						q = 65;
				}
				if (q + x == 43)
				{
					if (x == 6)
						q = 66;
				}
			}
		}
		if (r + x > 51 && r + x < 58)
		{
			path[r] = ' ';
			if (r + x == 52)
			{
				if (x == 1)
					r = -1;
				if (x == 2)
					r = -2;
				if (x == 3)
					r = -3;
				if (x == 4)
					r = -4;
				if (x == 5)
					r = -5;
				if (x == 6)
					r = -6;
			}
			if (r + x == 53)
			{
				if (x == 2)
					r = -1;
				if (x == 3)
					r = -2;
				if (x == 4)
					r = -3;
				if (x == 5)
					r = -4;
				if (x == 6)
					r = -5;
			}
			if (r + x == 54)
			{
				if (x == 3)
					r = -1;
				if (x == 4)
					r = -2;
				if (x == 5)
					r = -3;
				if (x == 6)
					r = -4;
			}
			if (r + x == 55)
			{
				if (x == 4)
					r = -1;
				if (x == 5)
					r = -2;
				if (x == 6)
					r = -3;
			}
			if (r + x == 56)
			{
				if (x == 5)
					r = -1;
				if (x == 6)
					r = -2;
			}
			if (r + x == 57)
			{
				if (x == 6)
					r = -1;
			}
		}
		if (r < 38)
		{
			if (r + x > 37 && r + x < 44)
			{
				path[r] = ' ';
				if (r + x == 38)
				{
					if (x == 1)
						r = 66;
					if (x == 2)
						r = 65;
					if (x == 3)
						r = 64;
					if (x == 4)
						r = 63;
					if (x == 5)
						r = 62;
					if (x == 6)
						r = 61;
				}
				if (r + x == 39)
				{
					if (x == 2)
						r = 66;
					if (x == 3)
						r = 65;
					if (x == 4)
						r = 64;
					if (x == 5)
						r = 63;
					if (x == 6)
						r = 62;
				}
				if (r + x == 40)
				{
					if (x == 3)
						r = 66;
					if (x == 4)
						r = 65;
					if (x == 5)
						r = 64;
					if (x == 6)
						r = 63;
				}
				if (r + x == 41)
				{
					if (x == 4)
						r = 66;
					if (x == 5)
						r = 65;
					if (x == 6)
						r = 64;
				}
				if (r + x == 42)
				{
					if (x == 5)
						r = 66;
					if (x == 6)
						r = 65;
				}
				if (r + x == 43)
				{
					if (x == 6)
						r = 66;
				}
			}
		}
		if (s + x > 51 && s + x < 58)
		{
			path[s] = ' ';
			if (s + x == 52)
			{
				if (x == 1)
					s = -1;
				if (x == 2)
					s = -2;
				if (x == 3)
					s = -3;
				if (x == 4)
					s = -4;
				if (x == 5)
					s = -5;
				if (x == 6)
					s = -6;
			}
			if (s + x == 53)
			{
				if (x == 2)
					s = -1;
				if (x == 3)
					s = -2;
				if (x == 4)
					s = -3;
				if (x == 5)
					s = -4;
				if (x == 6)
					s = -5;
			}
			if (s + x == 54)
			{
				if (x == 3)
					s = -1;
				if (x == 4)
					s = -2;
				if (x == 5)
					s = -3;
				if (x == 6)
					s = -4;
			}
			if (s + x == 55)
			{
				if (x == 4)
					s = -1;
				if (x == 5)
					s = -2;
				if (x == 6)
					s = -3;
			}
			if (s + x == 56)
			{
				if (x == 5)
					s = -1;
				if (x == 6)
					s = -2;
			}
			if (s + x == 57)
			{
				if (x == 6)
					s = -1;
			}
		}
		if (s < 38)
		{
			if (s + x > 37 && s + x < 44)
			{
				path[s] = ' ';
				if (s + x == 38)
				{
					if (x == 1)
						s = 66;
					if (x == 2)
						s = 65;
					if (x == 3)
						s = 64;
					if (x == 4)
						s = 63;
					if (x == 5)
						s = 62;
					if (x == 6)
						s = 61;
				}
				if (s + x == 39)
				{
					if (x == 2)
						s = 66;
					if (x == 3)
						s = 65;
					if (x == 4)
						s = 64;
					if (x == 5)
						s = 63;
					if (x == 6)
						s = 62;
				}
				if (s + x == 40)
				{
					if (x == 3)
						s = 66;
					if (x == 4)
						s = 65;
					if (x == 5)
						s = 64;
					if (x == 6)
						s = 63;
				}
				if (s + x == 41)
				{
					if (x == 4)
						s = 66;
					if (x == 5)
						s = 65;
					if (x == 6)
						s = 64;
				}
				if (s + x == 42)
				{
					if (x == 5)
						s = 66;
					if (x == 6)
						s = 65;
				}
				if (s + x == 43)
				{
					if (x == 6)
						s = 66;
				}
			}
		}
		if (x != 6 && countgreen == 0)
		{
			cout << "You cannot move. ";
			Sleep(1000);
			system("cls");
			graphics();
			fblue(i, j, k, l, h);
		}
		if (x == 6 && countgreen == 0)
		{
			Sleep(1000);
			system("cls");
			path[q] = gotigreen[countgreen];
			if (gotigreen[countgreen] == 'm')
				green[5][5] = ' ';
			if (gotigreen[countgreen] == 'n')
				green[5][6] = ' ';
			if (gotigreen[countgreen] == 'o')
				green[6][5] = ' ';
			if (gotigreen[countgreen] == 'p')
				green[6][6] = ' ';
			countgreen++;
			graphics();
			fgreen(q, r, s, t, h);
		}
		if (x == 6 && countgreen != 0 && countgreen < 4)
		{
			cout << "You want to move 'y' or take another goti out 'o': ";
			cin >> c;
			if (c == 'y')
			{
				if (countgreen > 1)
				{
					cout << "Which goti you want to move: ";
					cin >> z;
					if (z == 1 && q + x < 73)
					{
						q += x;
						path[q] = gotigreen[0];
						path[q - x] = ' ';
						if (q == 72)
						{
							cout << "Your goti won.";
							path[q] = ' ';
							wingreen++;
						}
					}
					if (z == 2 && r + x < 73)
					{
						r += x;
						path[r] = gotigreen[1];
						path[r - x] = ' ';
						if (r == 72)
						{
							cout << "Your goti won.";
							path[r] = ' ';
							wingreen++;
						}
					}
					if (z == 3 && s + x < 73)
					{
						s += x;
						path[s] = gotigreen[2];
						path[s - x] = ' ';
						if (s == 72)
						{
							cout << "Your goti won.";
							path[s] = ' ';
							wingreen++;
						}
					}
					if (z == 4 && t + x < 73)
					{
						t += x;
						path[t] = gotigreen[3];
						path[t - x] = ' ';
						if (t == 72)
						{
							cout << "Your goti won.";
							path[t] = ' ';
							wingreen++;
						}
					}
				}
				if (countgreen == 1 && q + x < 73)
				{
					q += x;
					path[q] = gotigreen[0];
					path[q - x] = ' ';
					if (q == 72)
					{
						cout << "Your goti won.";
						path[q] = ' ';
						wingreen++;
					}
				}
				Sleep(1000);
				system("cls");
				graphics();
				fgreen(q, r, s, t, h);
			}
			if (c == 'o')
			{
				if (countgreen == 1)
					path[r] = gotigreen[countgreen];
				if (countgreen == 2)
					path[s] = gotigreen[countgreen];
				if (countgreen == 3)
					path[t] = gotigreen[countgreen];
				if (gotigreen[countgreen] == 'm')
					green[5][5] = ' ';
				if (gotigreen[countgreen] == 'n')
					green[5][6] = ' ';
				if (gotigreen[countgreen] == 'o')
					green[6][5] = ' ';
				if (gotigreen[countgreen] == 'p')
					green[6][6] = ' ';
				countgreen++;
				Sleep(1000);
				system("cls");
				graphics();
				fgreen(q, r, s, t, h);
			}
		}
		if (x < 6 && countgreen != 0 || x == 6 && countgreen == 4)
		{
			if (countgreen > 1)
			{
				cout << "Which goti you want to move: ";
				cin >> z;
				if (z == 1 && q + x < 73)
				{
					q += x;
					path[q] = gotigreen[0];
					path[q - x] = ' ';
					if (q == 72)
					{
						cout << "Your goti won.";
						path[q] = ' ';
						wingreen++;
					}
				}
				if (z == 2 && r + x < 73)
				{
					r += x;
					path[r] = gotigreen[1];
					path[r - x] = ' ';
					if (r == 72)
					{
						cout << "Your goti won.";
						path[r] = ' ';
						wingreen++;
					}
				}
				if (z == 3 && s + x < 73)
				{
					s += x;
					path[s] = gotigreen[2];
					path[s - x] = ' ';
					if (s == 72)
					{
						cout << "Your goti won.";
						path[s] = ' ';
						wingreen++;
					}
				}
				if (z == 4 && t + x < 73)
				{
					t += x;
					path[t] = gotigreen[3];
					path[t - x] = ' ';
					if (t == 72)
					{
						cout << "Your goti won.";
						path[t] = ' ';
						wingreen++;
					}
				}
			}
			if (countgreen == 1 && q + x < 73)
			{
				q += x;
				path[q] = gotigreen[0];
				path[q - x] = ' ';
				if (q == 72)
				{
					cout << "Your goti won.";
					path[q] = ' ';
					wingreen++;
				}
			}
			if (wingreen == 4)
			{
				winner++;
				if (winner == 1)
					winner1 = "winner1 green";
				if (winner == 2)
					winner2 = "winner2 green";
				if (winner == 3)
					winner3 = "winner3 green";
				else
					winner4 = "winner4 green";
			}
			Sleep(1000);
			system("cls");
			graphics();
			if (x == 6)
				fgreen(q, r, s, t, h);
			if (x < 6)
				fblue(i, j, k, l, h);
		}
	}
}
void fyellow(int &m, int &n, int &o, int &p, int h)
{
	if (winyellow != 4)
	{
		cout << "It's the yellow turn.";
		srand(time(0));
		cout << "\nRoll dice by pressing any alphabet: ";
		cin >> b;
		x = 1 + rand() % 6;
		cout << "Your dice gave: " << x << endl;
		if (x != 6 && countyellow == 0)
		{
			cout << "You cannot move. ";
			Sleep(1000);
			system("cls");
			graphics();
			if (h == 3)
				fblue(i, j, k, l, h);
			else
				fgreen(q, r, s, t, h);
		}
		if (m + x > 51 && m + x < 58)
		{
			path[m] = ' ';
			if (m + x == 52)
			{
				if (x == 1)
					m = -1;
				if (x == 2)
					m = -2;
				if (x == 3)
					m = -3;
				if (x == 4)
					m = -4;
				if (x == 5)
					m = -5;
				if (x == 6)
					m = -6;
			}
			if (m + x == 53)
			{
				if (x == 2)
					m = -1;
				if (x == 3)
					m = -2;
				if (x == 4)
					m = -3;
				if (x == 5)
					m = -4;
				if (x == 6)
					m = -5;
			}
			if (m + x == 54)
			{
				if (x == 3)
					m = -1;
				if (x == 4)
					m = -2;
				if (x == 5)
					m = -3;
				if (x == 6)
					m = -4;
			}
			if (m + x == 55)
			{
				if (x == 4)
					m = -1;
				if (x == 5)
					m = -2;
				if (x == 6)
					m = -3;
			}
			if (m + x == 56)
			{
				if (x == 5)
					m = -1;
				if (x == 6)
					m = -2;
			}
			if (m + x == 57)
			{
				if (x == 6)
					m = -1;
			}
		}
		if (m < 25)
		{
			if (m + x > 24 && m + x < 31)
			{
				path[m] = ' ';
				if (m + x == 25)
				{
					if (x == 1)
						m = 61;
					if (x == 2)
						m = 60;
					if (x == 3)
						m = 59;
					if (x == 4)
						m = 58;
					if (x == 5)
						m = 57;
					if (x == 6)
						m = 56;
				}
				if (m + x == 26)
				{
					if (x == 2)
						m = 61;
					if (x == 3)
						m = 60;
					if (x == 4)
						m = 59;
					if (x == 5)
						m = 58;
					if (x == 6)
						m = 57;
				}
				if (m + x == 27)
				{
					if (x == 3)
						m = 61;
					if (x == 4)
						m = 60;
					if (x == 5)
						m = 59;
					if (x == 6)
						m = 58;
				}
				if (m + x == 28)
				{
					if (x == 4)
						m = 61;
					if (x == 5)
						m = 60;
					if (x == 6)
						m = 59;
				}
				if (m + x == 29)
				{
					if (x == 5)
						m = 61;
					if (x == 6)
						m = 60;
				}
				if (m + x == 17)
				{
					if (x == 6)
						m = 61;
				}
			}
		}
		if (n + x > 51 && n + x < 58)
		{
			path[n] = ' ';
			if (n + x == 52)
			{
				if (x == 1)
					n = -1;
				if (x == 2)
					n = -2;
				if (x == 3)
					n = -3;
				if (x == 4)
					n = -4;
				if (x == 5)
					n = -5;
				if (x == 6)
					n = -6;
			}
			if (n + x == 53)
			{
				if (x == 2)
					n = -1;
				if (x == 3)
					n = -2;
				if (x == 4)
					n = -3;
				if (x == 5)
					n = -4;
				if (x == 6)
					n = -5;
			}
			if (n + x == 54)
			{
				if (x == 3)
					n = -1;
				if (x == 4)
					n = -2;
				if (x == 5)
					n = -3;
				if (x == 6)
					n = -4;
			}
			if (n + x == 55)
			{
				if (x == 4)
					n = -1;
				if (x == 5)
					n = -2;
				if (x == 6)
					n = -3;
			}
			if (n + x == 56)
			{
				if (x == 5)
					n = -1;
				if (x == 6)
					n = -2;
			}
			if (n + x == 57)
			{
				if (x == 6)
					n = -1;
			}
		}
		if (n < 25)
		{
			if (n + x > 24 && n + x < 31)
			{
				path[n] = ' ';
				if (n + x == 25)
				{
					if (x == 1)
						n = 61;
					if (x == 2)
						n = 60;
					if (x == 3)
						n = 59;
					if (x == 4)
						n = 58;
					if (x == 5)
						n = 57;
					if (x == 6)
						n = 56;
				}
				if (n + x == 26)
				{
					if (x == 2)
						n = 61;
					if (x == 3)
						n = 60;
					if (x == 4)
						n = 59;
					if (x == 5)
						n = 58;
					if (x == 6)
						n = 57;
				}
				if (n + x == 27)
				{
					if (x == 3)
						n = 61;
					if (x == 4)
						n = 60;
					if (x == 5)
						n = 59;
					if (x == 6)
						n = 58;
				}
				if (n + x == 28)
				{
					if (x == 4)
						n = 61;
					if (x == 5)
						n = 60;
					if (x == 6)
						n = 59;
				}
				if (n + x == 29)
				{
					if (x == 5)
						n = 61;
					if (x == 6)
						n = 60;
				}
				if (n + x == 17)
				{
					if (x == 6)
						n = 61;
				}
			}
		}
		if (o + x > 51 && o + x < 58)
		{
			path[o] = ' ';
			if (o + x == 52)
			{
				if (x == 1)
					o = -1;
				if (x == 2)
					o = -2;
				if (x == 3)
					o = -3;
				if (x == 4)
					o = -4;
				if (x == 5)
					o = -5;
				if (x == 6)
					o = -6;
			}
			if (o + x == 53)
			{
				if (x == 2)
					o = -1;
				if (x == 3)
					o = -2;
				if (x == 4)
					o = -3;
				if (x == 5)
					o = -4;
				if (x == 6)
					o = -5;
			}
			if (o + x == 54)
			{
				if (x == 3)
					o = -1;
				if (x == 4)
					o = -2;
				if (x == 5)
					o = -3;
				if (x == 6)
					o = -4;
			}
			if (o + x == 55)
			{
				if (x == 4)
					o = -1;
				if (x == 5)
					o = -2;
				if (x == 6)
					o = -3;
			}
			if (o + x == 56)
			{
				if (x == 5)
					o = -1;
				if (x == 6)
					o = -2;
			}
			if (o + x == 57)
			{
				if (x == 6)
					o = -1;
			}
		}
		if (o < 25)
		{
			if (o + x > 24 && o + x < 31)
			{
				path[o] = ' ';
				if (o + x == 25)
				{
					if (x == 1)
						o = 61;
					if (x == 2)
						o = 60;
					if (x == 3)
						o = 59;
					if (x == 4)
						o = 58;
					if (x == 5)
						o = 57;
					if (x == 6)
						o = 56;
				}
				if (o + x == 26)
				{
					if (x == 2)
						o = 61;
					if (x == 3)
						o = 60;
					if (x == 4)
						o = 59;
					if (x == 5)
						o = 58;
					if (x == 6)
						o = 57;
				}
				if (o + x == 27)
				{
					if (x == 3)
						o = 61;
					if (x == 4)
						o = 60;
					if (x == 5)
						o = 59;
					if (x == 6)
						o = 58;
				}
				if (o + x == 28)
				{
					if (x == 4)
						o = 61;
					if (x == 5)
						o = 60;
					if (x == 6)
						o = 59;
				}
				if (o + x == 29)
				{
					if (x == 5)
						o = 61;
					if (x == 6)
						o = 60;
				}
				if (o + x == 17)
				{
					if (x == 6)
						o = 61;
				}
			}
		}
		if (p + x > 51 && p + x < 58)
		{
			path[p] = ' ';
			if (p + x == 52)
			{
				if (x == 1)
					p = -1;
				if (x == 2)
					p = -2;
				if (x == 3)
					p = -3;
				if (x == 4)
					p = -4;
				if (x == 5)
					p = -5;
				if (x == 6)
					p = -6;
			}
			if (p + x == 53)
			{
				if (x == 2)
					p = -1;
				if (x == 3)
					p = -2;
				if (x == 4)
					p = -3;
				if (x == 5)
					p = -4;
				if (x == 6)
					p = -5;
			}
			if (p + x == 54)
			{
				if (x == 3)
					p = -1;
				if (x == 4)
					p = -2;
				if (x == 5)
					p = -3;
				if (x == 6)
					p = -4;
			}
			if (p + x == 55)
			{
				if (x == 4)
					p = -1;
				if (x == 5)
					p = -2;
				if (x == 6)
					p = -3;
			}
			if (p + x == 56)
			{
				if (x == 5)
					p = -1;
				if (x == 6)
					p = -2;
			}
			if (p + x == 57)
			{
				if (x == 6)
					p = -1;
			}
		}
		if (p < 25)
		{
			if (p + x > 24 && p + x < 31)
			{
				path[p] = ' ';
				if (p + x == 25)
				{
					if (x == 1)
						p = 61;
					if (x == 2)
						p = 60;
					if (x == 3)
						p = 59;
					if (x == 4)
						p = 58;
					if (x == 5)
						p = 57;
					if (x == 6)
						p = 56;
				}
				if (p + x == 26)
				{
					if (x == 2)
						p = 61;
					if (x == 3)
						p = 60;
					if (x == 4)
						p = 59;
					if (x == 5)
						p = 58;
					if (x == 6)
						p = 57;
				}
				if (p + x == 27)
				{
					if (x == 3)
						p = 61;
					if (x == 4)
						p = 60;
					if (x == 5)
						p = 59;
					if (x == 6)
						p = 58;
				}
				if (p + x == 28)
				{
					if (x == 4)
						p = 61;
					if (x == 5)
						p = 60;
					if (x == 6)
						p = 59;
				}
				if (p + x == 29)
				{
					if (x == 5)
						p = 61;
					if (x == 6)
						p = 60;
				}
				if (p + x == 17)
				{
					if (x == 6)
						p = 61;
				}
			}
		}
		if (x == 6 && countyellow == 0)
		{
			Sleep(1000);
			system("cls");
			path[m] = gotiyellow[countyellow];
			if (gotiyellow[countyellow] == 'i')
				yellow[5][5] = ' ';
			if (gotiyellow[countyellow] == 'j')
				yellow[5][6] = ' ';
			if (gotiyellow[countyellow] == 'k')
				yellow[6][5] = ' ';
			if (gotiyellow[countyellow] == 'l')
				yellow[6][6] = ' ';
			countyellow++;
			graphics();
			fyellow(m, n, o, p, h);
		}
		if (x == 6 && countyellow != 0 && countyellow < 4)
		{
			cout << "You want to move 'y' or take another goti out 'o': ";
			cin >> c;
			if (c == 'y')
			{
				if (countyellow > 1)
				{
					cout << "Which goti you want to move: ";
					cin >> z;
					if (z == 1 && m + x < 68)
					{
						m += x;
						path[m] = gotiyellow[0];
						path[m - x] = ' ';
						if (m == 67)
						{
							cout << "Your goti won.";
							path[m] = ' ';
							winyellow++;
						}
					}
					if (z == 2 && n + x < 68)
					{
						n += x;
						path[n] = gotiyellow[1];
						path[n - x] = ' ';
						if (n == 67)
						{
							cout << "Your goti won.";
							path[n] = ' ';
							winyellow++;
						}
					}
					if (z == 3 && o + x < 68)
					{
						o += x;
						path[o] = gotiyellow[2];
						path[o - x] = ' ';
						if (o == 67)
						{
							cout << "Your goti won.";
							path[o] = ' ';
							winyellow++;
						}
					}
					if (z == 4 && p + x < 68)
					{
						p += x;
						path[p] = gotiyellow[3];
						path[p - x] = ' ';
						if (p == 67)
						{
							cout << "Your goti won.";
							path[p] = ' ';
							winyellow++;
						}
					}
				}
				if (countyellow == 1 && m + x < 68)
				{
					m += x;
					path[m] = gotiyellow[0];
					path[m - x] = ' ';
					if (m == 67)
					{
						cout << "Your goti won.";
						path[m] = ' ';
						winyellow++;
					}
				}
				if (winyellow == 4)
				{
					winner++;
					if (winner == 1)
						winner1 = "winner1 yellow";
					if (winner == 2)
						winner2 = "winner2 yellow";
					if (winner == 3)
						winner3 = "winner3 yellow";
					else
						winner4 = "winner4 yellow";
				}
				Sleep(1000);
				system("cls");
				graphics();
				fyellow(m, n, o, p, h);
			}
			if (c == 'o')
			{
				if (countyellow == 1)
					path[n] = gotiyellow[countyellow];
				if (countyellow == 2)
					path[o] = gotiyellow[countyellow];
				if (countyellow == 3)
					path[p] = gotiyellow[countyellow];
				if (gotiyellow[countyellow] == 'i')
					yellow[5][5] = ' ';
				if (gotiyellow[countyellow] == 'j')
					yellow[5][6] = ' ';
				if (gotiyellow[countyellow] == 'k')
					yellow[6][5] = ' ';
				if (gotiyellow[countyellow] == 'l')
					yellow[6][6] = ' ';
				countyellow++;
				Sleep(1000);
				system("cls");
				graphics();
				fyellow(m, n, o, p, h);
			}
		}
		if (x < 6 && countyellow != 0 || x == 6 && countyellow == 4)
		{
			if (countyellow > 1)
			{
				cout << "Which goti you want to move: ";
				cin >> z;
				if (z == 1 && m + x < 68)
				{
					m += x;
					path[m] = gotiyellow[0];
					path[m - x] = ' ';
					if (m == 67)
					{
						cout << "Your goti won.";
						path[m] = ' ';
						winyellow++;
					}
				}
				if (z == 2 && n + x < 68)
				{
					n += x;
					path[n] = gotiyellow[1];
					path[n - x] = ' ';
					if (n == 67)
					{
						cout << "Your goti won.";
						path[n] = ' ';
						winyellow++;
					}
				}
				if (z == 3 && o + x < 68)
				{
					o += x;
					path[o] = gotiyellow[2];
					path[o - x] = ' ';
					if (o == 67)
					{
						cout << "Your goti won.";
						path[o] = ' ';
						winyellow++;
					}
				}
				if (z == 4 && p + x < 68)
				{
					p += x;
					path[p] = gotiyellow[3];
					path[p - x] = ' ';
					if (p == 67)
					{
						cout << "Your goti won.";
						path[p] = ' ';
						winyellow++;
					}
				}
			}
			if (countyellow == 1 && m + x < 68)
			{
				m += x;
				path[m] = gotiyellow[0];
				path[m - x] = ' ';
				if (m == 67)
				{
					cout << "Your goti won.";
					path[m] = ' ';
					winyellow++;
				}
			}
			if (winyellow == 4)
			{
				winner++;
				if (winner == 1)
					winner1 = "winner1 yellow";
				if (winner == 2)
					winner2 = "winner2 yellow";
				if (winner == 3)
					winner3 = "winner3 yellow";
				else
					winner4 = "winner4 yellow";
			}
			Sleep(1000);
			system("cls");
			graphics();
			if (x == 6)
				fyellow(m, n, o, p, h);
			if (h == 3 && x < 6)
				fblue(i, j, k, l, h);
			if (h == 4 && x < 6)
				fgreen(q, r, s, t, h);
		}
	}
}
void fred(int &d, int &e, int &f, int &g, int h)
{
	if (winred != 4)
	{
		cout << "It's the red turn.";
		srand(time(0));
		cout << "\nRoll dice by pressing any alphabet: ";
		cin >> b;
		x = 1 + rand() % 6;
		cout << "Your dice gave: " << x << endl;
		if (d + x > 51 && d + x < 58)
		{
			path[d] = ' ';
			if (d + x == 52)
			{
				if (x == 1)
					d = -1;
				if (x == 2)
					d = -2;
				if (x == 3)
					d = -3;
				if (x == 4)
					d = -4;
				if (x == 5)
					d = -5;
				if (x == 6)
					d = -6;
			}
			if (d + x == 53)
			{
				if (x == 2)
					d = -1;
				if (x == 3)
					d = -2;
				if (x == 4)
					d = -3;
				if (x == 5)
					d = -4;
				if (x == 6)
					d = -5;
			}
			if (d + x == 54)
			{
				if (x == 3)
					d = -1;
				if (x == 4)
					d = -2;
				if (x == 5)
					d = -3;
				if (x == 6)
					d = -4;
			}
			if (d + x == 55)
			{
				if (x == 4)
					d = -1;
				if (x == 5)
					d = -2;
				if (x == 6)
					d = -3;
			}
			if (d + x == 56)
			{
				if (x == 5)
					d = -1;
				if (x == 6)
					d = -2;
			}
			if (d + x == 57)
			{
				if (x == 6)
					d = -1;
			}
		}
		if (d < 12)
		{
			if (d + x > 11 && d + x < 18)
			{
				path[d] = ' ';
				if (d + x == 12)
				{
					if (x == 1)
						d = 56;
					if (x == 2)
						d = 55;
					if (x == 3)
						d = 54;
					if (x == 4)
						d = 53;
					if (x == 5)
						d = 52;
					if (x == 6)
						d = 51;
				}
				if (d + x == 13)
				{
					if (x == 2)
						d = 56;
					if (x == 3)
						d = 55;
					if (x == 4)
						d = 54;
					if (x == 5)
						d = 53;
					if (x == 6)
						d = 52;
				}
				if (d + x == 14)
				{
					if (x == 3)
						d = 56;
					if (x == 4)
						d = 55;
					if (x == 5)
						d = 54;
					if (x == 6)
						d = 53;
				}
				if (d + x == 15)
				{
					if (x == 4)
						d = 56;
					if (x == 5)
						d = 55;
					if (x == 6)
						d = 54;
				}
				if (d + x == 16)
				{
					if (x == 5)
						d = 56;
					if (x == 6)
						d = 55;
				}
				if (d + x == 17)
				{
					if (x == 6)
						d = 56;
				}
			}
		}
		if (e + x > 51 && e + x < 58)
		{
			path[e] = ' ';
			if (e + x == 52)
			{
				if (x == 1)
					e = -1;
				if (x == 2)
					e = -2;
				if (x == 3)
					e = -3;
				if (x == 4)
					e = -4;
				if (x == 5)
					e = -5;
				if (x == 6)
					e = -6;
			}
			if (e + x == 53)
			{
				if (x == 2)
					e = -1;
				if (x == 3)
					e = -2;
				if (x == 4)
					e = -3;
				if (x == 5)
					e = -4;
				if (x == 6)
					e = -5;
			}
			if (e + x == 54)
			{
				if (x == 3)
					e = -1;
				if (x == 4)
					e = -2;
				if (x == 5)
					e = -3;
				if (x == 6)
					e = -4;
			}
			if (e + x == 55)
			{
				if (x == 4)
					e = -1;
				if (x == 5)
					e = -2;
				if (x == 6)
					e = -3;
			}
			if (e + x == 56)
			{
				if (x == 5)
					e = -1;
				if (x == 6)
					e = -2;
			}
			if (e + x == 57)
			{
				if (x == 6)
					e = -1;
			}
		}
		if (e < 12)
		{
			if (e + x > 11 && e + x < 18)
			{
				path[e] = ' ';
				if (e + x == 12)
				{
					if (x == 1)
						e = 56;
					if (x == 2)
						e = 55;
					if (x == 3)
						e = 54;
					if (x == 4)
						e = 53;
					if (x == 5)
						e = 52;
					if (x == 6)
						e = 51;
				}
				if (e + x == 13)
				{
					if (x == 2)
						e = 56;
					if (x == 3)
						e = 55;
					if (x == 4)
						e = 54;
					if (x == 5)
						e = 53;
					if (x == 6)
						e = 52;
				}
				if (e + x == 14)
				{
					if (x == 3)
						e = 56;
					if (x == 4)
						e = 55;
					if (x == 5)
						e = 54;
					if (x == 6)
						e = 53;
				}
				if (e + x == 15)
				{
					if (x == 4)
						e = 56;
					if (x == 5)
						e = 55;
					if (x == 6)
						e = 54;
				}
				if (e + x == 16)
				{
					if (x == 5)
						e = 56;
					if (x == 6)
						e = 55;
				}
				if (e + x == 17)
				{
					if (x == 6)
						e = 56;
				}
			}
		}
		if (f + x > 51 && f + x < 58)
		{
			path[f] = ' ';
			if (f + x == 52)
			{
				if (x == 1)
					f = -1;
				if (x == 2)
					f = -2;
				if (x == 3)
					f = -3;
				if (x == 4)
					f = -4;
				if (x == 5)
					f = -5;
				if (x == 6)
					f = -6;
			}
			if (f + x == 53)
			{
				if (x == 2)
					f = -1;
				if (x == 3)
					f = -2;
				if (x == 4)
					f = -3;
				if (x == 5)
					f = -4;
				if (x == 6)
					f = -5;
			}
			if (f + x == 54)
			{
				if (x == 3)
					f = -1;
				if (x == 4)
					f = -2;
				if (x == 5)
					f = -3;
				if (x == 6)
					f = -4;
			}
			if (f + x == 55)
			{
				if (x == 4)
					f = -1;
				if (x == 5)
					f = -2;
				if (x == 6)
					f = -3;
			}
			if (f + x == 56)
			{
				if (x == 5)
					f = -1;
				if (x == 6)
					f = -2;
			}
			if (f + x == 57)
			{
				if (x == 6)
					f = -1;
			}
		}
		if (f < 12)
		{
			if (f + x > 11 && f + x < 18)
			{
				path[f] = ' ';
				if (f + x == 12)
				{
					if (x == 1)
						f = 56;
					if (x == 2)
						f = 55;
					if (x == 3)
						f = 54;
					if (x == 4)
						f = 53;
					if (x == 5)
						f = 52;
					if (x == 6)
						f = 51;
				}
				if (f + x == 13)
				{
					if (x == 2)
						f = 56;
					if (x == 3)
						f = 55;
					if (x == 4)
						f = 54;
					if (x == 5)
						f = 53;
					if (x == 6)
						f = 52;
				}
				if (f + x == 14)
				{
					if (x == 3)
						f = 56;
					if (x == 4)
						f = 55;
					if (x == 5)
						f = 54;
					if (x == 6)
						f = 53;
				}
				if (f + x == 15)
				{
					if (x == 4)
						f = 56;
					if (x == 5)
						f = 55;
					if (x == 6)
						f = 54;
				}
				if (f + x == 16)
				{
					if (x == 5)
						f = 56;
					if (x == 6)
						f = 55;
				}
				if (f + x == 17)
				{
					if (x == 6)
						f = 56;
				}
			}
		}
		if (g + x > 51 && g + x < 58)
		{
			path[g] = ' ';
			if (g + x == 52)
			{
				if (x == 1)
					g = -1;
				if (x == 2)
					g = -2;
				if (x == 3)
					g = -3;
				if (x == 4)
					g = -4;
				if (x == 5)
					g = -5;
				if (x == 6)
					g = -6;
			}
			if (g + x == 53)
			{
				if (x == 2)
					g = -1;
				if (x == 3)
					g = -2;
				if (x == 4)
					g = -3;
				if (x == 5)
					g = -4;
				if (x == 6)
					g = -5;
			}
			if (g + x == 54)
			{
				if (x == 3)
					g = -1;
				if (x == 4)
					g = -2;
				if (x == 5)
					g = -3;
				if (x == 6)
					g = -4;
			}
			if (g + x == 55)
			{
				if (x == 4)
					g = -1;
				if (x == 5)
					g = -2;
				if (x == 6)
					g = -3;
			}
			if (g + x == 56)
			{
				if (x == 5)
					g = -1;
				if (x == 6)
					g = -2;
			}
			if (g + x == 57)
			{

				if (x == 6)
					g = -1;
			}
		}
		if (g < 12)
		{
			if (g + x > 11 && g + x < 18)
			{
				path[g] = ' ';
				if (g + x == 12)
				{
					if (x == 1)
						g = 56;
					if (x == 2)
						g = 55;
					if (x == 3)
						g = 54;
					if (x == 4)
						g = 53;
					if (x == 5)
						g = 52;
					if (x == 6)
						g = 51;
				}
				if (g + x == 13)
				{
					if (x == 2)
						g = 56;
					if (x == 3)
						g = 55;
					if (x == 4)
						g = 54;
					if (x == 5)
						g = 53;
					if (x == 6)
						g = 52;
				}
				if (g + x == 14)
				{
					if (x == 3)
						g = 56;
					if (x == 4)
						g = 55;
					if (x == 5)
						g = 54;
					if (x == 6)
						g = 53;
				}
				if (g + x == 15)
				{
					if (x == 4)
						g = 56;
					if (x == 5)
						g = 55;
					if (x == 6)
						g = 54;
				}
				if (g + x == 16)
				{
					if (x == 5)
						g = 56;
					if (x == 6)
						g = 55;
				}
				if (g + x == 17)
				{
					if (x == 6)
						g = 56;
				}
			}
		}
		if (x != 6 && countred == 0)
		{
			cout << "You cannot move. ";
			Sleep(1000);
			system("cls");
			graphics();
			if (h == 2)
				fblue(i, j, k, l, h);
			else
				fyellow(m, n, o, p, h);
		}
		if (x == 6 && countred == 0)
		{
			Sleep(1000);
			system("cls");
			path[d] = gotired[countred];
			if (gotired[countred] == 'e')
				red[5][5] = ' ';
			if (gotired[countred] == 'f')
				red[5][6] = ' ';
			if (gotired[countred] == 'g')
				red[6][5] = ' ';
			if (gotired[countred] == 'h')
				red[6][6] = ' ';
			countred++;
			graphics();
			fred(d, e, f, g, h);
		}
		if (x == 6 && countred != 0 && countred < 4)
		{
			cout << "You want to move 'y' or take another goti out 'o': ";
			cin >> c;
			if (c == 'y')
			{
				if (countred > 1)
				{
					cout << "Which goti you want to move: ";
					cin >> z;
					if (z == 1 && d + x < 63)
					{
						d += x;
						path[d] = gotired[0];
						path[d - x] = ' ';
						if (d == 62)
						{
							cout << "Your goti won.";
							path[d] = ' ';
							winred++;
						}
					}
					if (z == 2 && e + x < 63)
					{
						e += x;
						path[e] = gotired[1];
						path[e - x] = ' ';
						if (e == 62)
						{
							cout << "Your goti won.";
							path[e] = ' ';
							winred++;
						}
					}
					if (z == 3 && f + x < 63)
					{
						f += x;
						path[f] = gotired[2];
						path[f - x] = ' ';
						if (f == 62)
						{
							cout << "Your goti won.";
							path[f] = ' ';
							winred++;
						}
					}
					if (z == 4 && g + x < 63)
					{
						g += x;
						path[g] = gotired[3];
						path[g - x] = ' ';
						if (g == 62)
						{
							cout << "Your goti won.";
							path[g] = ' ';
							winred++;
						}
					}
				}
				if (countred == 1 && d + x < 63)
				{
					d += x;
					path[d] = gotiblue[0];
					path[d - x] = ' ';
					if (d == 62)
					{
						cout << "Your goti won.";
						path[d] = ' ';
						winred++;
					}
				}
				if (winred == 4)
				{
					winner++;
					if (winner == 1)
						winner1 = "winner1 red";
					if (winner == 2)
						winner2 = "winner2 red";
					if (winner == 3)
						winner3 = "winner3 red";
					else
						winner4 = "winner4 red";
				}
				Sleep(1000);
				system("cls");
				graphics();
				fred(d, e, f, g, h);
			}
			if (c == 'o')
			{
				if (countred == 1)
					path[e] = gotired[countred];
				if (countred == 2)
					path[f] = gotired[countred];
				if (countred == 3)
					path[g] = gotired[countred];
				if (gotired[countred] == 'e')
					red[5][5] = ' ';
				if (gotired[countred] == 'f')
					red[5][6] = ' ';
				if (gotired[countred] == 'g')
					red[6][5] = ' ';
				if (gotired[countred] == 'h')
					red[6][6] = ' ';
				countred++;
				Sleep(1000);
				system("cls");
				graphics();
				fred(d, e, f, g, h);
			}
		}
		if (x < 6 && countred != 0 || x == 6 && countred == 4)
		{
			if (countred > 1)
			{
				cout << "Which goti you want to move: ";
				cin >> z;
				if (z == 1 && d + x < 63)
				{
					d += x;
					path[d] = gotired[0];
					path[d - x] = ' ';
					if (d == 62)
					{
						cout << "Your goti won.";
						path[d] = ' ';
						winred++;
					}
				}
				if (z == 2 && e + x < 63)
				{
					e += x;
					path[e] = gotired[1];
					path[e - x] = ' ';
					if (e == 62)
					{
						cout << "Your goti won.";
						path[e] = ' ';
						winred++;
					}
				}
				if (z == 3 && f + x < 63)
				{
					f += x;
					path[f] = gotired[2];
					path[f - x] = ' ';
					if (f == 62)
					{
						cout << "Your goti won.";
						path[f] = ' ';
						winred++;
					}
				}
				if (z == 4 && g + x < 63)
				{
					g += x;
					path[g] = gotired[3];
					path[g - x] = ' ';
					if (g == 62)
					{
						cout << "Your goti won.";
						path[g] = ' ';
						winred++;
					}
				}
			}
			if (countred == 1 && d + x < 63)
			{
				d += x;
				path[d] = gotired[0];
				path[d - x] = ' ';
				if (d == 62)
				{
					cout << "Your goti won.";
					path[d] = ' ';
					winred++;
				}
			}
			if (winred == 4)
			{
				winner++;
				if (winner == 1)
					winner1 = "winner1 red";
				if (winner == 2)
					winner2 = "winner2 red";
				if (winner == 3)
					winner3 = "winner3 red";
				else
					winner4 = "winner4 red";
			}
			Sleep(1000);
			system("cls");
			graphics();
			if (x == 6)
				fred(d, e, f, g, h);
			if (h == 2)
				fblue(i, j, k, l, h);
			else
				fyellow(m, n, o, p, h);
		}
	}
}
void fblue(int &i, int &j, int &k, int &l, int h)
{
	if (winblue != 4)
	{
		cout << "It's the blue turn.";
		srand(time(0));
		cout << "\nRoll dice by pressing any alphabet: ";
		cin >> b;
		x = 1 + rand() % 6;
		cout << "Your dice gave: " << x << endl;
		if (i + x > 50 && i + x < 57)
		{
			path[i] = ' ';
			if (i + x == 51)
			{
				if (x == 1)
					i = 51;
				if (x == 2)
					i = 50;
				if (x == 3)
					i = 49;
				if (x == 4)
					i = 48;
				if (x == 5)
					i = 47;
				if (x == 6)
					i = 46;
			}
			if (i + x == 52)
			{
				if (x == 2)
					i = 51;
				if (x == 3)
					i = 50;
				if (x == 4)
					i = 49;
				if (x == 5)
					i = 48;
				if (x == 6)
					i = 47;
			}
			if (i + x == 53)
			{
				if (x == 3)
					i = 51;
				if (x == 4)
					i = 50;
				if (x == 5)
					i = 49;
				if (x == 6)
					i = 48;
			}
			if (i + x == 54)
			{
				if (x == 4)
					i = 51;
				if (x == 5)
					i = 50;
				if (x == 6)
					i = 49;
			}
			if (i + x == 55)
			{
				if (x == 5)
					i = 51;
				if (x == 6)
					i = 50;
			}
			if (i + x == 56)
			{
				if (x == 6)
					i = 51;
			}
		}
		if (j + x > 50 && j + x < 57)
		{
			path[j] = ' ';
			if (j + x == 51)
			{
				if (x == 1)
					j = 51;
				if (x == 2)
					j = 50;
				if (x == 3)
					j = 49;
				if (x == 4)
					j = 48;
				if (x == 5)
					j = 47;
				if (x == 6)
					j = 46;
			}
			if (j + x == 52)
			{
				if (x == 2)
					j = 51;
				if (x == 3)
					j = 50;
				if (x == 4)
					j = 49;
				if (x == 5)
					j = 48;
				if (x == 6)
					j = 47;
			}
			if (j + x == 53)
			{
				if (x == 3)
					j = 51;
				if (x == 4)
					j = 50;
				if (x == 5)
					j = 49;
				if (x == 6)
					j = 48;
			}
			if (j + x == 54)
			{
				if (x == 4)
					j = 51;
				if (x == 5)
					j = 50;
				if (x == 6)
					j = 49;
			}
			if (j + x == 55)
			{
				if (x == 5)
					j = 51;
				if (x == 6)
					j = 50;
			}
			if (j + x == 56)
			{
				if (x == 6)
					j = 51;
			}
		}
		if (k + x > 50 && k + x < 57)
		{
			path[k] = ' ';
			if (k + x == 51)
			{
				if (x == 1)
					k = 51;
				if (x == 2)
					k = 50;
				if (x == 3)
					k = 49;
				if (x == 4)
					k = 48;
				if (x == 5)
					k = 47;
				if (x == 6)
					k = 46;
			}
			if (k + x == 52)
			{
				if (x == 2)
					k = 51;
				if (x == 3)
					k = 50;
				if (x == 4)
					k = 49;
				if (x == 5)
					k = 48;
				if (x == 6)
					k = 47;
			}
			if (k + x == 53)
			{
				if (x == 3)
					k = 51;
				if (x == 4)
					k = 50;
				if (x == 5)
					k = 49;
				if (x == 6)
					k = 48;
			}
			if (k + x == 54)
			{
				if (x == 4)
					k = 51;
				if (x == 5)
					k = 50;
				if (x == 6)
					k = 49;
			}
			if (k + x == 55)
			{
				if (x == 5)
					k = 51;
				if (x == 6)
					k = 50;
			}
			if (k + x == 56)
			{
				if (x == 6)
					k = 51;
			}
		}
		if (l + x > 50 && l + x < 57)
		{
			path[l] = ' ';
			if (l + x == 51)
			{
				if (x == 1)
					l = 51;
				if (x == 2)
					l = 50;
				if (x == 3)
					l = 49;
				if (x == 4)
					l = 48;
				if (x == 5)
					l = 47;
				if (x == 6)
					l = 46;
			}
			if (l + x == 52)
			{
				if (x == 2)
					l = 51;
				if (x == 3)
					l = 50;
				if (x == 4)
					l = 49;
				if (x == 5)
					l = 48;
				if (x == 6)
					l = 47;
			}
			if (l + x == 53)
			{
				if (x == 3)
					l = 51;
				if (x == 4)
					l = 50;
				if (x == 5)
					l = 49;
				if (x == 6)
					l = 48;
			}
			if (l + x == 54)
			{
				if (x == 4)
					l = 51;
				if (x == 5)
					l = 50;
				if (x == 6)
					l = 49;
			}
			if (l + x == 55)
			{
				if (x == 5)
					l = 51;
				if (x == 6)
					l = 50;
			}
			if (l + x == 56)
			{
				if (x == 6)
					l = 51;
			}
		}
		if (x != 6 && countblue == 0)
		{
			cout << "You cannot move. ";
			Sleep(1000);
			system("cls");
			graphics();
			fred(d, e, f, g, h);
		}
		if (x == 6 && countblue == 0)
		{
			Sleep(1000);
			system("cls");
			path[i] = gotiblue[countblue];
			if (gotiblue[countblue] == 'a')
				blue[5][5] = ' ';
			if (gotiblue[countblue] == 'b')
				blue[5][6] = ' ';
			if (gotiblue[countblue] == 'c')
				blue[6][5] = ' ';
			if (gotiblue[countblue] == 'd')
				blue[6][6] = ' ';
			countblue++;
			graphics();
			fblue(i, j, k, l, h);
		}
		if (x == 6 && countblue != 0 && countblue < 4)
		{
			cout << "You want to move 'y' or take another goti out 'o': ";
			cin >> c;
			if (c == 'y')
			{
				if (countblue > 1)
				{
					cout << "Which goti you want to move: ";
					cin >> z;
					if (z == 1 && i + x < 58)
					{
						i += x;
						path[i] = gotiblue[0];
						path[i - x] = ' ';
						if (i == 57)
						{
							cout << "Your goti won.";
							path[i] = ' ';
							winblue++;
						}
					}
					if (z == 2 && j + x < 58)
					{
						j += x;
						path[j] = gotiblue[1];
						path[j - x] = ' ';
						if (j == 57)
						{
							cout << "Your goti won.";
							path[j] = ' ';
							winblue++;
						}
					}
					if (z == 3 && k + x < 58)
					{
						k += x;
						path[k] = gotiblue[2];
						path[k - x] = ' ';
						if (k == 57)
						{
							cout << "Your goti won.";
							path[k] = ' ';
							winblue++;
						}
					}
					if (z == 4 && l + x < 58)
					{
						l += x;
						path[l] = gotiblue[3];
						path[l - x] = ' ';
						if (l == 57)
						{
							cout << "Your goti won.";
							path[l] = ' ';
							winblue++;
						}
					}
				}
				if (countblue == 1 && i + x < 58)
				{
					i += x;
					path[i] = gotiblue[0];
					path[i - x] = ' ';
					if (i == 57)
					{
						cout << "Your goti won.";
						path[i] = ' ';
						winblue++;
					}
				}
				if (winblue == 4)
				{
					winner++;
					if (winner == 1)
						winner1 = "winner1 blue";
					if (winner == 2)
						winner2 = "winner2 blue";
					if (winner == 3)
						winner3 = "winner3 blue";
					else
						winner4 = "winner4 blue";
				}
				Sleep(1000);
				system("cls");
				graphics();
				fblue(i, j, k, l, h);
			}
			if (c == 'o')
			{
				if (countblue == 1)
					path[j] = gotiblue[countblue];
				if (countblue == 2)
					path[k] = gotiblue[countblue];
				if (countblue == 3)
					path[l] = gotiblue[countblue];
				if (gotiblue[countblue] == 'a')
					blue[5][5] = ' ';
				if (gotiblue[countblue] == 'b')
					blue[5][6] = ' ';
				if (gotiblue[countblue] == 'c')
					blue[6][5] = ' ';
				if (gotiblue[countblue] == 'd')
					blue[6][6] = ' ';
				countblue++;
				Sleep(1000);
				system("cls");
				graphics();
				fblue(i, j, k, l, h);
			}
		}
		if (x < 6 && countblue != 0 || x == 6 && countblue == 4)
		{
			if (countblue > 1)
			{
				cout << "Which goti you want to move: ";
				cin >> z;
				if (z == 1 && i + x < 58)
				{
					i += x;
					path[i] = gotiblue[0];
					path[i - x] = ' ';
					if (i == 57)
					{
						cout << "Your goti won.";
						path[i] = ' ';
						winblue++;
					}
				}
				if (z == 2 && j + x < 58)
				{
					j += x;
					path[j] = gotiblue[1];
					path[j - x] = ' ';
					if (j == 57)
					{
						cout << "Your goti won.";
						path[j] = ' ';
						winblue++;
					}
				}
				if (z == 3 && k + x < 58)
				{
					k += x;
					path[k] = gotiblue[2];
					path[k - x] = ' ';
					if (k == 57)
					{
						cout << "Your goti won.";
						path[k] = ' ';
						winblue++;
					}
				}
				if (z == 4 && l + x < 58)
				{
					l += x;
					path[l] = gotiblue[3];
					path[l - x] = ' ';
					if (l == 57)
					{
						cout << "Your goti won.";
						path[l] = ' ';
						winblue++;
					}
				}
			}
			if (countblue == 1 && i + x < 58)
			{
				i += x;
				path[i] = gotiblue[0];
				path[i - x] = ' ';
				if (i == 57)
				{
					cout << "Your goti won.";
					path[i] = ' ';
					winblue++;
				}
			}
			if (winblue == 4)
			{
				winner++;
				if (winner == 1)
					winner1 = "winner1 blue";
				if (winner == 2)
					winner2 = "winner2 blue";
				if (winner == 3)
					winner3 = "winner3 blue";
				else
					winner4 = "winner4 blue";
			}
			Sleep(1000);
			system("cls");
			graphics();
			if (x == 6)
				fblue(i, j, k, l, h);
			else
				fred(d, e, f, g, h);
		}
	}
}