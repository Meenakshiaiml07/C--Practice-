#include <stdio.h>

char board[3][3];

void initBoard() 
{
char num = '1';
for (int i = 0; i < 3; i++) 
{
for (int j = 0; j < 3; j++)
{
board[i][j] = num++;
}
}
}

void displayBoard() 
{
printf("\n");
printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
printf("---|---|---\n");
printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
printf("---|---|---\n");
printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
printf("\n");
}

int checkWin() 
{
for (int i = 0; i < 3; i++) 
{
if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
return 1;
if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
return 1;
}
if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
return 1;
if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
return 1;
return 0;
}

int checkDraw() 
{
for (int i = 0; i < 3; i++)
  {
for (int j = 0; j < 3; j++) 
{
if (board[i][j] != 'X' && board[i][j] != 'O')
return 0;
}
}
return 1;
}

int main()
{
int choice, row, col;
char player = 'X';
int gameOver = 0;

initBoard();
printf("=== TIC TAC TOE ===\n");
printf("Player 1 = X, Player 2 = O\n");

while (!gameOver)
  {
displayBoard();
printf("Player %c, enter position (1-9): ", player);
scanf("%d", &choice);

if (choice < 1 || choice > 9) 
{
printf("Invalid! 1-9 madhyalo ivvu.\n");
continue;
}

row = (choice - 1) / 3;
col = (choice - 1) % 3;

if (board[row][col] == 'X' || board[row][col] == 'O')
{
printf("Aa box already full! Malli try chey.\n");
continue;
}

board[row][col] = player;

if (checkWin()) 
{
displayBoard();
printf("Player %c WON!\n", player);
gameOver = 1;
} else if (checkDraw()) 
{
displayBoard();
printf("Draw! Iddaru equal\n");
gameOver = 1;
} else 
{
player = (player == 'X') ? 'O' : 'X';
}
}
return 0;
}
