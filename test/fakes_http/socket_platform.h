#ifndef FAKE_SOCKET_PLATFORM_H
#define FAKE_SOCKET_PLATFORM_H

#ifdef _WIN32
/* Match the POSIX/lwIP descriptor range used by fake sessions (100 and above). */
#define FD_SETSIZE 1024
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <winsock2.h>
#include <sys/types.h>
/* These tests simulate POSIX/lwIP nonblocking sends; no Windows socket is used. */
#define MSG_DONTWAIT 0x40
#define SHUT_RDWR SD_BOTH
#else
#include <sys/socket.h>
#include <sys/select.h>
#endif

int fake_socket_shutdown(int fd, int how);
#define shutdown fake_socket_shutdown

#endif
