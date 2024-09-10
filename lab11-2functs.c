/** lab11-2functs.c
* ===========================================================
* Name: Name, Date
* Section:
* Project: Lab 11-2
* Purpose: Implementation file for lab11-2.h
* ===========================================================
*/
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include "lab11-2functs.h"

bool isFirstHalfAlpha(char character){
    bool outcome;
    int place = 0;
    place = character;

    if ((place > 64 && place < 78) || (place > 96 && place < 110) ){
        outcome = true;
    } 
    else {
        outcome = false;
    }

    return outcome;
}

int typeOfChar(char chary){
    int place = 0;
    place = chary;
    if (chary == 65 ||chary == 69 ||chary == 73 ||chary == 79 ||chary == 85 ||chary == 89 ||chary == 97 ||chary == 101 ||chary == 105 ||chary == 111 ||chary == 117 ||chary == 121){
        return CHAR_IS_VOWEL;
    }
    else if ((place > 64 && place < 91) || (place > 96 && place < 123)){
        return CHAR_IS_CONSONANT;
    }
    else{
        return CHAR_NOT_ALPHA;
    }
    return 0;
}

bool isMagicChar(char chara){
    bool theOutcome;
    if (chara == MAGIC_CHAR){
        theOutcome = true;
    }
    else{
        theOutcome = false;
    }
    return theOutcome;
}