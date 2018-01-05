/* ISC license. */

#include <bozk/errors.h>
#include <bozk/cbuffer.h>

int cbuffer_init (cbuffer_t *b, char *s, size_t len)
{
  if (len < 2) return (BK_ERROR_EINVAL) ;
  b->x = s ;
  b->a = len ;
  b->p = b->n = 0 ;
  return 1 ;
}
