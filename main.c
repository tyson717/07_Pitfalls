#include <stdio.h>

int main() {
    int input;
    scanf(" %d", &input);

    // Dangling else
    /* if (input >= 0)
         if (input > 1000)
             printf("Invalid Input!\n");
     else
             printf("Invalid Input!\n");*/

    if (input >= 0) {
        if (input > 1000) {
            printf("Invalid Input!\n");
        } else {
            printf("Invalid Input!\n");
        }
    }


    return 0;
}
