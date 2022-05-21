#include <generated/autoconf.h>
#include <generated/version.h>
#include <stdio.h>
#include <stdlib.h>
#include <lkrt.h>

void print_usage(int status)
{
    printf("Usage: %s [option] ... [command] ...\n"
           "\n%s\n"
           "\n  -d, --device"
           "\n  -e, --exploit"
           "\n  -h, --help       display this help and exit"
           "\n  -k, --kernel"
           "\n  -l, --list"
           "\n  -v, --version    output version information and exit"
           "\n\nlkrt online help: <https://gitlab.com/oxr463/lkrt>"
           "\nFull documentation <https://oxr463.gitlab.io/lkrt>"
           "\nor available locally via: man lkrt\n",
           PROGRAM_NAME, PROGRAM_DESCRIPTION);

    exit(status);
}

void print_version(int status)
{
    printf("%s version %s\n", PROGRAM_NAME, PROGRAM_VERSION);
    exit(status);
}
