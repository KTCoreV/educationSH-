#include <stdio.h> // add basic C labriray of commands
#include <cs50.h> // addet aditional labriry writen by Harward
#include <string.h> // added dll for work with strings

int main (void) {
    printf ("Enter Your full name\n"); 
    string FIO = get_string();
    printf ("%c", FIO[0]); //printing first letter
    for (int i=1; i<strlen(FIO); i++){
    //if (FIO[i]>=65 && FIO[i]<91) printf ("%c", FIO[i]); // solution 1 select capital letters
    if (FIO[i]==' ') printf ("%c", FIO[i+1]); // solurion 2 select i+1 letter after space 
    }//for
    printf ("\nYour full name is: %s\n", FIO);
} //main
