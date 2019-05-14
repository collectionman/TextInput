// This C program take the input by keyboard and then
// prints the input on the screen while the input character
// don't be equal to EOF.

#include <stdio.h>

enum {
    COUNT_CHARS_PROGRAM = 0,
    COUNT_LINES_PROGRAM = 1,
    EXIT_PROGRAM_VALUE
} ;


void countCharacters( void ) ;
void countLines( void )  ;
void callProgramByIdentifier( int programIdentifier ) ;

int main() {
    int option = COUNT_CHARS_PROGRAM ;
    printf( "Choose a program: " ) ; scanf( "%d", &option ) ;

    while ( option != EXIT_PROGRAM_VALUE ) {
        callProgramByIdentifier( option ) ;
    }

    return 0 ;
}

void callProgramByIdentifier( int programIdentifier ) {
    if ( programIdentifier == COUNT_CHARS_PROGRAM ) {
        countCharacters() ;
    } else if ( programIdentifier == COUNT_LINES_PROGRAM ) {
        countLines() ;
    }
}

void countCharacters( void ) {
    // char type cannot be used because character must be big enough to storage EOF
    // and other characters. That's why we used int.
    int character, totalOfCharacters = 0 ;
    while ( ( character =  getchar() ) != '<' ) {
        putchar( character ) ;
        ++totalOfCharacters ;
    }
    printf( "Total of characters is %d", totalOfCharacters ) ;
}

void countLines( void ) {
    // char type cannot be used because character must be big enough to storage EOF
    // and other characters. That's why we used int.
    int character, totalOfLines = 0 ;
    while ( ( character =  getchar() ) != '<' ) {
        if ( character == '\n' ) {
            ++totalOfLines ;
        }
    }
    printf( "Total of lines is %d", totalOfLines ) ;
}


