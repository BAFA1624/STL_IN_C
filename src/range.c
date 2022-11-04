#include "range.h"

cspan_t
create_cspan( void * const begin, const int64_t n, const int64_t step ) {
    void * const tmp = ( void * ) ( ( char * ) begin + ( n * step ) );

    const cspan_t result = {
        .begin = begin,
        .end = tmp,
        .step = step, // Extra comma for clang-format
    };

    return result;
}

ccspan_t
create_ccspan( const void * const begin, const int64_t n, const int64_t step ) {
    const void * const tmp = ( void * ) ( ( char * ) begin + ( n * step ) );

    ccspan_t result = {
        .begin = begin,
        .end = tmp,
        .step = step,
    };
    return result;
}

