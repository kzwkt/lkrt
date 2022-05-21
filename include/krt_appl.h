#ifndef _SECURITY_KRT_APPL_H_
#define _SECURITY_KRT_APPL_H_

#include <generated/autoconf.h>

struct kernel_version {
    long major, minor, patch;
};

int detect_kernel_version(struct kernel_version *kver);

#endif                          /* _SECURITY_KRT_APPL_H_ */
