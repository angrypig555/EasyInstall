/*USAGE: Please read the manual file before continuing to configure it */
/*THIS IS INDEV SOFTWARE. THIS VERSION IS UNFINISHED.*/
#include <stdio.h>
#include <stdlib.h>
/*Name of the software*/
char name[100] = "INSERTSOFTWARENAME";
char fname[50] = "null";/* Name of the .c file */
char oname[50] = "null";/*Name of the output file*/
char input[10] = "";
char cmd1[512];
char cmd2[512];

int main() {
	/*Display program name*/
	printf("Easyinstaller V0.0.4 INDEV")
	printf("Installer for %s\n", name);
	/* Asks for GCC*/
	printf("THE INSTALLER REQUIRES GCC TO FUNCTION PROPERLY\n");
	printf("Do you have it installed?[y/n]\n");
	scanf(" %c", &input );
	if (input == "y") {
		printf("OK\n");
	} else if (input == "n") {
		printf("This installer requires gcc to function properly\n");
		return 0;
	}
	printf("Now installing: %s\n", fname);
	sprintf(cmd1, "gcc %s -o %s &> /dev/null", fname, oname);
	system(cmd1); /*Compiles program*/
	printf("The program %s has installed succesfully! Launch the %s file to run the program\n", name, oname);
	sprintf(cmd2, "rm %s &> /dev/null", fname);
	system(cmd2);
	return 0;
}
