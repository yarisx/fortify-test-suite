#include <string.h>
#include <fcntl.h>
#include <stdio.h>
#include "test_common.c"

int main(int argc, char ** argv) {
  char buffer[3] = {0};
  int  res = 0;
  int fd = open("/dev/null", O_RDONLY);
#ifdef STATIC_CHECK
  res = read(fd, buffer, 4);
#endif
  if (argc > 1) {
    CHK_FAIL_START
    res = read(fd, buffer, argc);
    CHK_FAIL_END
  }
  close(fd);
  return ret;
}

