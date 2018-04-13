#include <stdio.h>
#define BOARD_SIZE 8
void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos);

int main() {
    char pieceChar;
    int numPieces, x, y, i, j;

    // initialize `board` 2D-Array of int with setting all elements to ' '
    int board[BOARD_SIZE][BOARD_SIZE];
    for (x = 0; x < BOARD_SIZE; x++)
        for (y = 0; y < BOARD_SIZE; y++)       
        board[x][y] = ' ';
    
    // input first line
    scanf("%d", &numPieces);

    for (i = 1; i <= numPieces; i++) {
                // input pieceChar and its position
        scanf(" %c(%d, %d)", &pieceChar, &x, &y  );

                // set pieceChar to board array
        setPieceOnTable(board,pieceChar,x,y);
    }

    puts("------------------");
    puts("  0 1 2 3 4 5 6 7"); // position X numbers
    for (i = 0; i < BOARD_SIZE; i++) {
        printf("%d|", i);   // position Y number
        for (j = 0; j < BOARD_SIZE; j++) {
            printf("%c|",board[i][j]);   // value in board
        }
        puts("");  // new line
    }
}

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos )
{
    for (int i = 0; i <= BOARD_SIZE; i++){
        for (int j = 0; j <= BOARD_SIZE; j++){
            if (i-1 == xPos && j-1 == yPos){
                board[j-1][i-1] = piece;
            }
        }
    }    
}