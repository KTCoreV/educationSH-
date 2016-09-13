#include <stdio.h> // add basic C labriray of commands
#include <cs50.h> // addet aditional labriry writen by Harward

void pyramid (void); // anounced function prototype

int main (void) { pyramid (); } // main is short cause all job is done in f pyramid

void pyramid (void) {
    printf ("Enter a number form 1 to 23\n");
    int n = get_int(); char nz=' '; char nb= '#'; 
    if (n<=23 && n>0) { // check if valid number entered by USER
        for (int i=1; i<=n; i++) // creating a level (row) of blocks
        {
            for (int k=0; k<n-i; k++) {printf ("%c", nz);} // writing spaces to make half pyramid right-alligned
            for (int q=1; q<=i+1; q++) { printf ("%c", nb); } // creating # blocks in a row
            printf ("\n"); // going to new row of blocks
        }}// end of if
    else { printf("Wrong number. :(\n"); pyramid();} // i use self-recall function instead of while loop :)
} // end of main
