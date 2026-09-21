#include <stdio.h>
#include <stdlib.h>

int main() {
    char piece, color;
    int x1, y1, x2, y2;
    int isCapture;
    int dx, dy;
    int valid = 0;

    
    scanf(" %c", &piece);
    scanf(" %c", &color);
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    scanf("%d", &isCapture);

    
    if (x1 < 1 || x1 > 8 || y1 < 1 || y1 > 8 ||
        x2 < 1 || x2 > 8 || y2 < 1 || y2 > 8) {
        printf("Invalid coordinates");
        return 0;
    }

    
    if (x1 == x2 && y1 == y2) {
        printf("Invalid move");
        return 0;
    }

    dx = abs(x2 - x1);
    dy = abs(y2 - y1);

    switch(piece) {

        case 'K':   // King
            if (dx <= 1 && dy <= 1)
                valid = 1;
            break;

        case 'Q':   // Queen
            if (dx == dy || x1 == x2 || y1 == y2)
                valid = 1;
            break;

        case 'R':   // Rook
            if (x1 == x2 || y1 == y2)
                valid = 1;
            break;

        case 'B':   // Bishop
            if (dx == dy)
                valid = 1;
            break;

        case 'N':   // Knight
            if ((dx == 2 && dy == 1) || (dx == 1 && dy == 2))
                valid = 1;
            break;

        case 'P':   // Pawn

            if (color == 'W') {

                // Normal move
                if (!isCapture && x1 == x2 && y2 == y1 + 1)
                    valid = 1;

                // First move
                else if (!isCapture && y1 == 2 &&
                         x1 == x2 && y2 == y1 + 2)
                    valid = 1;

                // Capture
                else if (isCapture &&
                         dx == 1 && y2 == y1 + 1)
                    valid = 1;
            }

            else if (color == 'B') {

                // Normal move
                if (!isCapture && x1 == x2 && y2 == y1 - 1)
                    valid = 1;

                // First move
                else if (!isCapture && y1 == 7 &&
                         x1 == x2 && y2 == y1 - 2)
                    valid = 1;

                // Capture
                else if (isCapture &&
                         dx == 1 && y2 == y1 - 1)
                    valid = 1;
            }
            break;

        default:
            printf("Invalid move");
            return 0;
    }

    if (valid)
        printf("Valid move");
    else
        printf("Invalid move");

    return 0;
}