 #include <stdio.h>
 4 #include <stdlib.h>
 5 #include <time.h>
 6
 7 void shuffle( int [][ 13 ] );
 8 void deal( const int [][ 13 ], const char *[], const char *[] );
 9
 10 int main()
 11 {
 12 const char *suit[ 4 ] =  
13 { "Hearts", "Diamonds", "Clubs", "Spades" };
 14 const char *face[ 13 ] = 
15 { "Ace", "Deuce", "Three", "Four",
 16 "Five", "Six", "Seven", "Eight",
 17 "Nine", "Ten", "Jack", "Queen", "King" };
 18 intdeck[ 4 ][ 13 ] = { 0 };
 19
 20 srand( time( 0 ) );
 21
 22 shuffle( deck );
 23 deal( deck, face, suit );
 24
 25 return 0;
 26 }
 27
 28 void shuffle( int wDeck[][ 13 ] )
 29 {
 30 introw, column, card;
 31
 32 for( card = 1; card <= 52; card++ ) {
Outline Outline
 3.  Define functions
 33 do {
 34 row = rand() % 4;
 35 column = rand() % 13;
 36 } while( wDeck[ row ][ column ] != 0 );
 37
 38 wDeck[ row ][ column ] = card;
 39 }
 40 }
 41
 42 void deal( const int wDeck[][ 13 ], const char *wFace[],
 43 const char *wSuit[] )
 44 {
 45 intcard, row, column;
 46
 47 for( card = 1; card <= 52; card++ )
 48
 49 for ( row = 0; row <= 3; row++ )
 50
 51 for ( column = 0; column <= 12; column++ )
 52
 53 if ( wDeck[ row ][ column ] == card )
 54 printf( "%5s of %-8s%c",
 55 wFace[ column ], wSuit[ row ],
 56 card % 2 == 0 ? '\n' : '\t' );
 57 }