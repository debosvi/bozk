
#ifndef __BOZK_DEVICE_H__
#define __BOZK_DEVICE_H__

dev_fd_t device_open(const dev_id_t id);
error_t device_close(const dev_fd_t fd);
error_t device_read(const dev_fd_t fd, void* buf, const bz_size_t count);
bz_size_t device_write(const dev_fd_t fd, const void* buf, const bz_size_t count);

#endif // __BOZK_DEVICE_H__
