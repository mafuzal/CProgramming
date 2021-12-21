#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char square[10] = {'o','1','2','3','4','5','6','7','8','9'};

int choice, player;

int checkForWin();
void displayBoard();
void markBoard(char mark);

int main()
{
    int gameStatus;
    char mark;
    player = 1;
    do
    {
        displayBoard();
        player = (player %2) ? 1 : 2;
        printf("Player %d, enter a number:", player);
        scanf("%d", &choice);
        mark = (player == 1)? 'X' :'O';
        markBoard(mark);
        gameStatus = checkForWin();
        player++;
    } while (gameStatus == -1);

    displayBoard();

    if (gameStatus == 1)
            printf("==>\a Player %d won!\n",--player);
    else 
        printf("==>Game Draw\n");
    
    return 0;
}

/**
 * @brief 
 *  1 FOR GAME IS OVER WITH RESULT 
 *  -1 FOR GAME IS IN PROGRESS 
 *  O GAME IS OVER WITH NO RESULT 
 * @return int 
 */
int checkForWin()
{
    int returnValue = 0;
    if ( (square[1] == square[2] && square[2] == square[3]) ||
         (square[4] == square[5] && square[5] == square[6]) ||
         (square[7] == square[8] && square[8] == square[9]) ||
         (square[1] == square[4] && square[4] == square[7]) ||
         (square[2] == square[5] && square[5] == square[8]) ||
         (square[3] == square[6] && square[6] == square[9])) 
         {
             returnValue = 1;
         }
    else if ((square[1] =='X' || square[1] == 'O') && (square[2] =='X' || square[2] == 'O') &&
             (square[3] =='X' || square[3] == 'O') && (square[4] =='X' || square[4] == 'O') &&
             (square[5] =='X' || square[5] == 'O') && (square[6] =='X' || square[6] == 'O') &&
             (square[7] =='X' || square[7] == 'O') && (square[8] =='X' || square[8] == 'O') &&
             (square[9] =='X' || square[9] == 'O'))
            {
                returnValue = 0;
            }
    
    else{
            returnValue = -1;
        }
    return returnValue;

}

void displayBoard()
{
    system("cls");
    printf("\n\n\tTic Tac Toe\n\n");
    printf("Player 1 (X) - Player 2 (O) \n\n\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n",square[1],square[2],square[3]);
    printf("___|___|___\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n",square[4],square[5],square[6]);
    printf("___|___|___\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n",square[7],square[8],square[9]);
    printf("   |   |   \n");

}

/**
 * @brief 
 * Will set the board with correct character
 * x or o in the correct spot in that array
 * 
 * @param mark 
 */
void markBoard(char mark)
{
    if( choice == 1 && square[1] == '1')
        square[1] = mark;
    else if( choice == 2 && square[2] == '2') 
        square[2] = mark;
    else if( choice == 3 && square[3] == '3') 
        square[3] = mark;
    else if( choice == 4 && square[4] == '4') 
        square[4] = mark;
    else if( choice == 5 && square[5] == '5') 
        square[5] = mark;
    else if( choice == 6 && square[6] == '6') 
        square[6] = mark;
    else if( choice == 7 && square[7] == '7') 
        square[7] = mark;
    else if( choice == 8 && square[8] == '8') 
        square[8] = mark;
    else if( choice == 9 && square[9] == '9') 
        square[9] = mark;
    else 
	{
        printf("Invalid Move");
        player--;
        getch(); //Pauses and expectes  the user to hit enter
	}

}