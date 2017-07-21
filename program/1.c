
#define _GNU_SOURCE
#define _FILE_OFFSET_BITS 64

#include <stdio.h>
#include <stdarg.h>
#include <stdint.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <syslog.h>
#include <pthread.h>
#include <semaphore.h>
#include <limits.h>
#include <time.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <sys/syscall.h>
#include <sys/utsname.h>
#include <math.h>
#include <dirent.h>
#include <sched.h>
#include <linux/if_link.h>
#include <netdb.h>
#include <ifaddrs.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <sys/resource.h>
#include <dirent.h>
#include <emmintrin.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/sysctl.h>
#include <linux/sysctl.h>

/*tokens={"""incoming":"","outgoing":""},"""incoming":"","outgoing":""},"""incoming":"","outgoing":""} }'*/

#define scan_for_single_int(varname) scan_input_int (#varname)

int scan_input_int (char *varname_str)
{
	int choice = 0;

	printf ("\n%s: ", varname_str);
	do {
		__fpurge(stdin);
		if ((scanf("%d", &choice) != 1) && (choice < 0)) {
			printf("Enter a valid value for %s\n", varname_str);
		} else
			break;
	} while (1);

	return choice;
}

int main (int argc, char **argv)
{
	int num1, num2, num3, num4;
	/*char a[200];*/
	/*uint64_t v = 123;*/
	/*sprintf (a, "\"incoming\":\"<i%lld>\"", v);*/
	/*sprintf (a, "'tokens={\"%s\":{\"incoming\":\"%d\",\"outgoing\":\"%d\"},\"%s\":{\"incoming\":\"%d\",\"outgoing\":\"%d\"},\"%s\":{\"incoming\":\"%d\",\"outgoing\":\"%d\"} }'", "first", 123, 234, "second", 345, 456, "third", 567, 678);*/
	/*printf ("%s\n", a);*/

	num1 = scan_for_single_int (num1);
	num2 = scan_for_single_int (num2);
	num3 = scan_for_single_int (num3);
	num4 = scan_for_single_int (num4);

	printf ("num1: %d\n", num1);
	printf ("num2: %d\n", num2);
	printf ("num3: %d\n", num3);
	printf ("num4: %d\n", num4);

	return 0;
}

