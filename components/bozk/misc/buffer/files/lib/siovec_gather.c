/* ISC license. */

#include <string.h>
#include <bozk/siovec.h>

size_t siovec_gather (struct iovec const *v, unsigned int n, char *s, size_t max)
{
  size_t w = 0 ;
  unsigned int i = 0 ;
  for (; i < n && w < max ; i++)
  {
    size_t len = v[i].iov_len ;
    if (len > max - w) len = max - w ;
    memmove(s + w, v[i].iov_base, len) ;
    w += len ;
  }
  return w ;
}
