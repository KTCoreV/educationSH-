#include <stdio.h> // add basic C labriray of commands
#include <cs50.h> // addet aditional labriry writen by Harward
#include <string.h> // added dll for work with strings

int main (void) {
    printf ("Enter message to code with Ceaser\n"); string msg = get_string();
    printf ("Enter secret number\n"); int n = get_int();
    for (int i=0; i<strlen(msg); i++) {
            if (msg[i]>=65 && msg[i]<91) { // big letters coding
            if (msg[i]-n<65) msg[i]=msg[i]-n+26; // shifting letters to - when result is lower then min
            else msg[i]=msg[i]-n; // shifting letters to -
        } //if1

        if (msg[i]>=96 && msg[i]<123) { // small letters encoding
            if (msg[i]-n<96) msg[i]=msg[i]-n+26; // shifting letters to - when result is lower then min
            else msg[i]=msg[i]-n; // shifting letters to -
        } //if2
    }//for
    printf ("\nYour massage is:\n%s", msg);
} //main
