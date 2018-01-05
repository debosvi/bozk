/* ISC license. */

#include <bozk/siovec.h>
#include <bozk/cbuffer.h>

size_t cbuffer_getv (cbuffer_t *b, struct iovec const *v, unsigned int n)
{
  struct iovec vsrc[2] ;
  size_t w ;
  cbuffer_rpeek(b, vsrc) ;
  w = siovec_deal(v, n, vsrc, 2) ;
  return cbuffer_RSEEK(b, w) ;
}
