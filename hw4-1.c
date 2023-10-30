#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define N 50

int main ( ) {
    int n ;
    scanf ( "%d" , &n ) ;
    assert ( n>=1 && n<=50 ) ;
    int i , j ; // I¡G°}¦C²Ä´X­Ó¡AJ¡G
    int a[N] ;
    for ( i=0 ; n>i ; i++ ) {
        scanf ( "%d", &a[i] ) ;
        for ( j=2 ; a[i]>j ; j++ ) {
            if ( a[i]%j==0 ) {
                printf ( "NO " ) ;
                break ;
            }
        }
        if ( a[i]==1 ) {
            printf ( "NO " ) ;
        }
        else if ( a[i]<=j ) {
            printf ( "YES " ) ;
        }
    }
    return 0;
}

