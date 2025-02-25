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
void rollDiceRandom(string);
void diceFunction(int &, int, int, int);

char blue[12][12], red[12][12], yellow[12][12], green[12][12];
char path[72], gotiblue[4] = {'a', 'b', 'c', 'd'}, gotired[4] = {'e', 'f', 'g', 'h'}, gotiyellow[4] = {'i', 'j', 'k', 'l'}, gotigreen[4] = {'m', 'n', 'o', 'p'}, inputText, rollDice;
int a,b,i = 0, j = 0, k = 0, l = 0, d = 13, e = 13, f = 13, g = 13, m = 26, n = 26, o = 26, p = 26, q = 39, r = 39, s = 39, t = 39, countblue = 0, countred = 0, countgreen = 0, countyellow = 0, winblue = 0, winred = 0, wingreen = 0, winyellow = 0, winner = 0, randomNumber, gotiNumber, noOfPlayers;
string winner1, winner2, winner3, winner4;
int main()
{
	for (a = 0; a < 72; a++)
		path[a] = ' ';
	for (a = 0; a < 12; a++)
	{
		for (int b = 0; b < 12; b++)
		{
			blue[a][b] = ' ';
			red[a][b] = ' ';
			yellow[a][b] = ' ';
			green[a][b] = ' ';
		}
	}
	
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
void diceFunction(int &m, int no, int no2, int no3){
	if (m + randomNumber > no2-1 && m + randomNumber < no2+6)
	{
		path[m] = ' ';
		if (m + randomNumber == no2)
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
		if (m + randomNumber == no2+1)
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
		if (m + randomNumber == no2+2)
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
		if (m + randomNumber == no2+3)
		{
			if (randomNumber == 4)
				m = -1;
			if (randomNumber == 5)
				m = -2;
			if (randomNumber == 6)
				m = -3;
		}
		if (m + randomNumber == no2+4)
		{
			if (randomNumber == 5)
				m = -1;
			if (randomNumber == 6)
				m = -2;
		}
		if (m + randomNumber == no2+5)
		{
			if (randomNumber == 6)
				m = -1;
		}
	}
	if (m < no)
	{
		if (m + randomNumber > no-1 && m + randomNumber < no+6)
		{
			path[m] = ' ';
			if (m + randomNumber == no)
			{
				if (randomNumber == 1)
					m = no3;
				if (randomNumber == 2)
					m = no3-1;
				if (randomNumber == 3)
					m = no3-2;
				if (randomNumber == 4)
					m = no3-3;
				if (randomNumber == 5)
					m = no3-4;
				if (randomNumber == 6)
					m = no3-5;
			}
			if (m + randomNumber == no+1)
			{
				if (randomNumber == 2)
					m = no3;
				if (randomNumber == 3)
					m = no3-1;
				if (randomNumber == 4)
					m = no3-2;
				if (randomNumber == 5)
					m = no3-3;
				if (randomNumber == 6)
					m = no3-4;
			}
			if (m + randomNumber == no+2)
			{
				if (randomNumber == 3)
					m = no3;
				if (randomNumber == 4)
					m = no3-1;
				if (randomNumber == 5)
					m = no3-2;
				if (randomNumber == 6)
					m = no3-3;
			}
			if (m + randomNumber == no+3)
			{
				if (randomNumber == 4)
					m = no3;
				if (randomNumber == 5)
					m = no3-1;
				if (randomNumber == 6)
					m = no3-2;
			}
			if (m + randomNumber == no+4)
			{
				if (randomNumber == 5)
					m = no3;
				if (randomNumber == 6)
					m = no3-1;
			}
			if (m + randomNumber == no+5)
			{
				if (randomNumber == 6)
					m = no3;
			}
		}
	}
}
void graphics()
{
	for (a = 0; a < 12; a++)
		for (b = 0; b < 26; b++)
		{
			if (b < 12)
			{
				colorBlueGraphics();
				cout << blue[a][b];
			}
			else if (b == 12)
			{
				colorTransparentGraphics();
				if (a == 0)
				{
					cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187);
				}
				else if (a == 1)
				{
					cout << char(186);
					cout << path[10];
					cout << char(179);
					cout << path[11];
					cout << char(179);
					cout << path[12];
					cout << char(186);
				}
				else if (a % 2 == 0)
				{
					cout << char(186) << char(196) << char(179) << char(196) << char(179) << char(196) << char(186);
				}
				else if (a == 3)
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
				else if (a == 5)
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
				else if (a == 7)
				{
					cout << char(186) << path[7] << char(179);
					colorRedGraphics();
					cout << path[59];
					colorTransparentGraphics();
					cout << char(179) << path[15] << char(186);
				}
				else if (a == 9)
				{
					cout << char(186) << path[6] << char(179);
					colorRedGraphics();
					cout << path[60];
					colorTransparentGraphics();
					cout << char(179) << path[16] << char(186);
				}
				else if (a == 11)
				{
					cout << char(186) << path[5] << char(179);
					colorRedGraphics();
					cout << path[61];
					colorTransparentGraphics();
					cout << char(179) << path[17] << char(186);
				}
			}
			else if (b < 25 && b > 12)
			{
				colorRedGraphics();
				cout << red[a][b - 13];
			}
			else if (b == 25)
			{
				cout << endl;
			}
		}
	colorTransparentGraphics();
	cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << char(218) << char(196) << char(196) << char(196) << char(191) << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
	cout << char(186) << path[51] << char(179);
	for (a = 0; a < 57; a++)
	{
		if (a < 5)
		{
			if (a == 0)
				colorBlueGraphics();
			cout << path[a];
			colorTransparentGraphics();
			if (a < 4)
				cout << char(179);
		}
		else if (a == 5)
		{
			cout << " " << char(179) << "   " << char(179) << " ";
		}
		else if (a > 17 && a < 24)
		{
			if (a == 21)
				colorYellowGraphics();
			cout << path[a];
			colorTransparentGraphics();
			if (a < 23)
				cout << char(179);
			else if (a == 23)
				cout << char(186);
		}
		else if (a == 24)
		{
			cout << endl;
			cout << char(186) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(179) << "   " << char(179) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(186) << endl;
			cout << char(186) << path[50] << char(179);
		}
		else if (a > 51 && a < 57)
		{
			if (a > 51)
				colorBlueGraphics();
			cout << path[a];
			colorTransparentGraphics();
			if (a < 56)
				cout << char(179);
		}
	}
	cout << " " << char(179) << " " << char(178) << " " << char(179) << " ";
	for (a = 66; a > 23; a--)
	{
		if (a > 61)
		{
			colorYellowGraphics();
			cout << path[a];
			colorTransparentGraphics();
			if (a > 61)
				cout << char(179);
		}
		else if (a == 61)
		{
			cout << path[24] << char(186);
			cout << endl;
			cout << char(186) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(179) << "   " << char(179) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(186) << endl;
		}
		else if (a < 50 && a > 43 || a < 31 && a > 24)
		{
			if (a == 49)
				cout << char(186);
			else if (a == 47)
				colorBlueGraphics();
			else if (a == 26)
				colorYellowGraphics();
			cout << path[a];
			colorTransparentGraphics();
			if (a == 25)
				cout << char(186);
			else if (a != 44 && a != 25)
				cout << char(179);
		}
		else if (a == 43)
		{
			cout << " " << char(179) << "   " << char(179) << " ";
		}
		else if (a == 24)
		{
			cout << endl;
			cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << char(192) << char(196) << char(196) << char(196) << char(217) << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
		}
	}
	for (a = 0; a < 12; a++)
		for (b = 0; b < 26; b++)
		{
			if (b < 12)
			{
				colorGreenGraphics();
				cout << green[a][b];
			}
			else if (b == 12)
			{
				colorTransparentGraphics();
				if (a == 0)
				{
					cout << char(186) << path[43] << char(179);
					colorGreenGraphics();
					cout << path[71];
					colorTransparentGraphics();
					cout << char(179) << path[31] << char(186);
				}
				else if (a % 2 != 0 && a != 11)
				{
					cout << char(186) << char(196) << char(179) << char(196) << char(179) << char(196) << char(186);
				}
				else if (a == 2)
				{
					cout << char(186) << path[42] << char(179);
					colorGreenGraphics();
					cout << path[70];
					colorTransparentGraphics();
					cout << char(179) << path[32] << char(186);
				}
				else if (a == 4)
				{
					cout << char(186) << path[41] << char(179);
					colorGreenGraphics();
					cout << path[69];
					colorTransparentGraphics();
					cout << char(179) << path[33] << char(186);
				}
				else if (a == 6)
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
				else if (a == 8)
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
				else if (a == 10)
				{
					cout << char(186);
					cout << path[38];
					cout << char(179);
					cout << path[37];
					cout << char(179);
					cout << path[36];
					cout << char(186);
				}
				else if (a == 11)
				{
					cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);
				}
			}
			else if (b < 25 && b > 12)
			{
				colorYellowGraphics();
				cout << yellow[a][b - 13];
			}
			else if (b == 25)
			{
				colorTransparentGraphics();
				cout << endl;
			}
		}
}
void rollDiceRandom(string turn){
	cout << "It's the " << turn << " turn";
	srand(time(0));
	cout << "\nRoll dice by pressing any alphabet: ";
	cin >> rollDice;
	randomNumber = 1 + rand() % 6;
	cout << "Your dice gave: " << randomNumber << endl;
}
void fgreen(int &q, int &r, int &s, int &t, int noOfPlayers)
{
	if (wingreen != 4)
	{
		rollDiceRandom("green");
		diceFunction(q, 38, 52, 66);
		diceFunction(r, 38, 52, 66);
		diceFunction(s, 38, 52, 66);
		diceFunction(t, 38, 52, 66);
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
		rollDiceRandom("yellow");
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
		diceFunction(m, 25, 52, 61);
		diceFunction(n, 25, 52, 61);
		diceFunction(o, 25, 52, 61);
		diceFunction(p, 25, 52, 61);
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
		rollDiceRandom("red");
		diceFunction(d, 12, 52, 56);
		diceFunction(e, 12, 52, 56);
		diceFunction(f, 12, 52, 56);
		diceFunction(g, 12, 52, 56);
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
		rollDiceRandom("blue");
		diceFunction(q, 0, 52, 51);
		diceFunction(r, 0, 52, 51);
		diceFunction(s, 0, 52, 51);
		diceFunction(t, 0, 52, 51);
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