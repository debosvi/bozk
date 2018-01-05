/* ISC license. */

#include <bozk/bytestr.h>

size_t byte_count (char const *s, size_t len, char b)
{
  size_t n = 0 ;
  while (len--) if (*s++ == b) n++ ;
  return n ;
}
