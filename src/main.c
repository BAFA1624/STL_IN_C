#include "algorithm.h"

#include <stdio.h>
#include <stdlib.h>

int
main() {
    int64_t sz = sizeof( int );
    int *   array = ( int * ) malloc( 20 * sz );
    cspan_t test = create_cspan( array, 20, sz );

    /*for ( char * i = ( char * ) test.begin; i < ( char * ) test.end; i +=
                                                                     test.step )
    { printf( "%lld\n", *( int64_t * ) i ); }*/

    free( array );
}
