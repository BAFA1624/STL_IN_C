#ifndef RANGE_H
#define RANGE_H

#include <stdint.h>
#include <stdio.h>

// Non-owning reference to span of elements.
// Invalidated if referenced data goes out-of-scope.
typedef struct CONTIGUOUS_SPAN
{
    void *  begin;
    void *  end;
    int64_t step;
} span_t;

typedef struct CONST_CONTIGUOUS_SPAN
{
    const void *  begin;
    const void *  end;
    const int64_t step;
} cspan_t;


void print_span( span_t span );

// Create cspan_t
span_t create_span( void * const begin, const int64_t n, const int64_t step );

cspan_t create_cspan( const void * const begin, const int64_t n,
                      const int64_t step );

// void* foreach(
#endif // RANGE_H
