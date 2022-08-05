#ifndef MAIN_H
#define MAIN_H

#include "gba.h"

// TODO: Create any necessary structs

struct goalKeeper {
    int row;
    int col;
    int height;
    int width;
    int score;
    int direct;
    u16 color;
};

struct soccerBall {
    int row;
    int col;
    int rowDirect;
    int colDirect;
    u16 color;
};

int stateChange(u32 currentButtons, u32 previousButtons, struct goalKeeper playerGK, struct goalKeeper autoGK);
int vCollision(struct soccerBall ball);
int paddleScoreCollision(struct soccerBall *ball, struct goalKeeper *playerGK, struct goalKeeper *autoGK);
void autoDirect(struct goalKeeper *autoGK);
void drawStartScreen(void);



/*
* For example, for a Snake game, one could be:
*
* struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* };
*
* Example of a struct to hold state machine data:
*
* struct state {
*   int currentState;
*   int nextState;
* };
*
*/

#endif
