
#ifndef __BOZK_TYPES_H__
#define __BOZK_TYPES_H__

#include <stdint.h>

typedef int bk_error_t;

typedef uint16_t bk_dev_id_t;

typedef uint16_t bk_dev_fd_t;
#define BK_DEV_FD_INVALID  ((bk_dev_fd_t)-1)

typedef int16_t bk_ssize_t;
typedef uint16_t bk_size_t;

#endif // __BOZK_TYPES_H__
