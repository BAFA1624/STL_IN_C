#ifndef RANGE_H
#define RANGE_H

#include <stdint.h>

// Non-owning reference to span of elements.
// Invalidated if referenced data goes out-of-scope.
typedef struct CONTIGUOUS_SPAN
{
    const void * begin;
    const void * end;
    int64_t      step;
} cspan_t;

// Create cspan_t
cspan_t create_cspan( const void * const begin, const int64_t n,
                      const int64_t step );



#endif // RANGE_H
