#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main ( ) {
    int n ;
    int data [6] [3] = {
        123 , 456 , 9000 ,
        456 , 789 , 5000 ,
        789 , 888 , 6000 ,
        336 , 558 , 10000 ,
        775 , 666 , 12000 ,
        566 , 221 , 7000 } ;
    scanf ( "%d\n" , &n ) ;
    int input [n] [2] ;
    for ( int i=0 ; i<n ; i++ ) {
            int a , b , error = 1 ;
            scanf ( "%d%d" , &a , &b ) ;
            for ( int c=0 ; c<=6 ; c++ ) {
                if ( data[c][0] == a && data[c][1] == b ) {
                    printf ( "%d\n" , data[c][2] ) ;
                    error = 0 ;
                    break ;
                }
            }
            if ( error == 1 ) {
            printf ( "error\n" ) ;
    }
    }
    return 0;
}
