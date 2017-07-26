#ifndef MY_HEADER
#define MY_HEADER
#define SUCCESS 0
#define EXIT -1
#define scan_for_single_int(varname) scan_input_int (#varname)

int scan_input_int (char *varname_str)
{
	int num_int = 0;

	printf ("\nEnter the %s: ", varname_str);
	do {
		__fpurge(stdin);
		if ((scanf("%d", &num_int) != 1) || (num_int < 0)) {
            printf("---Invalid input---\n");
			printf("Positive number only for %s\n", varname_str);
		} else
			break;
	} while (1);

	return num_int;
}
#endif 

