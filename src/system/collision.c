#include "collision.h"

/**
 * This function tests if the two boxes are colliding.
 * @param rect1 The first collision box
 * @param rect2 The second collision box
 * @return Indicates if a collision has occurred
 */
bool collision_check(SDL_Rect *rect1, SDL_Rect *rect2) {
    //The sides of the rectangles
    int leftA, leftB;
    int rightA, rightB;
    int topA, topB;
    int bottomA, bottomB;

    //Calculate the sides of rect A
    leftA = rect1->x;
    rightA =rect1->x + rect1->w;
    topA = rect1->y;
    bottomA = rect1->y + rect1->h;

    //Calculate the sides of rect B
    leftB = rect2->x;
    rightB = rect2->x + rect2->w;
    topB = rect2->y;
    bottomB = rect2->y + rect2->h;

    //If any of the sides from A are outside of B
    if( bottomA <= topB ) {
        return false;
    }

    if( topA >= bottomB ) {
        return false;
    }

    if( rightA <= leftB ) {
        return false;
    }

    if( leftA >= rightB ) {
        return false;
    }

    //If none of the sides from A are outside B
    return true;
}