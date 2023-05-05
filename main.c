/*USAGE: Please read the manual file before continuing to configure it */
#include <stdio.h>
#include <stdlib.h>
/*Name of the software*/
char name[100] = "INSERTSOFTWARENAME";
char fname[50] = "null";/* Name of the .c file */
char oname[50] = "null";/*Name of the output file*/
char input[1] = "";
char cmd1[512];
char cmd2[512];

int main() {
	/*Display program name*/
	printf("Installer for %s\n", name);
	/* Asks for GCC*/
	printf("THE INSTALLER REQUIRES GCC TO FUNCTION PROPERLY\n");
	printf("Do you have it installed?[y/n]\n");
	scanf("%s", input );
	if (input == "y") {
		printf("OK\n");
	} else if (input == "n") {
		printf("This installer requires gcc to function properly\n");
		return 0;
	} else {
		printf("Invalid option.\n");
		return 0;
	}
	printf("Now installing: %s", fname);
	sprintf(cmd1, "gcc %s -o %s > log", fname, oname);
	system(cmd1); /*Compiles program*/
	printf("The program %s has installed succesfully! Launch the %s file to run the program\n", name, oname);
	sprintf(cmd2, "rm %s > log", fname);
	system(cmd2);
	return 0;
}
