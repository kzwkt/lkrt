#include <generated/autoconf.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/utsname.h>
#include <ctype.h>
#include <krt_appl.h>

int detect_kernel_version(struct kernel_version *kver)
{
    struct utsname utsname;
    char *kver_release;
    long ver[16];
    int i = 0;
    int ret = EXIT_SUCCESS;

    if (uname(&utsname) != 0) {
        ret = EXIT_FAILURE;
    }

    kver_release = utsname.release;

    while (*kver_release) {
        if (isdigit(*kver_release)) {
            ver[i] = strtol(kver_release, &kver_release, 10);
            i++;
        } else {
            kver_release++;
        }
    }

    kver->major = ver[0];
    kver->minor = ver[1];
    kver->patch = ver[2];

    return ret;
}
