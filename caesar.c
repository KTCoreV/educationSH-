#include <stdio.h> // add basic C labriray of commands
#include <cs50.h> // added aditional labriry writen by Harward
#include <string.h> // added dll for work with strings
#include <stdlib.h> // this dll used to convert string from command line in to int digit

int main (int nc, string sn[]) {
if (nc!=2) {printf ("Error! You must enter a single secret digit in command line!"); return 1;}
string pass = sn[1]; // int snl = strlen(pass);

//check if USER entered positive digits
for (int i=0; i<nc; i++){
    if (pass[i]<48 || pass[i]>57){
    printf ("Error. Only positive numbers are allowed! Restart."); return 1;}//if2
    }//for wn check

//convert string to int with additional library
int n = atoi(sn[1]); //printf ("Int is: %i", n);
while (n>26) n=n-26; //reducing n to limit of 25 to correctly shift letters in message


//accept a message to encode with secret number
    printf ("Enter message to code with Ceaser\n"); string msg = get_string();
    // printf ("Enter secret number\n"); int n = get_int();
    // 65-90 A-Z, 97-122 a-z
    for (int i=0; i<strlen(msg); i++) {
            if (msg[i]>=65 && msg[i]<91) { // big letters coding
            if (msg[i]-n<65) msg[i]=msg[i]-n+26; // shifting letters when result is lower then min
            else msg[i]=msg[i]-n; // shifting letters to -
        } //if1
    
        if (msg[i]>=97 && msg[i]<123) { // small letters encoding
            if (msg[i]-n<97) msg[i]=msg[i]-n+26; // shifting letters to - when result is lower then min
            else msg[i]=msg[i]-n; // shifting letters to -
        } //if2
    }//for
    printf ("\nYour massage is:\n%s", msg);
    
return 0;} //main
