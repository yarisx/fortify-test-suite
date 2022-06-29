#include <stdio.h>
#include "test_common.c"
int main(int argc, char ** argv)
{
    char fmt[] = "%n\n";
#ifdef STATIC_CHECK
    printf("%d %d\n", argc);
#endif
    if (argc > 1) {
        CHK_FAIL_START
        printf(fmt);
        CHK_FAIL_END
    }
    return 0;
}
