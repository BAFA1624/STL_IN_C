#include "range.h"

void
print_span( span_t span ) {
    printf( "span{ begin: %p, end: %p, step: %lld }\n", span.begin, span.end,
            span.step );
}

span_t
create_span( void * const begin, const int64_t n, const int64_t step ) {
    const span_t result = {
        .begin = begin,
        .end = ( void * ) ( ( ( char * ) begin ) + ( n * step ) ),
        .step = step,
    };
    return result;
}

cspan_t
create_cspan( const void * const begin, const int64_t n, const int64_t step ) {
    const void * const tmp = ( void * ) ( ( char * ) begin + ( n * step ) );

    const cspan_t result = {
        .begin = begin,
        .end = tmp,
        .step = step, // Extra comma for clang-format
    };

    return result;
}

