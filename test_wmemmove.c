#include <stdio.h>
#include <wchar.h>
#include "test_common.c"

int main(int argc, char ** argv) {
  wchar_t buffer[4] = {0};
#ifdef STATIC_CHECK
  wmemmove(buffer, L"y", 5);
#endif
  wmemmove(buffer, L"y", 4);
  fputws(buffer, stdout);
  if (argc > 1) {
    CHK_FAIL_START
    wmemmove(buffer, L"y", argc);
    CHK_FAIL_END
  }
  fputws(buffer, stdout);
  return ret;
}

