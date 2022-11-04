#include "range.h"

cspan_t
create_cspan( const void * const begin, const int64_t n, const int64_t step ) {
    void * const tmp = ( void * ) ( ( char * ) begin + ( n * step ) );

    const cspan_t result = {
        .begin = begin,
        .end = tmp,
        .step = step, // Extra comma for clang-format
    };

    return result;
}

