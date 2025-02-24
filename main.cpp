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
void colorRedGraphics();
void colorBlueGraphics();
void colorYellowGraphics();
void colorGreenGraphics();
void colorTransparentGraphics();

char blue[12][12], red[12][12], yellow[12][12], green[12][12];
char path[72], gotiblue[4] = {'a', 'b', 'c', 'd'}, gotired[4] = {'e', 'f', 'g', 'h'}, gotiyellow[4] = {'i', 'j', 'k', 'l'}, gotigreen[4] = {'m', 'n', 'o', 'p'}, inputText, rollDice;
int countblue, countred, countgreen, countyellow, winblue, winred, wingreen, winyellow, winner, randomNumber, gotiNumber, d, e, f, g, i, j, k, l, m, n, o, p, q, r, s, t, noOfPlayers;
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
	cin >> inputText;
	if (inputText == 'y')
	{
	pp:
		cout << "Enter number of players(2-4): ";
		cin >> noOfPlayers;
		if (noOfPlayers == 2 || noOfPlayers == 3 || noOfPlayers == 4)
			fblue(i, j, k, l, noOfPlayers);
		else
			cout << "Invalid. ";
		goto pp;
	}
	if (inputText == 'n')
		cout << "GOODBYE!!!";

	return 0;
}
void colorRedGraphics()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | BACKGROUND_RED);
}
void colorBlueGraphics()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | BACKGROUND_BLUE);
}
void colorYellowGraphics()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | BACKGROUND_RED | BACKGROUND_GREEN);
}
void colorGreenGraphics()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | BACKGROUND_GREEN);
}
void colorTransparentGraphics()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
}

