/* ISC license. */

#include <bozk/cbuffer.h>

void cbuffer_wpeek (cbuffer_t const *b, struct iovec *v)
{
  size_t last = (b->a - 1 + b->p) % b->a ;
  v[0].iov_base = b->x + b->n ;
  if (last >= b->n)
  {
    v[0].iov_len = last - b->n ;
    v[1].iov_base = 0 ;
    v[1].iov_len = 0 ;
  }
  else
  {
    v[0].iov_len = b->a - b->n ;
    v[1].iov_base = b->x ;
    v[1].iov_len = last ;
  }
}
