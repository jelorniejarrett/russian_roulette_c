#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int cylinder[7] = {0};
    int bullets = 3;
    int chamber = 0;
    int playerTurn = 1;
    int gameOver = 0;

    srand(time(NULL));

    // place 3 bullets randomly
    for(int i = 0; i < bullets; i++) {
        int pos = rand() % 7;

        while(cylinder[pos] == 1) {
            pos = rand() % 7;
        }
        cylinder[pos] = 1;
    }

    printf("=== Russian Roulette ===\n");
    printf("3 bullets in a 7 chamber revolver.\n");
    printf("1 = Shoot | 2 = Pass\n\n");

    while(!gameOver) {

        if(playerTurn) {

            int choice;

            printf("Your turn: ");
            scanf("%d", &choice);

            //shoot
            if(choice == 1) {  

                printf("You pull the trigger...\n");

                if(cylinder[chamber] == 1) {
                    printf("BANG! You died.\n");
                    gameOver = 1;
                }
                else {
                    printf("Click! Empty chamber.\n");
                    playerTurn = 0;
                }
            }

            else if(choice == 2) { // pass
                printf("You passed the gun.\n");
                playerTurn = 0;
            }

        }

        //opponent turn
        else { 

            printf("\nOpponent's turn...\n");

            int action = rand() % 7;

            if(action < 3) {

                printf("Opponent shoots...\n");

                if(cylinder[chamber] == 1) {
                    printf("BANG! Opponent died.\n");
                    gameOver = 1;
                }
                else {
                    printf("Click! Opponent survived.\n");
                    playerTurn = 1;
                }

            }
            else {
                printf("Opponent passes the gun.\n");
                playerTurn = 1;
            }

        }
        chamber++;

        if(chamber >= 7) {
            chamber = 0;
        }
    }
    return 0;
}
