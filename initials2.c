#include <stdio.h> // add basic C labriray of commands
#include <cs50.h> // addet aditional labriry writen by Harward
#include <string.h> // added dll for work with strings

int main (void) {
    printf ("Enter Your full name\n"); 
    string FIO = get_string();
    if (FIO[0] != ' ') { 
        if (FIO[0]>=96 && FIO[0]<123) printf ("%c", FIO[0]-32); // to upper case
        else printf ("%c", FIO[0]); // printing leter after space
    } //if1

    for (int i=0; i<strlen(FIO); i++){
    if (FIO[i]==' ' && FIO[i+1] != ' ') { // chek i & i+1 letter for space
        if (FIO[i+1]>=96 && FIO[i+1]<123) printf ("%c", FIO[i+1]-32); // to upper case
        else printf ("%c", FIO[i+1]); // printing leter after space
    } //if2
    }//for
    printf ("\nYour full name is: %s\n", FIO);
} //main