void graphics()
{
	for (int i = 0; i < 12; i++)
		for (int j = 0; j < 26; j++)
		{
			if (j < 12)
			{
				colorBlueGraphics();
				cout << blue[i][j];
			}
			else if (j == 12)
			{
				colorTransparentGraphics();
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
					colorRedGraphics();
					cout << path[57];
					colorTransparentGraphics();
					cout << char(179);
					colorRedGraphics();
					cout << path[13];
					colorTransparentGraphics();
					cout << char(186);
				}
				else if (i == 5)
				{
					cout << char(186);
					colorRedGraphics();
					cout << path[8];
					colorTransparentGraphics();
					cout << char(179);
					colorRedGraphics();
					cout << path[58];
					colorTransparentGraphics();
					cout << char(179) << path[14] << char(186);
				}
				else if (i == 7)
				{
					cout << char(186) << path[7] << char(179);
					colorRedGraphics();
					cout << path[59];
					colorTransparentGraphics();
					cout << char(179) << path[15] << char(186);
				}
				else if (i == 9)
				{
					cout << char(186) << path[6] << char(179);
					colorRedGraphics();
					cout << path[60];
					colorTransparentGraphics();
					cout << char(179) << path[16] << char(186);
				}
				else if (i == 11)
				{
					cout << char(186) << path[5] << char(179);
					colorRedGraphics();
					cout << path[61];
					colorTransparentGraphics();
					cout << char(179) << path[17] << char(186);
				}
			}
			else if (j < 25 && j > 12)
			{
				colorRedGraphics();
				cout << red[i][j - 13];
			}
			else if (j == 25)
			{
				cout << endl;
			}
		}
	colorTransparentGraphics();
	cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << char(218) << char(196) << char(196) << char(196) << char(191) << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
	cout << char(186) << path[51] << char(179);
	for (int i = 0; i < 57; i++)
	{
		if (i < 5)
		{
			if (i == 0)
				colorBlueGraphics();
			cout << path[i];
			colorTransparentGraphics();
			if (i < 4)
				cout << char(179);
		}
		else if (i == 5)
		{
			cout << " " << char(179) << "   " << char(179) << " ";
		}
		else if (i > 17 && i < 24)
		{
			if (i == 21)
				colorYellowGraphics();
			cout << path[i];
			colorTransparentGraphics();
			if (i < 23)
				cout << char(179);
			else if (i == 23)
				cout << char(186);
		}
		else if (i == 24)
		{
			cout << endl;
			cout << char(186) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(179) << "   " << char(179) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(186) << endl;
			cout << char(186) << path[50] << char(179);
		}
		else if (i > 51 && i < 57)
		{
			if (i > 51)
				colorBlueGraphics();
			cout << path[i];
			colorTransparentGraphics();
			if (i < 56)
				cout << char(179);
		}
	}
	cout << " " << char(179) << " " << char(178) << " " << char(179) << " ";
	for (int i = 66; i > 23; i--)
	{
		if (i > 61)
		{
			colorYellowGraphics();
			cout << path[i];
			colorTransparentGraphics();
			if (i > 61)
				cout << char(179);
		}
		else if (i == 61)
		{
			cout << path[24] << char(186);
			cout << endl;
			cout << char(186) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(179) << "   " << char(179) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(186) << endl;
		}
		else if (i < 50 && i > 43 || i < 31 && i > 24)
		{
			if (i == 49)
				cout << char(186);
			else if (i == 47)
				colorBlueGraphics();
			else if (i == 26)
				colorYellowGraphics();
			cout << path[i];
			colorTransparentGraphics();
			if (i == 25)
				cout << char(186);
			else if (i != 44 && i != 25)
				cout << char(179);
		}
		else if (i == 43)
		{
			cout << " " << char(179) << "   " << char(179) << " ";
		}
		else if (i == 24)
		{
			cout << endl;
			cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << char(192) << char(196) << char(196) << char(196) << char(217) << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
		}
	}
	for (int i = 0; i < 12; i++)
		for (int j = 0; j < 26; j++)
		{
			if (j < 12)
			{
				colorGreenGraphics();
				cout << green[i][j];
			}
			else if (j == 12)
			{
				colorTransparentGraphics();
				if (i == 0)
				{
					cout << char(186) << path[43] << char(179);
					colorGreenGraphics();
					cout << path[71];
					colorTransparentGraphics();
					cout << char(179) << path[31] << char(186);
				}
				else if (i % 2 != 0 && i != 11)
				{
					cout << char(186) << char(196) << char(179) << char(196) << char(179) << char(196) << char(186);
				}
				else if (i == 2)
				{
					cout << char(186) << path[42] << char(179);
					colorGreenGraphics();
					cout << path[70];
					colorTransparentGraphics();
					cout << char(179) << path[32] << char(186);
				}
				else if (i == 4)
				{
					cout << char(186) << path[41] << char(179);
					colorGreenGraphics();
					cout << path[69];
					colorTransparentGraphics();
					cout << char(179) << path[33] << char(186);
				}
				else if (i == 6)
				{
					cout << char(186) << path[40] << char(179);
					colorGreenGraphics();
					cout << path[68];
					colorTransparentGraphics();
					cout << char(179);
					colorGreenGraphics();
					cout << path[34];
					colorTransparentGraphics();
					cout << char(186);
				}
				else if (i == 8)
				{
					cout << char(186);
					colorGreenGraphics();
					cout << path[39];
					colorTransparentGraphics();
					cout << char(179);
					colorGreenGraphics();
					cout << path[67];
					colorTransparentGraphics();
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
				else if (i == 11)
				{
					cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);
				}
			}
			else if (j < 25 && j > 12)
			{
				colorYellowGraphics();
				cout << yellow[i][j - 13];
			}
			else if (j == 25)
			{
				colorTransparentGraphics();
				cout << endl;
			}
		}
}
void fgreen(int &q, int &r, int &s, int &t, int noOfPlayers)
{
	if (wingreen != 4)
	{
		cout << "It's the green turn.";
		srand(time(0));
		cout << "\nRoll dice by pressing any alphabet: ";
		cin >> rollDice;
		randomNumber = 1 + rand() % 6;
		cout << "Your dice gave: " << randomNumber << endl;
		if (q + randomNumber > 51 && q + randomNumber < 58)
		{
			path[q] = ' ';
			if (q + randomNumber == 52)
			{
				if (randomNumber == 1)
					q = -1;
				if (randomNumber == 2)
					q = -2;
				if (randomNumber == 3)
					q = -3;
				if (randomNumber == 4)
					q = -4;
				if (randomNumber == 5)
					q = -5;
				if (randomNumber == 6)
					q = -6;
			}
			if (q + randomNumber == 53)
			{
				if (randomNumber == 2)
					q = -1;
				if (randomNumber == 3)
					q = -2;
				if (randomNumber == 4)
					q = -3;
				if (randomNumber == 5)
					q = -4;
				if (randomNumber == 6)
					q = -5;
			}
			if (q + randomNumber == 54)
			{
				if (randomNumber == 3)
					q = -1;
				if (randomNumber == 4)
					q = -2;
				if (randomNumber == 5)
					q = -3;
				if (randomNumber == 6)
					q = -4;
			}
			if (q + randomNumber == 55)
			{
				if (randomNumber == 4)
					q = -1;
				if (randomNumber == 5)
					q = -2;
				if (randomNumber == 6)
					q = -3;
			}
			if (q + randomNumber == 56)
			{
				if (randomNumber == 5)
					q = -1;
				if (randomNumber == 6)
					q = -2;
			}
			if (q + randomNumber == 57)
			{
				if (randomNumber == 6)
					q = -1;
			}
		}
		if (q < 38)
		{
			if (q + randomNumber > 37 && q + randomNumber < 44)
			{
				path[q] = ' ';
				if (q + randomNumber == 38)
				{
					if (randomNumber == 1)
						q = 66;
					if (randomNumber == 2)
						q = 65;
					if (randomNumber == 3)
						q = 64;
					if (randomNumber == 4)
						q = 63;
					if (randomNumber == 5)
						q = 62;
					if (randomNumber == 6)
						q = 61;
				}
				if (q + randomNumber == 39)
				{
					if (randomNumber == 2)
						q = 66;
					if (randomNumber == 3)
						q = 65;
					if (randomNumber == 4)
						q = 64;
					if (randomNumber == 5)
						q = 63;
					if (randomNumber == 6)
						q = 62;
				}
				if (q + randomNumber == 40)
				{
					if (randomNumber == 3)
						q = 66;
					if (randomNumber == 4)
						q = 65;
					if (randomNumber == 5)
						q = 64;
					if (randomNumber == 6)
						q = 63;
				}
				if (q + randomNumber == 41)
				{
					if (randomNumber == 4)
						q = 66;
					if (randomNumber == 5)
						q = 65;
					if (randomNumber == 6)
						q = 64;
				}
				if (q + randomNumber == 42)
				{
					if (randomNumber == 5)
						q = 66;
					if (randomNumber == 6)
						q = 65;
				}
				if (q + randomNumber == 43)
				{
					if (randomNumber == 6)
						q = 66;
				}
			}
		}
		if (r + randomNumber > 51 && r + randomNumber < 58)
		{
			path[r] = ' ';
			if (r + randomNumber == 52)
			{
				if (randomNumber == 1)
					r = -1;
				if (randomNumber == 2)
					r = -2;
				if (randomNumber == 3)
					r = -3;
				if (randomNumber == 4)
					r = -4;
				if (randomNumber == 5)
					r = -5;
				if (randomNumber == 6)
					r = -6;
			}
			if (r + randomNumber == 53)
			{
				if (randomNumber == 2)
					r = -1;
				if (randomNumber == 3)
					r = -2;
				if (randomNumber == 4)
					r = -3;
				if (randomNumber == 5)
					r = -4;
				if (randomNumber == 6)
					r = -5;
			}
			if (r + randomNumber == 54)
			{
				if (randomNumber == 3)
					r = -1;
				if (randomNumber == 4)
					r = -2;
				if (randomNumber == 5)
					r = -3;
				if (randomNumber == 6)
					r = -4;
			}
			if (r + randomNumber == 55)
			{
				if (randomNumber == 4)
					r = -1;
				if (randomNumber == 5)
					r = -2;
				if (randomNumber == 6)
					r = -3;
			}
			if (r + randomNumber == 56)
			{
				if (randomNumber == 5)
					r = -1;
				if (randomNumber == 6)
					r = -2;
			}
			if (r + randomNumber == 57)
			{
				if (randomNumber == 6)
					r = -1;
			}
		}
		if (r < 38)
		{
			if (r + randomNumber > 37 && r + randomNumber < 44)
			{
				path[r] = ' ';
				if (r + randomNumber == 38)
				{
					if (randomNumber == 1)
						r = 66;
					if (randomNumber == 2)
						r = 65;
					if (randomNumber == 3)
						r = 64;
					if (randomNumber == 4)
						r = 63;
					if (randomNumber == 5)
						r = 62;
					if (randomNumber == 6)
						r = 61;
				}
				if (r + randomNumber == 39)
				{
					if (randomNumber == 2)
						r = 66;
					if (randomNumber == 3)
						r = 65;
					if (randomNumber == 4)
						r = 64;
					if (randomNumber == 5)
						r = 63;
					if (randomNumber == 6)
						r = 62;
				}
				if (r + randomNumber == 40)
				{
					if (randomNumber == 3)
						r = 66;
					if (randomNumber == 4)
						r = 65;
					if (randomNumber == 5)
						r = 64;
					if (randomNumber == 6)
						r = 63;
				}
				if (r + randomNumber == 41)
				{
					if (randomNumber == 4)
						r = 66;
					if (randomNumber == 5)
						r = 65;
					if (randomNumber == 6)
						r = 64;
				}
				if (r + randomNumber == 42)
				{
					if (randomNumber == 5)
						r = 66;
					if (randomNumber == 6)
						r = 65;
				}
				if (r + randomNumber == 43)
				{
					if (randomNumber == 6)
						r = 66;
				}
			}
		}
		if (s + randomNumber > 51 && s + randomNumber < 58)
		{
			path[s] = ' ';
			if (s + randomNumber == 52)
			{
				if (randomNumber == 1)
					s = -1;
				if (randomNumber == 2)
					s = -2;
				if (randomNumber == 3)
					s = -3;
				if (randomNumber == 4)
					s = -4;
				if (randomNumber == 5)
					s = -5;
				if (randomNumber == 6)
					s = -6;
			}
			if (s + randomNumber == 53)
			{
				if (randomNumber == 2)
					s = -1;
				if (randomNumber == 3)
					s = -2;
				if (randomNumber == 4)
					s = -3;
				if (randomNumber == 5)
					s = -4;
				if (randomNumber == 6)
					s = -5;
			}
			if (s + randomNumber == 54)
			{
				if (randomNumber == 3)
					s = -1;
				if (randomNumber == 4)
					s = -2;
				if (randomNumber == 5)
					s = -3;
				if (randomNumber == 6)
					s = -4;
			}
			if (s + randomNumber == 55)
			{
				if (randomNumber == 4)
					s = -1;
				if (randomNumber == 5)
					s = -2;
				if (randomNumber == 6)
					s = -3;
			}
			if (s + randomNumber == 56)
			{
				if (randomNumber == 5)
					s = -1;
				if (randomNumber == 6)
					s = -2;
			}
			if (s + randomNumber == 57)
			{
				if (randomNumber == 6)
					s = -1;
			}
		}
		if (s < 38)
		{
			if (s + randomNumber > 37 && s + randomNumber < 44)
			{
				path[s] = ' ';
				if (s + randomNumber == 38)
				{
					if (randomNumber == 1)
						s = 66;
					if (randomNumber == 2)
						s = 65;
					if (randomNumber == 3)
						s = 64;
					if (randomNumber == 4)
						s = 63;
					if (randomNumber == 5)
						s = 62;
					if (randomNumber == 6)
						s = 61;
				}
				if (s + randomNumber == 39)
				{
					if (randomNumber == 2)
						s = 66;
					if (randomNumber == 3)
						s = 65;
					if (randomNumber == 4)
						s = 64;
					if (randomNumber == 5)
						s = 63;
					if (randomNumber == 6)
						s = 62;
				}
				if (s + randomNumber == 40)
				{
					if (randomNumber == 3)
						s = 66;
					if (randomNumber == 4)
						s = 65;
					if (randomNumber == 5)
						s = 64;
					if (randomNumber == 6)
						s = 63;
				}
				if (s + randomNumber == 41)
				{
					if (randomNumber == 4)
						s = 66;
					if (randomNumber == 5)
						s = 65;
					if (randomNumber == 6)
						s = 64;
				}
				if (s + randomNumber == 42)
				{
					if (randomNumber == 5)
						s = 66;
					if (randomNumber == 6)
						s = 65;
				}
				if (s + randomNumber == 43)
				{
					if (randomNumber == 6)
						s = 66;
				}
			}
		}
		if (randomNumber != 6 && countgreen == 0)
		{
			cout << "You cannot move. ";
			Sleep(1000);
			system("cls");
			graphics();
			fblue(i, j, k, l, noOfPlayers);
		}
		if (randomNumber == 6 && countgreen == 0)
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
			fgreen(q, r, s, t, noOfPlayers);
		}
		if (randomNumber == 6 && countgreen != 0 && countgreen < 4)
		{
			cout << "You want to move 'y' or take another goti out 'o': ";
			cin >> rollDice;
			if (rollDice == 'y')
			{
				if (countgreen > 1)
				{
					cout << "Which goti you want to move: ";
					cin >> gotiNumber;
					if (gotiNumber == 1 && q + randomNumber < 73)
					{
						q += randomNumber;
						path[q] = gotigreen[0];
						path[q - randomNumber] = ' ';
						if (q == 72)
						{
							cout << "Your goti won.";
							path[q] = ' ';
							wingreen++;
						}
					}
					else if (gotiNumber == 2 && r + randomNumber < 73)
					{
						r += randomNumber;
						path[r] = gotigreen[1];
						path[r - randomNumber] = ' ';
						if (r == 72)
						{
							cout << "Your goti won.";
							path[r] = ' ';
							wingreen++;
						}
					}
					else if (gotiNumber == 3 && s + randomNumber < 73)
					{
						s += randomNumber;
						path[s] = gotigreen[2];
						path[s - randomNumber] = ' ';
						if (s == 72)
						{
							cout << "Your goti won.";
							path[s] = ' ';
							wingreen++;
						}
					}
					else if (gotiNumber == 4 && t + randomNumber < 73)
					{
						t += randomNumber;
						path[t] = gotigreen[3];
						path[t - randomNumber] = ' ';
						if (t == 72)
						{
							cout << "Your goti won.";
							path[t] = ' ';
							wingreen++;
						}
					}
				}
				if (countgreen == 1 && q + randomNumber < 73)
				{
					q += randomNumber;
					path[q] = gotigreen[0];
					path[q - randomNumber] = ' ';
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
				fgreen(q, r, s, t, noOfPlayers);
			}
			else if (rollDice == 'o')
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
				fgreen(q, r, s, t, noOfPlayers);
			}
		}
		if (randomNumber < 6 && countgreen != 0 || randomNumber == 6 && countgreen == 4)
		{
			if (countgreen > 1)
			{
				cout << "Which goti you want to move: ";
				cin >> gotiNumber;
				if (gotiNumber == 1 && q + randomNumber < 73)
				{
					q += randomNumber;
					path[q] = gotigreen[0];
					path[q - randomNumber] = ' ';
					if (q == 72)
					{
						cout << "Your goti won.";
						path[q] = ' ';
						wingreen++;
					}
				}
				else if (gotiNumber == 2 && r + randomNumber < 73)
				{
					r += randomNumber;
					path[r] = gotigreen[1];
					path[r - randomNumber] = ' ';
					if (r == 72)
					{
						cout << "Your goti won.";
						path[r] = ' ';
						wingreen++;
					}
				}
				else if (gotiNumber == 3 && s + randomNumber < 73)
				{
					s += randomNumber;
					path[s] = gotigreen[2];
					path[s - randomNumber] = ' ';
					if (s == 72)
					{
						cout << "Your goti won.";
						path[s] = ' ';
						wingreen++;
					}
				}
				else if (gotiNumber == 4 && t + randomNumber < 73)
				{
					t += randomNumber;
					path[t] = gotigreen[3];
					path[t - randomNumber] = ' ';
					if (t == 72)
					{
						cout << "Your goti won.";
						path[t] = ' ';
						wingreen++;
					}
				}
			}
			if (countgreen == 1 && q + randomNumber < 73)
			{
				q += randomNumber;
				path[q] = gotigreen[0];
				path[q - randomNumber] = ' ';
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
			if (randomNumber == 6)
				fgreen(q, r, s, t, noOfPlayers);
			if (randomNumber < 6)
				fblue(i, j, k, l, noOfPlayers);
		}
	}
}
void fyellow(int &m, int &n, int &o, int &p, int noOfPlayers)
{
	if (winyellow != 4)
	{
		cout << "It's the yellow turn.";
		srand(time(0));
		cout << "\nRoll dice by pressing any alphabet: ";
		cin >> rollDice;
		randomNumber = 1 + rand() % 6;
		cout << "Your dice gave: " << randomNumber << endl;
		if (randomNumber != 6 && countyellow == 0)
		{
			cout << "You cannot move. ";
			Sleep(1000);
			system("cls");
			graphics();
			if (noOfPlayers == 3)
				fblue(i, j, k, l, noOfPlayers);
			else
				fgreen(q, r, s, t, noOfPlayers);
		}
		if (m + randomNumber > 51 && m + randomNumber < 58)
		{
			path[m] = ' ';
			if (m + randomNumber == 52)
			{
				if (randomNumber == 1)
					m = -1;
				if (randomNumber == 2)
					m = -2;
				if (randomNumber == 3)
					m = -3;
				if (randomNumber == 4)
					m = -4;
				if (randomNumber == 5)
					m = -5;
				if (randomNumber == 6)
					m = -6;
			}
			if (m + randomNumber == 53)
			{
				if (randomNumber == 2)
					m = -1;
				if (randomNumber == 3)
					m = -2;
				if (randomNumber == 4)
					m = -3;
				if (randomNumber == 5)
					m = -4;
				if (randomNumber == 6)
					m = -5;
			}
			if (m + randomNumber == 54)
			{
				if (randomNumber == 3)
					m = -1;
				if (randomNumber == 4)
					m = -2;
				if (randomNumber == 5)
					m = -3;
				if (randomNumber == 6)
					m = -4;
			}
			if (m + randomNumber == 55)
			{
				if (randomNumber == 4)
					m = -1;
				if (randomNumber == 5)
					m = -2;
				if (randomNumber == 6)
					m = -3;
			}
			if (m + randomNumber == 56)
			{
				if (randomNumber == 5)
					m = -1;
				if (randomNumber == 6)
					m = -2;
			}
			if (m + randomNumber == 57)
			{
				if (randomNumber == 6)
					m = -1;
			}
		}
		if (m < 25)
		{
			if (m + randomNumber > 24 && m + randomNumber < 31)
			{
				path[m] = ' ';
				if (m + randomNumber == 25)
				{
					if (randomNumber == 1)
						m = 61;
					if (randomNumber == 2)
						m = 60;
					if (randomNumber == 3)
						m = 59;
					if (randomNumber == 4)
						m = 58;
					if (randomNumber == 5)
						m = 57;
					if (randomNumber == 6)
						m = 56;
				}
				if (m + randomNumber == 26)
				{
					if (randomNumber == 2)
						m = 61;
					if (randomNumber == 3)
						m = 60;
					if (randomNumber == 4)
						m = 59;
					if (randomNumber == 5)
						m = 58;
					if (randomNumber == 6)
						m = 57;
				}
				if (m + randomNumber == 27)
				{
					if (randomNumber == 3)
						m = 61;
					if (randomNumber == 4)
						m = 60;
					if (randomNumber == 5)
						m = 59;
					if (randomNumber == 6)
						m = 58;
				}
				if (m + randomNumber == 28)
				{
					if (randomNumber == 4)
						m = 61;
					if (randomNumber == 5)
						m = 60;
					if (randomNumber == 6)
						m = 59;
				}
				if (m + randomNumber == 29)
				{
					if (randomNumber == 5)
						m = 61;
					if (randomNumber == 6)
						m = 60;
				}
				if (m + randomNumber == 17)
				{
					if (randomNumber == 6)
						m = 61;
				}
			}
		}
		if (n + randomNumber > 51 && n + randomNumber < 58)
		{
			path[n] = ' ';
			if (n + randomNumber == 52)
			{
				if (randomNumber == 1)
					n = -1;
				if (randomNumber == 2)
					n = -2;
				if (randomNumber == 3)
					n = -3;
				if (randomNumber == 4)
					n = -4;
				if (randomNumber == 5)
					n = -5;
				if (randomNumber == 6)
					n = -6;
			}
			if (n + randomNumber == 53)
			{
				if (randomNumber == 2)
					n = -1;
				if (randomNumber == 3)
					n = -2;
				if (randomNumber == 4)
					n = -3;
				if (randomNumber == 5)
					n = -4;
				if (randomNumber == 6)
					n = -5;
			}
			if (n + randomNumber == 54)
			{
				if (randomNumber == 3)
					n = -1;
				if (randomNumber == 4)
					n = -2;
				if (randomNumber == 5)
					n = -3;
				if (randomNumber == 6)
					n = -4;
			}
			if (n + randomNumber == 55)
			{
				if (randomNumber == 4)
					n = -1;
				if (randomNumber == 5)
					n = -2;
				if (randomNumber == 6)
					n = -3;
			}
			if (n + randomNumber == 56)
			{
				if (randomNumber == 5)
					n = -1;
				if (randomNumber == 6)
					n = -2;
			}
			if (n + randomNumber == 57)
			{
				if (randomNumber == 6)
					n = -1;
			}
		}
		if (n < 25)
		{
			if (n + randomNumber > 24 && n + randomNumber < 31)
			{
				path[n] = ' ';
				if (n + randomNumber == 25)
				{
					if (randomNumber == 1)
						n = 61;
					if (randomNumber == 2)
						n = 60;
					if (randomNumber == 3)
						n = 59;
					if (randomNumber == 4)
						n = 58;
					if (randomNumber == 5)
						n = 57;
					if (randomNumber == 6)
						n = 56;
				}
				if (n + randomNumber == 26)
				{
					if (randomNumber == 2)
						n = 61;
					if (randomNumber == 3)
						n = 60;
					if (randomNumber == 4)
						n = 59;
					if (randomNumber == 5)
						n = 58;
					if (randomNumber == 6)
						n = 57;
				}
				if (n + randomNumber == 27)
				{
					if (randomNumber == 3)
						n = 61;
					if (randomNumber == 4)
						n = 60;
					if (randomNumber == 5)
						n = 59;
					if (randomNumber == 6)
						n = 58;
				}
				if (n + randomNumber == 28)
				{
					if (randomNumber == 4)
						n = 61;
					if (randomNumber == 5)
						n = 60;
					if (randomNumber == 6)
						n = 59;
				}
				if (n + randomNumber == 29)
				{
					if (randomNumber == 5)
						n = 61;
					if (randomNumber == 6)
						n = 60;
				}
				if (n + randomNumber == 17)
				{
					if (randomNumber == 6)
						n = 61;
				}
			}
		}
		if (o + randomNumber > 51 && o + randomNumber < 58)
		{
			path[o] = ' ';
			if (o + randomNumber == 52)
			{
				if (randomNumber == 1)
					o = -1;
				if (randomNumber == 2)
					o = -2;
				if (randomNumber == 3)
					o = -3;
				if (randomNumber == 4)
					o = -4;
				if (randomNumber == 5)
					o = -5;
				if (randomNumber == 6)
					o = -6;
			}
			if (o + randomNumber == 53)
			{
				if (randomNumber == 2)
					o = -1;
				if (randomNumber == 3)
					o = -2;
				if (randomNumber == 4)
					o = -3;
				if (randomNumber == 5)
					o = -4;
				if (randomNumber == 6)
					o = -5;
			}
			if (o + randomNumber == 54)
			{
				if (randomNumber == 3)
					o = -1;
				if (randomNumber == 4)
					o = -2;
				if (randomNumber == 5)
					o = -3;
				if (randomNumber == 6)
					o = -4;
			}
			if (o + randomNumber == 55)
			{
				if (randomNumber == 4)
					o = -1;
				if (randomNumber == 5)
					o = -2;
				if (randomNumber == 6)
					o = -3;
			}
			if (o + randomNumber == 56)
			{
				if (randomNumber == 5)
					o = -1;
				if (randomNumber == 6)
					o = -2;
			}
			if (o + randomNumber == 57)
			{
				if (randomNumber == 6)
					o = -1;
			}
		}
		if (o < 25)
		{
			if (o + randomNumber > 24 && o + randomNumber < 31)
			{
				path[o] = ' ';
				if (o + randomNumber == 25)
				{
					if (randomNumber == 1)
						o = 61;
					if (randomNumber == 2)
						o = 60;
					if (randomNumber == 3)
						o = 59;
					if (randomNumber == 4)
						o = 58;
					if (randomNumber == 5)
						o = 57;
					if (randomNumber == 6)
						o = 56;
				}
				if (o + randomNumber == 26)
				{
					if (randomNumber == 2)
						o = 61;
					if (randomNumber == 3)
						o = 60;
					if (randomNumber == 4)
						o = 59;
					if (randomNumber == 5)
						o = 58;
					if (randomNumber == 6)
						o = 57;
				}
				if (o + randomNumber == 27)
				{
					if (randomNumber == 3)
						o = 61;
					if (randomNumber == 4)
						o = 60;
					if (randomNumber == 5)
						o = 59;
					if (randomNumber == 6)
						o = 58;
				}
				if (o + randomNumber == 28)
				{
					if (randomNumber == 4)
						o = 61;
					if (randomNumber == 5)
						o = 60;
					if (randomNumber == 6)
						o = 59;
				}
				if (o + randomNumber == 29)
				{
					if (randomNumber == 5)
						o = 61;
					if (randomNumber == 6)
						o = 60;
				}
				if (o + randomNumber == 17)
				{
					if (randomNumber == 6)
						o = 61;
				}
			}
		}
		if (p + randomNumber > 51 && p + randomNumber < 58)
		{
			path[p] = ' ';
			if (p + randomNumber == 52)
			{
				if (randomNumber == 1)
					p = -1;
				if (randomNumber == 2)
					p = -2;
				if (randomNumber == 3)
					p = -3;
				if (randomNumber == 4)
					p = -4;
				if (randomNumber == 5)
					p = -5;
				if (randomNumber == 6)
					p = -6;
			}
			if (p + randomNumber == 53)
			{
				if (randomNumber == 2)
					p = -1;
				if (randomNumber == 3)
					p = -2;
				if (randomNumber == 4)
					p = -3;
				if (randomNumber == 5)
					p = -4;
				if (randomNumber == 6)
					p = -5;
			}
			if (p + randomNumber == 54)
			{
				if (randomNumber == 3)
					p = -1;
				if (randomNumber == 4)
					p = -2;
				if (randomNumber == 5)
					p = -3;
				if (randomNumber == 6)
					p = -4;
			}
			if (p + randomNumber == 55)
			{
				if (randomNumber == 4)
					p = -1;
				if (randomNumber == 5)
					p = -2;
				if (randomNumber == 6)
					p = -3;
			}
			if (p + randomNumber == 56)
			{
				if (randomNumber == 5)
					p = -1;
				if (randomNumber == 6)
					p = -2;
			}
			if (p + randomNumber == 57)
			{
				if (randomNumber == 6)
					p = -1;
			}
		}
		if (p < 25)
		{
			if (p + randomNumber > 24 && p + randomNumber < 31)
			{
				path[p] = ' ';
				if (p + randomNumber == 25)
				{
					if (randomNumber == 1)
						p = 61;
					if (randomNumber == 2)
						p = 60;
					if (randomNumber == 3)
						p = 59;
					if (randomNumber == 4)
						p = 58;
					if (randomNumber == 5)
						p = 57;
					if (randomNumber == 6)
						p = 56;
				}
				if (p + randomNumber == 26)
				{
					if (randomNumber == 2)
						p = 61;
					if (randomNumber == 3)
						p = 60;
					if (randomNumber == 4)
						p = 59;
					if (randomNumber == 5)
						p = 58;
					if (randomNumber == 6)
						p = 57;
				}
				if (p + randomNumber == 27)
				{
					if (randomNumber == 3)
						p = 61;
					if (randomNumber == 4)
						p = 60;
					if (randomNumber == 5)
						p = 59;
					if (randomNumber == 6)
						p = 58;
				}
				if (p + randomNumber == 28)
				{
					if (randomNumber == 4)
						p = 61;
					if (randomNumber == 5)
						p = 60;
					if (randomNumber == 6)
						p = 59;
				}
				if (p + randomNumber == 29)
				{
					if (randomNumber == 5)
						p = 61;
					if (randomNumber == 6)
						p = 60;
				}
				if (p + randomNumber == 17)
				{
					if (randomNumber == 6)
						p = 61;
				}
			}
		}
		if (randomNumber == 6 && countyellow == 0)
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
			fyellow(m, n, o, p, noOfPlayers);
		}
		if (randomNumber == 6 && countyellow != 0 && countyellow < 4)
		{
			cout << "You want to move 'y' or take another goti out 'o': ";
			cin >> rollDice;
			if (rollDice == 'y')
			{
				if (countyellow > 1)
				{
					cout << "Which goti you want to move: ";
					cin >> gotiNumber;
					if (gotiNumber == 1 && m + randomNumber < 68)
					{
						m += randomNumber;
						path[m] = gotiyellow[0];
						path[m - randomNumber] = ' ';
						if (m == 67)
						{
							cout << "Your goti won.";
							path[m] = ' ';
							winyellow++;
						}
					}
					else if (gotiNumber == 2 && n + randomNumber < 68)
					{
						n += randomNumber;
						path[n] = gotiyellow[1];
						path[n - randomNumber] = ' ';
						if (n == 67)
						{
							cout << "Your goti won.";
							path[n] = ' ';
							winyellow++;
						}
					}
					else if (gotiNumber == 3 && o + randomNumber < 68)
					{
						o += randomNumber;
						path[o] = gotiyellow[2];
						path[o - randomNumber] = ' ';
						if (o == 67)
						{
							cout << "Your goti won.";
							path[o] = ' ';
							winyellow++;
						}
					}
					else if (gotiNumber == 4 && p + randomNumber < 68)
					{
						p += randomNumber;
						path[p] = gotiyellow[3];
						path[p - randomNumber] = ' ';
						if (p == 67)
						{
							cout << "Your goti won.";
							path[p] = ' ';
							winyellow++;
						}
					}
				}
				if (countyellow == 1 && m + randomNumber < 68)
				{
					m += randomNumber;
					path[m] = gotiyellow[0];
					path[m - randomNumber] = ' ';
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
				fyellow(m, n, o, p, noOfPlayers);
			}
			else if (rollDice == 'o')
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
				fyellow(m, n, o, p, noOfPlayers);
			}
		}
		if (randomNumber < 6 && countyellow != 0 || randomNumber == 6 && countyellow == 4)
		{
			if (countyellow > 1)
			{
				cout << "Which goti you want to move: ";
				cin >> gotiNumber;
				if (gotiNumber == 1 && m + randomNumber < 68)
				{
					m += randomNumber;
					path[m] = gotiyellow[0];
					path[m - randomNumber] = ' ';
					if (m == 67)
					{
						cout << "Your goti won.";
						path[m] = ' ';
						winyellow++;
					}
				}
				else if (gotiNumber == 2 && n + randomNumber < 68)
				{
					n += randomNumber;
					path[n] = gotiyellow[1];
					path[n - randomNumber] = ' ';
					if (n == 67)
					{
						cout << "Your goti won.";
						path[n] = ' ';
						winyellow++;
					}
				}
				else if (gotiNumber == 3 && o + randomNumber < 68)
				{
					o += randomNumber;
					path[o] = gotiyellow[2];
					path[o - randomNumber] = ' ';
					if (o == 67)
					{
						cout << "Your goti won.";
						path[o] = ' ';
						winyellow++;
					}
				}
				else if (gotiNumber == 4 && p + randomNumber < 68)
				{
					p += randomNumber;
					path[p] = gotiyellow[3];
					path[p - randomNumber] = ' ';
					if (p == 67)
					{
						cout << "Your goti won.";
						path[p] = ' ';
						winyellow++;
					}
				}
			}
			if (countyellow == 1 && m + randomNumber < 68)
			{
				m += randomNumber;
				path[m] = gotiyellow[0];
				path[m - randomNumber] = ' ';
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
			if (randomNumber == 6)
				fyellow(m, n, o, p, noOfPlayers);
			if (noOfPlayers == 3 && randomNumber < 6)
				fblue(i, j, k, l, noOfPlayers);
			if (noOfPlayers == 4 && randomNumber < 6)
				fgreen(q, r, s, t, noOfPlayers);
		}
	}
}
void fred(int &d, int &e, int &f, int &g, int noOfPlayers)
{
	if (winred != 4)
	{
		cout << "It's the red turn.";
		srand(time(0));
		cout << "\nRoll dice by pressing any alphabet: ";
		cin >> rollDice;
		randomNumber = 1 + rand() % 6;
		cout << "Your dice gave: " << randomNumber << endl;
		if (d + randomNumber > 51 && d + randomNumber < 58)
		{
			path[d] = ' ';
			if (d + randomNumber == 52)
			{
				if (randomNumber == 1)
					d = -1;
				if (randomNumber == 2)
					d = -2;
				if (randomNumber == 3)
					d = -3;
				if (randomNumber == 4)
					d = -4;
				if (randomNumber == 5)
					d = -5;
				if (randomNumber == 6)
					d = -6;
			}
			if (d + randomNumber == 53)
			{
				if (randomNumber == 2)
					d = -1;
				if (randomNumber == 3)
					d = -2;
				if (randomNumber == 4)
					d = -3;
				if (randomNumber == 5)
					d = -4;
				if (randomNumber == 6)
					d = -5;
			}
			if (d + randomNumber == 54)
			{
				if (randomNumber == 3)
					d = -1;
				if (randomNumber == 4)
					d = -2;
				if (randomNumber == 5)
					d = -3;
				if (randomNumber == 6)
					d = -4;
			}
			if (d + randomNumber == 55)
			{
				if (randomNumber == 4)
					d = -1;
				if (randomNumber == 5)
					d = -2;
				if (randomNumber == 6)
					d = -3;
			}
			if (d + randomNumber == 56)
			{
				if (randomNumber == 5)
					d = -1;
				if (randomNumber == 6)
					d = -2;
			}
			if (d + randomNumber == 57)
			{
				if (randomNumber == 6)
					d = -1;
			}
		}
		if (d < 12)
		{
			if (d + randomNumber > 11 && d + randomNumber < 18)
			{
				path[d] = ' ';
				if (d + randomNumber == 12)
				{
					if (randomNumber == 1)
						d = 56;
					if (randomNumber == 2)
						d = 55;
					if (randomNumber == 3)
						d = 54;
					if (randomNumber == 4)
						d = 53;
					if (randomNumber == 5)
						d = 52;
					if (randomNumber == 6)
						d = 51;
				}
				if (d + randomNumber == 13)
				{
					if (randomNumber == 2)
						d = 56;
					if (randomNumber == 3)
						d = 55;
					if (randomNumber == 4)
						d = 54;
					if (randomNumber == 5)
						d = 53;
					if (randomNumber == 6)
						d = 52;
				}
				if (d + randomNumber == 14)
				{
					if (randomNumber == 3)
						d = 56;
					if (randomNumber == 4)
						d = 55;
					if (randomNumber == 5)
						d = 54;
					if (randomNumber == 6)
						d = 53;
				}
				if (d + randomNumber == 15)
				{
					if (randomNumber == 4)
						d = 56;
					if (randomNumber == 5)
						d = 55;
					if (randomNumber == 6)
						d = 54;
				}
				if (d + randomNumber == 16)
				{
					if (randomNumber == 5)
						d = 56;
					if (randomNumber == 6)
						d = 55;
				}
				if (d + randomNumber == 17)
				{
					if (randomNumber == 6)
						d = 56;
				}
			}
		}
		if (e + randomNumber > 51 && e + randomNumber < 58)
		{
			path[e] = ' ';
			if (e + randomNumber == 52)
			{
				if (randomNumber == 1)
					e = -1;
				if (randomNumber == 2)
					e = -2;
				if (randomNumber == 3)
					e = -3;
				if (randomNumber == 4)
					e = -4;
				if (randomNumber == 5)
					e = -5;
				if (randomNumber == 6)
					e = -6;
			}
			if (e + randomNumber == 53)
			{
				if (randomNumber == 2)
					e = -1;
				if (randomNumber == 3)
					e = -2;
				if (randomNumber == 4)
					e = -3;
				if (randomNumber == 5)
					e = -4;
				if (randomNumber == 6)
					e = -5;
			}
			if (e + randomNumber == 54)
			{
				if (randomNumber == 3)
					e = -1;
				if (randomNumber == 4)
					e = -2;
				if (randomNumber == 5)
					e = -3;
				if (randomNumber == 6)
					e = -4;
			}
			if (e + randomNumber == 55)
			{
				if (randomNumber == 4)
					e = -1;
				if (randomNumber == 5)
					e = -2;
				if (randomNumber == 6)
					e = -3;
			}
			if (e + randomNumber == 56)
			{
				if (randomNumber == 5)
					e = -1;
				if (randomNumber == 6)
					e = -2;
			}
			if (e + randomNumber == 57)
			{
				if (randomNumber == 6)
					e = -1;
			}
		}
		if (e < 12)
		{
			if (e + randomNumber > 11 && e + randomNumber < 18)
			{
				path[e] = ' ';
				if (e + randomNumber == 12)
				{
					if (randomNumber == 1)
						e = 56;
					if (randomNumber == 2)
						e = 55;
					if (randomNumber == 3)
						e = 54;
					if (randomNumber == 4)
						e = 53;
					if (randomNumber == 5)
						e = 52;
					if (randomNumber == 6)
						e = 51;
				}
				if (e + randomNumber == 13)
				{
					if (randomNumber == 2)
						e = 56;
					if (randomNumber == 3)
						e = 55;
					if (randomNumber == 4)
						e = 54;
					if (randomNumber == 5)
						e = 53;
					if (randomNumber == 6)
						e = 52;
				}
				if (e + randomNumber == 14)
				{
					if (randomNumber == 3)
						e = 56;
					if (randomNumber == 4)
						e = 55;
					if (randomNumber == 5)
						e = 54;
					if (randomNumber == 6)
						e = 53;
				}
				if (e + randomNumber == 15)
				{
					if (randomNumber == 4)
						e = 56;
					if (randomNumber == 5)
						e = 55;
					if (randomNumber == 6)
						e = 54;
				}
				if (e + randomNumber == 16)
				{
					if (randomNumber == 5)
						e = 56;
					if (randomNumber == 6)
						e = 55;
				}
				if (e + randomNumber == 17)
				{
					if (randomNumber == 6)
						e = 56;
				}
			}
		}
		if (f + randomNumber > 51 && f + randomNumber < 58)
		{
			path[f] = ' ';
			if (f + randomNumber == 52)
			{
				if (randomNumber == 1)
					f = -1;
				if (randomNumber == 2)
					f = -2;
				if (randomNumber == 3)
					f = -3;
				if (randomNumber == 4)
					f = -4;
				if (randomNumber == 5)
					f = -5;
				if (randomNumber == 6)
					f = -6;
			}
			if (f + randomNumber == 53)
			{
				if (randomNumber == 2)
					f = -1;
				if (randomNumber == 3)
					f = -2;
				if (randomNumber == 4)
					f = -3;
				if (randomNumber == 5)
					f = -4;
				if (randomNumber == 6)
					f = -5;
			}
			if (f + randomNumber == 54)
			{
				if (randomNumber == 3)
					f = -1;
				if (randomNumber == 4)
					f = -2;
				if (randomNumber == 5)
					f = -3;
				if (randomNumber == 6)
					f = -4;
			}
			if (f + randomNumber == 55)
			{
				if (randomNumber == 4)
					f = -1;
				if (randomNumber == 5)
					f = -2;
				if (randomNumber == 6)
					f = -3;
			}
			if (f + randomNumber == 56)
			{
				if (randomNumber == 5)
					f = -1;
				if (randomNumber == 6)
					f = -2;
			}
			if (f + randomNumber == 57)
			{
				if (randomNumber == 6)
					f = -1;
			}
		}
		if (f < 12)
		{
			if (f + randomNumber > 11 && f + randomNumber < 18)
			{
				path[f] = ' ';
				if (f + randomNumber == 12)
				{
					if (randomNumber == 1)
						f = 56;
					if (randomNumber == 2)
						f = 55;
					if (randomNumber == 3)
						f = 54;
					if (randomNumber == 4)
						f = 53;
					if (randomNumber == 5)
						f = 52;
					if (randomNumber == 6)
						f = 51;
				}
				if (f + randomNumber == 13)
				{
					if (randomNumber == 2)
						f = 56;
					if (randomNumber == 3)
						f = 55;
					if (randomNumber == 4)
						f = 54;
					if (randomNumber == 5)
						f = 53;
					if (randomNumber == 6)
						f = 52;
				}
				if (f + randomNumber == 14)
				{
					if (randomNumber == 3)
						f = 56;
					if (randomNumber == 4)
						f = 55;
					if (randomNumber == 5)
						f = 54;
					if (randomNumber == 6)
						f = 53;
				}
				if (f + randomNumber == 15)
				{
					if (randomNumber == 4)
						f = 56;
					if (randomNumber == 5)
						f = 55;
					if (randomNumber == 6)
						f = 54;
				}
				if (f + randomNumber == 16)
				{
					if (randomNumber == 5)
						f = 56;
					if (randomNumber == 6)
						f = 55;
				}
				if (f + randomNumber == 17)
				{
					if (randomNumber == 6)
						f = 56;
				}
			}
		}
		if (g + randomNumber > 51 && g + randomNumber < 58)
		{
			path[g] = ' ';
			if (g + randomNumber == 52)
			{
				if (randomNumber == 1)
					g = -1;
				if (randomNumber == 2)
					g = -2;
				if (randomNumber == 3)
					g = -3;
				if (randomNumber == 4)
					g = -4;
				if (randomNumber == 5)
					g = -5;
				if (randomNumber == 6)
					g = -6;
			}
			if (g + randomNumber == 53)
			{
				if (randomNumber == 2)
					g = -1;
				if (randomNumber == 3)
					g = -2;
				if (randomNumber == 4)
					g = -3;
				if (randomNumber == 5)
					g = -4;
				if (randomNumber == 6)
					g = -5;
			}
			if (g + randomNumber == 54)
			{
				if (randomNumber == 3)
					g = -1;
				if (randomNumber == 4)
					g = -2;
				if (randomNumber == 5)
					g = -3;
				if (randomNumber == 6)
					g = -4;
			}
			if (g + randomNumber == 55)
			{
				if (randomNumber == 4)
					g = -1;
				if (randomNumber == 5)
					g = -2;
				if (randomNumber == 6)
					g = -3;
			}
			if (g + randomNumber == 56)
			{
				if (randomNumber == 5)
					g = -1;
				if (randomNumber == 6)
					g = -2;
			}
			if (g + randomNumber == 57)
			{

				if (randomNumber == 6)
					g = -1;
			}
		}
		if (g < 12)
		{
			if (g + randomNumber > 11 && g + randomNumber < 18)
			{
				path[g] = ' ';
				if (g + randomNumber == 12)
				{
					if (randomNumber == 1)
						g = 56;
					if (randomNumber == 2)
						g = 55;
					if (randomNumber == 3)
						g = 54;
					if (randomNumber == 4)
						g = 53;
					if (randomNumber == 5)
						g = 52;
					if (randomNumber == 6)
						g = 51;
				}
				if (g + randomNumber == 13)
				{
					if (randomNumber == 2)
						g = 56;
					if (randomNumber == 3)
						g = 55;
					if (randomNumber == 4)
						g = 54;
					if (randomNumber == 5)
						g = 53;
					if (randomNumber == 6)
						g = 52;
				}
				if (g + randomNumber == 14)
				{
					if (randomNumber == 3)
						g = 56;
					if (randomNumber == 4)
						g = 55;
					if (randomNumber == 5)
						g = 54;
					if (randomNumber == 6)
						g = 53;
				}
				if (g + randomNumber == 15)
				{
					if (randomNumber == 4)
						g = 56;
					if (randomNumber == 5)
						g = 55;
					if (randomNumber == 6)
						g = 54;
				}
				if (g + randomNumber == 16)
				{
					if (randomNumber == 5)
						g = 56;
					if (randomNumber == 6)
						g = 55;
				}
				if (g + randomNumber == 17)
				{
					if (randomNumber == 6)
						g = 56;
				}
			}
		}
		if (randomNumber != 6 && countred == 0)
		{
			cout << "You cannot move. ";
			Sleep(1000);
			system("cls");
			graphics();
			if (noOfPlayers == 2)
				fblue(i, j, k, l, noOfPlayers);
			else
				fyellow(m, n, o, p, noOfPlayers);
		}
		if (randomNumber == 6 && countred == 0)
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
			fred(d, e, f, g, noOfPlayers);
		}
		if (randomNumber == 6 && countred != 0 && countred < 4)
		{
			cout << "You want to move 'y' or take another goti out 'o': ";
			cin >> rollDice;
			if (rollDice == 'y')
			{
				if (countred > 1)
				{
					cout << "Which goti you want to move: ";
					cin >> gotiNumber;
					if (gotiNumber == 1 && d + randomNumber < 63)
					{
						d += randomNumber;
						path[d] = gotired[0];
						path[d - randomNumber] = ' ';
						if (d == 62)
						{
							cout << "Your goti won.";
							path[d] = ' ';
							winred++;
						}
					}
					else if (gotiNumber == 2 && e + randomNumber < 63)
					{
						e += randomNumber;
						path[e] = gotired[1];
						path[e - randomNumber] = ' ';
						if (e == 62)
						{
							cout << "Your goti won.";
							path[e] = ' ';
							winred++;
						}
					}
					else if (gotiNumber == 3 && f + randomNumber < 63)
					{
						f += randomNumber;
						path[f] = gotired[2];
						path[f - randomNumber] = ' ';
						if (f == 62)
						{
							cout << "Your goti won.";
							path[f] = ' ';
							winred++;
						}
					}
					else if (gotiNumber == 4 && g + randomNumber < 63)
					{
						g += randomNumber;
						path[g] = gotired[3];
						path[g - randomNumber] = ' ';
						if (g == 62)
						{
							cout << "Your goti won.";
							path[g] = ' ';
							winred++;
						}
					}
				}
				if (countred == 1 && d + randomNumber < 63)
				{
					d += randomNumber;
					path[d] = gotiblue[0];
					path[d - randomNumber] = ' ';
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
				fred(d, e, f, g, noOfPlayers);
			}
			else if (rollDice == 'o')
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
				fred(d, e, f, g, noOfPlayers);
			}
		}
		if (randomNumber < 6 && countred != 0 || randomNumber == 6 && countred == 4)
		{
			if (countred > 1)
			{
				cout << "Which goti you want to move: ";
				cin >> gotiNumber;
				if (gotiNumber == 1 && d + randomNumber < 63)
				{
					d += randomNumber;
					path[d] = gotired[0];
					path[d - randomNumber] = ' ';
					if (d == 62)
					{
						cout << "Your goti won.";
						path[d] = ' ';
						winred++;
					}
				}
				else if (gotiNumber == 2 && e + randomNumber < 63)
				{
					e += randomNumber;
					path[e] = gotired[1];
					path[e - randomNumber] = ' ';
					if (e == 62)
					{
						cout << "Your goti won.";
						path[e] = ' ';
						winred++;
					}
				}
				else if (gotiNumber == 3 && f + randomNumber < 63)
				{
					f += randomNumber;
					path[f] = gotired[2];
					path[f - randomNumber] = ' ';
					if (f == 62)
					{
						cout << "Your goti won.";
						path[f] = ' ';
						winred++;
					}
				}
				else if (gotiNumber == 4 && g + randomNumber < 63)
				{
					g += randomNumber;
					path[g] = gotired[3];
					path[g - randomNumber] = ' ';
					if (g == 62)
					{
						cout << "Your goti won.";
						path[g] = ' ';
						winred++;
					}
				}
			}
			if (countred == 1 && d + randomNumber < 63)
			{
				d += randomNumber;
				path[d] = gotired[0];
				path[d - randomNumber] = ' ';
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
			if (randomNumber == 6)
				fred(d, e, f, g, noOfPlayers);
			if (noOfPlayers == 2)
				fblue(i, j, k, l, noOfPlayers);
			else
				fyellow(m, n, o, p, noOfPlayers);
		}
	}
}
void fblue(int &i, int &j, int &k, int &l, int noOfPlayers)
{
	if (winblue != 4)
	{
		cout << "It's the blue turn.";
		srand(time(0));
		cout << "\nRoll dice by pressing any alphabet: ";
		cin >> rollDice;
		randomNumber = 1 + rand() % 6;
		cout << "Your dice gave: " << randomNumber << endl;
		if (i + randomNumber > 50 && i + randomNumber < 57)
		{
			path[i] = ' ';
			if (i + randomNumber == 51)
			{
				if (randomNumber == 1)
					i = 51;
				if (randomNumber == 2)
					i = 50;
				if (randomNumber == 3)
					i = 49;
				if (randomNumber == 4)
					i = 48;
				if (randomNumber == 5)
					i = 47;
				if (randomNumber == 6)
					i = 46;
			}
			if (i + randomNumber == 52)
			{
				if (randomNumber == 2)
					i = 51;
				if (randomNumber == 3)
					i = 50;
				if (randomNumber == 4)
					i = 49;
				if (randomNumber == 5)
					i = 48;
				if (randomNumber == 6)
					i = 47;
			}
			if (i + randomNumber == 53)
			{
				if (randomNumber == 3)
					i = 51;
				if (randomNumber == 4)
					i = 50;
				if (randomNumber == 5)
					i = 49;
				if (randomNumber == 6)
					i = 48;
			}
			if (i + randomNumber == 54)
			{
				if (randomNumber == 4)
					i = 51;
				if (randomNumber == 5)
					i = 50;
				if (randomNumber == 6)
					i = 49;
			}
			if (i + randomNumber == 55)
			{
				if (randomNumber == 5)
					i = 51;
				if (randomNumber == 6)
					i = 50;
			}
			if (i + randomNumber == 56)
			{
				if (randomNumber == 6)
					i = 51;
			}
		}
		if (j + randomNumber > 50 && j + randomNumber < 57)
		{
			path[j] = ' ';
			if (j + randomNumber == 51)
			{
				if (randomNumber == 1)
					j = 51;
				if (randomNumber == 2)
					j = 50;
				if (randomNumber == 3)
					j = 49;
				if (randomNumber == 4)
					j = 48;
				if (randomNumber == 5)
					j = 47;
				if (randomNumber == 6)
					j = 46;
			}
			if (j + randomNumber == 52)
			{
				if (randomNumber == 2)
					j = 51;
				if (randomNumber == 3)
					j = 50;
				if (randomNumber == 4)
					j = 49;
				if (randomNumber == 5)
					j = 48;
				if (randomNumber == 6)
					j = 47;
			}
			if (j + randomNumber == 53)
			{
				if (randomNumber == 3)
					j = 51;
				if (randomNumber == 4)
					j = 50;
				if (randomNumber == 5)
					j = 49;
				if (randomNumber == 6)
					j = 48;
			}
			if (j + randomNumber == 54)
			{
				if (randomNumber == 4)
					j = 51;
				if (randomNumber == 5)
					j = 50;
				if (randomNumber == 6)
					j = 49;
			}
			if (j + randomNumber == 55)
			{
				if (randomNumber == 5)
					j = 51;
				if (randomNumber == 6)
					j = 50;
			}
			if (j + randomNumber == 56)
			{
				if (randomNumber == 6)
					j = 51;
			}
		}
		if (k + randomNumber > 50 && k + randomNumber < 57)
		{
			path[k] = ' ';
			if (k + randomNumber == 51)
			{
				if (randomNumber == 1)
					k = 51;
				if (randomNumber == 2)
					k = 50;
				if (randomNumber == 3)
					k = 49;
				if (randomNumber == 4)
					k = 48;
				if (randomNumber == 5)
					k = 47;
				if (randomNumber == 6)
					k = 46;
			}
			if (k + randomNumber == 52)
			{
				if (randomNumber == 2)
					k = 51;
				if (randomNumber == 3)
					k = 50;
				if (randomNumber == 4)
					k = 49;
				if (randomNumber == 5)
					k = 48;
				if (randomNumber == 6)
					k = 47;
			}
			if (k + randomNumber == 53)
			{
				if (randomNumber == 3)
					k = 51;
				if (randomNumber == 4)
					k = 50;
				if (randomNumber == 5)
					k = 49;
				if (randomNumber == 6)
					k = 48;
			}
			if (k + randomNumber == 54)
			{
				if (randomNumber == 4)
					k = 51;
				if (randomNumber == 5)
					k = 50;
				if (randomNumber == 6)
					k = 49;
			}
			if (k + randomNumber == 55)
			{
				if (randomNumber == 5)
					k = 51;
				if (randomNumber == 6)
					k = 50;
			}
			if (k + randomNumber == 56)
			{
				if (randomNumber == 6)
					k = 51;
			}
		}
		if (l + randomNumber > 50 && l + randomNumber < 57)
		{
			path[l] = ' ';
			if (l + randomNumber == 51)
			{
				if (randomNumber == 1)
					l = 51;
				if (randomNumber == 2)
					l = 50;
				if (randomNumber == 3)
					l = 49;
				if (randomNumber == 4)
					l = 48;
				if (randomNumber == 5)
					l = 47;
				if (randomNumber == 6)
					l = 46;
			}
			if (l + randomNumber == 52)
			{
				if (randomNumber == 2)
					l = 51;
				if (randomNumber == 3)
					l = 50;
				if (randomNumber == 4)
					l = 49;
				if (randomNumber == 5)
					l = 48;
				if (randomNumber == 6)
					l = 47;
			}
			if (l + randomNumber == 53)
			{
				if (randomNumber == 3)
					l = 51;
				if (randomNumber == 4)
					l = 50;
				if (randomNumber == 5)
					l = 49;
				if (randomNumber == 6)
					l = 48;
			}
			if (l + randomNumber == 54)
			{
				if (randomNumber == 4)
					l = 51;
				if (randomNumber == 5)
					l = 50;
				if (randomNumber == 6)
					l = 49;
			}
			if (l + randomNumber == 55)
			{
				if (randomNumber == 5)
					l = 51;
				if (randomNumber == 6)
					l = 50;
			}
			if (l + randomNumber == 56)
			{
				if (randomNumber == 6)
					l = 51;
			}
		}
		if (randomNumber != 6 && countblue == 0)
		{
			cout << "You cannot move. ";
			Sleep(1000);
			system("cls");
			graphics();
			fred(d, e, f, g, noOfPlayers);
		}
		if (randomNumber == 6 && countblue == 0)
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
			fblue(i, j, k, l, noOfPlayers);
		}
		if (randomNumber == 6 && countblue != 0 && countblue < 4)
		{
			cout << "You want to move 'y' or take another goti out 'o': ";
			cin >> rollDice;
			if (rollDice == 'y')
			{
				if (countblue > 1)
				{
					cout << "Which goti you want to move: ";
					cin >> gotiNumber;
					if (gotiNumber == 1 && i + randomNumber < 58)
					{
						i += randomNumber;
						path[i] = gotiblue[0];
						path[i - randomNumber] = ' ';
						if (i == 57)
						{
							cout << "Your goti won.";
							path[i] = ' ';
							winblue++;
						}
					}
					else if (gotiNumber == 2 && j + randomNumber < 58)
					{
						j += randomNumber;
						path[j] = gotiblue[1];
						path[j - randomNumber] = ' ';
						if (j == 57)
						{
							cout << "Your goti won.";
							path[j] = ' ';
							winblue++;
						}
					}
					else if (gotiNumber == 3 && k + randomNumber < 58)
					{
						k += randomNumber;
						path[k] = gotiblue[2];
						path[k - randomNumber] = ' ';
						if (k == 57)
						{
							cout << "Your goti won.";
							path[k] = ' ';
							winblue++;
						}
					}
					else if (gotiNumber == 4 && l + randomNumber < 58)
					{
						l += randomNumber;
						path[l] = gotiblue[3];
						path[l - randomNumber] = ' ';
						if (l == 57)
						{
							cout << "Your goti won.";
							path[l] = ' ';
							winblue++;
						}
					}
				}
				if (countblue == 1 && i + randomNumber < 58)
				{
					i += randomNumber;
					path[i] = gotiblue[0];
					path[i - randomNumber] = ' ';
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
				fblue(i, j, k, l, noOfPlayers);
			}
			else if (rollDice == 'o')
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
				fblue(i, j, k, l, noOfPlayers);
			}
		}
		if (randomNumber < 6 && countblue != 0 || randomNumber == 6 && countblue == 4)
		{
			if (countblue > 1)
			{
				cout << "Which goti you want to move: ";
				cin >> gotiNumber;
				if (gotiNumber == 1 && i + randomNumber < 58)
				{
					i += randomNumber;
					path[i] = gotiblue[0];
					path[i - randomNumber] = ' ';
					if (i == 57)
					{
						cout << "Your goti won.";
						path[i] = ' ';
						winblue++;
					}
				}
				else if (gotiNumber == 2 && j + randomNumber < 58)
				{
					j += randomNumber;
					path[j] = gotiblue[1];
					path[j - randomNumber] = ' ';
					if (j == 57)
					{
						cout << "Your goti won.";
						path[j] = ' ';
						winblue++;
					}
				}
				else if (gotiNumber == 3 && k + randomNumber < 58)
				{
					k += randomNumber;
					path[k] = gotiblue[2];
					path[k - randomNumber] = ' ';
					if (k == 57)
					{
						cout << "Your goti won.";
						path[k] = ' ';
						winblue++;
					}
				}
				else if (gotiNumber == 4 && l + randomNumber < 58)
				{
					l += randomNumber;
					path[l] = gotiblue[3];
					path[l - randomNumber] = ' ';
					if (l == 57)
					{
						cout << "Your goti won.";
						path[l] = ' ';
						winblue++;
					}
				}
			}
			if (countblue == 1 && i + randomNumber < 58)
			{
				i += randomNumber;
				path[i] = gotiblue[0];
				path[i - randomNumber] = ' ';
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
			if (randomNumber == 6)
				fblue(i, j, k, l, noOfPlayers);
			else
				fred(d, e, f, g, noOfPlayers);
		}
	}
}