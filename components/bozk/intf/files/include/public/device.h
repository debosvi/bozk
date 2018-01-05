
#ifndef __BOZK_DEVICE_H__
#define __BOZK_DEVICE_H__

#include <bozk/types.h>
#include <bozk/dev_types.h>

bk_dev_fd_t bk_dev_open(const bk_dev_id_t id);
bk_error_t bk_dev_close(const bk_dev_fd_t fd);
bk_error_t bk_dev_read(const bk_dev_fd_t fd, void* buf, const size_t count);
bk_error_t bk_dev_write(const bk_dev_fd_t fd, const void* buf, const size_t count);

#endif // __BOZK_DEVICE_H__
