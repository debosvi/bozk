/* ISC license. */

#include <bozk/cbuffer.h>

size_t cbuffer_rseek (cbuffer_t *b, size_t len)
{
  size_t max = cbuffer_len(b) ;
  if (len > max) len = max ;
  return cbuffer_RSEEK(b, len) ;
}
