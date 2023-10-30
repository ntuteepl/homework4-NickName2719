#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int n ;
    scanf ( "%d\n" , &n ) ;
    // input data
    int input [n] [n] ;
    for ( int i=1 ; i<=n ; i++ ) {
            for ( int j=1 ; j<=n ; j++ ) {
                scanf ( "%d" , &input [i] [j] ) ;
            }
    }
    // find the max
    int max , max_i , max_j ;
    int i , j ;
    for ( int k=1 ; k<=n ; k++) {
        max = input [1] [1] ;
        max_i = 1 ;
        max_j = 1 ;
        for ( i=1 ; i<=n ; i++ ) {
            for ( j=1 ; j<=n ; j++ ) {
                if ( max < input [i] [j] ) {
                    max = input [i] [j] ;
                    max_i = i ;
                    max_j = j ;
                }
            }
            if ( max < input [i+1] [1] ) {
                max = input [i+1] [1] ;
                max_i = i+1 ;
                max_j = 1 ;
            }
        }
        printf("boy %d pair with girl %d\n" , max_i , max_j ) ;
    // clear
        for ( int i=1 ; i<=n ; i++ ) {
            input [max_i] [i] = 0 ;
            input [i] [max_j] = 0 ;
        }
    }
    return 0;
}

