#include <stdio.h>
#define BOARD_SIZE 8

void bishopMoves(int board[][BOARD_SIZE], int posX, int posY) {
    for(int i = 0; i < BOARD_SIZE; i++){
        for (int j = 0; j < BOARD_SIZE; j++){
            if (j == posX && i == posY){
                board[i][j] = 'B';
            }
            else if ((j == posX-1 && i == posY-1) || (j == posX-2 && i == posY-2) || (j == posX-3 && i == posY-3)
            || (j == posX-4 && i == posY-4) || (j == posX-5 && i == posY-5) || (j == posX-6 && i == posY-6)
            || (j == posX-7 && i == posY-7) || (j == posX+1 && i == posY+1) || (j == posX+2 && i == posY+2)
            || (j == posX+3 && i == posY+3) || (j == posX+4 && i == posY+4) || (j == posX+5 && i == posY+5)
            || (j == posX+6 && i == posY+6) || (j == posX+7 && i == posY+7) || (j == posX+7 && i == posY-7)
            || (j == posX+6 && i == posY-6) || (j == posX+5 && i == posY-5) || (j == posX+4 && i == posY-4)
            || (j == posX+3 && i == posY-3) || (j == posX+2 && i == posY-2) || (j == posX+1 && i == posY-1)
            || (j == posX-7 && i == posY+7) || (j == posX-6 && i == posY+6) || (j == posX-5 && i == posY+5)
            || (j == posX-4 && i == posY+4) || (j == posX-3 && i == posY+3) || (j == posX-2 && i == posY+2)
            || (j == posX-1 && i == posY+1)){
                board[i][j] = 'X';
            }
        }
    }

}

int main() {

  int i,j, posX, posY;

  // Declare array 2D using BOARD_SIZE
  int board[BOARD_SIZE][BOARD_SIZE];
  for (i = 0; i < BOARD_SIZE; i++) {
    for (j = 0; j < BOARD_SIZE; j++) {
    board[i][j] = ' ';
    }
  }

  printf("Enter Bishop's X Y position: ");
  scanf("%d %d", &posX, &posY);

  // Call function bishopMoves() 
    bishopMoves(board,posX,posY);

  printf("  0 1 2 3 4 5 6 7\n");
  printf("------------------\n");
  for (i = 0; i < BOARD_SIZE; i++) {
      printf("%d", i);
      for (j = 0; j < BOARD_SIZE; j++) {
         printf("|");
         if (board[i][j] == 'B') 
            printf("B");
         else 
            printf("%c", board[i][j]);
      }
      printf("|\n");
      printf("-----------------\n");
  }
}