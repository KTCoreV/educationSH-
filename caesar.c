#include <stdio.h> // add basic C labriray of commands
#include <cs50.h> // addet aditional labriry writen by Harward
#include <string.h> // added dll for work with strings

int main (void) {
    printf ("Enter message to code with Ceaser\n"); string msg = get_string();
    printf ("Enter secret number\n"); int n = get_int();
    for (int i=0; i<strlen(msg); i++) {
    if (msg[i]>n || msg[i]>=256-n) msg[i]=msg[i]-n; // shifting letters to -
    else msg[i]=msg[i]+n; // shifting letters to +
    }//for
    printf ("\nYour massage is: %s\n", msg);
} //main
