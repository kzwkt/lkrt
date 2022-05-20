#include <generated/autoconf.h>
#include <getopt.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <lkrt.h>

int main(int argc, char **argv)
{
#ifdef CONFIG_ENABLE_CLI
	int opt;

	static struct option long_options[] = {
		{"help", no_argument, 0, 'h'},
		{"version", no_argument, 0, 'v'},
		{0, 0, 0, 0}
	};

	while (true) {
		int option_index = 0;
		opt = getopt_long(argc, argv, "hv0", long_options, &option_index);

		if (opt == -1)
			break;

		switch (opt) {
			case 'h':
				print_usage(EXIT_SUCCESS);
				break;
			case 'v':
				print_version(EXIT_SUCCESS);
				break;
			case 0:
				if (strcmp(long_options[option_index].name, "help") == 0)
					print_usage(EXIT_SUCCESS);
				if (strcmp(long_options[option_index].name, "version") == 0)
					print_version(EXIT_SUCCESS);
				break;
			case '?':
				print_usage(EXIT_FAILURE);
		}
	}


#endif

	exit(EXIT_SUCCESS);
}
