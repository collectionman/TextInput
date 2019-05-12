// This program take the input by keyboard and then
// prints the input on the screen while the input character
// don't be equal to EOF.

#include <stdio.h>

int main() {
    int character ;
    for ( character = getchar() ; character != EOF ; character = getchar() ) {
        putchar( character ) ;
    }

    return 0 ;
}
