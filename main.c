// This C program take the input by keyboard and then
// prints the input on the screen while the input character
// don't be equal to EOF.

#include <stdio.h>

int main() {
    // char type cannot be used because que c must be big enough to storage EOF
    // and other characters. That's why we used int.
    int character ;

    for ( character = getchar() ; character != EOF ; character = getchar() ) {
        putchar( character ) ;
    }

    return 0 ;
}
