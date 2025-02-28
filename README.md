# 🚀 Ludo Game
This is a simple implementation of the classic board game Ludo written in C++. The game supports 2 to 4 players, each controlling their own set of tokens (referred to as "gotis" in the code). The objective of the game is to move all your tokens from the starting area to the home area by rolling a dice and strategically moving your tokens.

# Features
- **2 to 4 Players**: The game can be played with 2, 3, or 4 players.
- **Turn-Based Gameplay**: Players take turns rolling a dice and moving their tokens.
- **Token Movement**: Tokens move along a predefined path, and players can choose which token to move.
- **Winning Condition**: The first player to move all their tokens to the home area wins the game.
- **Color-Coded Graphics**: The game uses color-coded graphics to represent the board and tokens.
- **Dynamic Dice Rolling**: Players roll a dice to determine the number of steps their token can move.
- **Winning Announcement**: The game announces the winners in the order they finish.

# How to Play
- **Start the Game**: Run the program and choose to start the game by entering 'y'.
- **Number of Players**: Enter the number of players (2, 3, or 4).
- **Roll the Dice**: On your turn, press any key to roll the dice.
- **Move Tokens**: Depending on the dice roll, choose which token to move or bring a new token into play.
- **Win the Game**: Be the first to move all your tokens to the home area to win.

# Code Structure
The code is organized into several functions to handle different aspects of the game:

## Main Functions
- **main()**: Initializes the game board and starts the game loop.
- **graphics()**: Displays the game board and updates it dynamically.
- **reloadGraphics()**: Refreshes the game board after each move.

## Player Functions
- **fblue(), fred(), fyellow(), fgreen()**: Handle the logic for each player's turn, including token movement and winning conditions.

## Dice Functions
- **rollDiceRandom(string turn)**: Rolls the dice for the current player.
- **diceFunction(int &m, int no, int no2, int no3)**: Handles the logic for moving tokens based on the dice roll.
- **rollDiceTurn(int &countColor, char gotiColor[], int &winColor, int no, int &q, int &r, int &s, int &t)**: Manages the player's turn, including token movement and winning checks.

## Utility Functions
- **colorRedGraphics(), colorBlueGraphics(), colorYellowGraphics(), colorGreenGraphics()**: Set the console text color for different players.
- **winnerCheck(string turn, int &winColor)**: Checks if a player has won and updates the winner list.

# Dependencies
**Windows.h**: Used for console text color manipulation.
**Ctime**: Used for seeding the random number generator for dice rolls.
**iomanip**: Used for formatting the console output.

# Compilation and Execution
To compile and run the code, use a C++ compiler that supports the Windows API (e.g., MinGW on Windows).

    g++ main.cpp -o main.exe
