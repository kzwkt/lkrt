#include <generated/autoconf.h>
#include <getopt.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <lkrt.h>
#include <krt_appl.h>

int main(int argc, char **argv)
{
    struct kernel_version kver;
    int err;
    int ret = EXIT_FAILURE;

#ifdef CONFIG_ENABLE_CLI
    int opt;

    static struct option long_options[] = {
        { "device", required_argument, 0, 'd' },
        { "exploit", required_argument, 0, 'e' },
        { "help", no_argument, 0, 'h' },
        { "kernel", required_argument, 0, 'k' },
        { "list", no_argument, 0, 'l' },
        { "version", no_argument, 0, 'v' },
        { 0, 0, 0, 0 }
    };

    while (true) {
        int option_index = 0;
        opt = getopt_long(argc, argv, "hv0", long_options, &option_index);

        if (opt == -1)
            break;

        switch (opt) {
        case 'd':
            printf("TODO: add device logic\n");
            break;
        case 'e':
            printf("TODO: add exploit logic\n");
            break;
        case 'h':
            print_usage(EXIT_SUCCESS);
            break;
        case 'k':
            printf("TODO: add kernel logic\n");
            break;
        case 'l':
            printf("TODO: add list logic\n");
            break;
        case 'v':
            print_version(EXIT_SUCCESS);
            break;
        case 0:
            if (strcmp(long_options[option_index].name, "device") == 0)
                print_usage(EXIT_SUCCESS);
            if (strcmp(long_options[option_index].name, "exploit") == 0)
                print_usage(EXIT_SUCCESS);
            if (strcmp(long_options[option_index].name, "help") == 0)
                print_usage(EXIT_SUCCESS);
            if (strcmp(long_options[option_index].name, "kernel") == 0)
                print_usage(EXIT_SUCCESS);
            if (strcmp(long_options[option_index].name, "list") == 0)
                print_usage(EXIT_SUCCESS);
            if (strcmp(long_options[option_index].name, "version") == 0)
                print_version(EXIT_SUCCESS);
            break;
        case '?':
            print_usage(EXIT_FAILURE);
        }
    }

#endif

    printf("Auto-detecting kernel version...\n");
    err = detect_kernel_version(&kver);

    if (err) {
        ret = EXIT_FAILURE;
    } else {
        printf("Kernel version: %ld.%ld.%ld\n", kver.major, kver.minor,
               kver.patch);
        ret = EXIT_SUCCESS;
    }

    exit(ret);
}
