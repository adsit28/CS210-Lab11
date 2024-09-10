/** lab11-1.c
* ===========================================================
* Name: Name, Date
* Section:
* Project: Lab 11-1
* Purpose: 
* ===========================================================
*/

#include <stdio.h>


int main() {

    char houseLetter;
    // Step 1:  Ask for the House Name
    printf("Enter the first letter of your house: ");
    scanf(" %c", &houseLetter);

    // Step 2:  Create a Switch Statement
    switch (houseLetter){

        case 'r': 
            printf("Your house is Ravenclaw\nYour founder is Rowena Ravenclaw\nYour house colours are blue and bronze\n");
            break;
        case 'R':
            printf("Your house is Ravenclaw\nYour founder is Rowena Ravenclaw\nYour house colours are blue and bronze\n");
            break;
        case 'g':
            printf("Your house is Gryffindor\nYour founder is Godric Gryffindor\nYour house colours are scarlet and gold\n");
            break;
        case 'G':
            printf("Your house is Gryffindor\nYour founder is Godric Gryffindor\nYour house colours are scarlet and gold\n");
            break;
        case 'h':
            printf("Your house is Hufflepuff\nYour founder is Helga Hufflepuff\nYour house colours are yellow and black\n");
            break;
        case 'H':
            printf("Your house is Hufflepuff\nYour founder is Helga Hufflepuff\nYour house colours are yellow and black\n");
            break;
        case 's':
            printf("Your house is Slytherin\nYour founder is Salazar Slytherin\nYour house colours are green and silver\n");
            break;
        case 'S':
            printf("Your house is Slytherin\nYour founder is Salazar Slytherin\nYour house colours are green and silver\n");
            break;

        default:
            printf("No house starts with that letter\n");
            break;

    }

    return 0;
}
