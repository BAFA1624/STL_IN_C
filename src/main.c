#include "algorithm.h"

#include <stdlib.h>

int
main() {
    int64_t sz = sizeof( int );
    int *   array = ( int * ) malloc( 20 * sz );
    cspan_t test = create_cspan( array, 20, sz );

    free( array );
}
