#include <stdio.h> // add basic C labriray of commands
#include <cs50.h> // added aditional labriry writen by Harward
#include <string.h> // added dll for work with strings

int main (int wc, string wn[]) { // main recives string thrugh command line
//chek number of arguments entered in command line
if (wc<2 || wc>2) {printf ("Error! You must enter a single secret word in command line!"); return 1;}
    // saving word wn[1] in pass variable of type string and counting its length
    string pass = wn[1]; int wnl = strlen(pass); int i;

//check if USER entered the latin letters
for (i=0; i<wnl; i++){
    if (pass[i]<65 || (pass[i]>90 && pass[i]<97) || pass[i]>122){
    printf ("Error. Only latin letters are allowed! Restart."); return 1;}//if2
    }//for wn check

//convert string pass to int array, substract numbers to 0-25 values
int codeSequance[wnl];
for (i=0; i<wnl; i++) { 
    if (pass[i]<97) codeSequance[i]=(int)pass[i]-65;
    else codeSequance[i]=(int)pass[i]-97;
    }//for of codeSequance

// USER input of a message to encode
printf ("Enter message to encode with Vigener\n"); 
string msg = get_string(); int sl = strlen(msg); // accept message to code and count number of letters

//encoding doble loop for sl and wnl
int j=0;
for (i=0; i<sl; i++){
if (i<sl && j==wnl){j=0;}// loop of wnl code
    for (; j<wnl; j++){
        if (msg[i]+codeSequance[i]<65 || (msg[i]+codeSequance[i]>90 && msg[i]+codeSequance[i]<97)){
            msg[i]=msg[i]+codeSequance[i]+26;
        }//if msg+codeSequance are beyond MIN limits
        if ((msg[i]+codeSequance[i]>90 && msg[i]+codeSequance[i]<97) || msg[i]+codeSequance[i]>122){
            msg[i]=msg[i]+codeSequance[i]-26;
        }//if msg+codeSequance are beyond MAX limits
        if ((msg[i]+codeSequance[i]>65 && msg[i]+codeSequance[i]<90) || (msg[i]+codeSequance[i]>97 && msg[i]+codeSequance[i]<122)){
            msg[i]=msg[i]+codeSequance[i];}
        if (msg[i]==' ') msg[i]=' ';
        else msg[i]=msg[i];
    }//for wnl (shift of letters) loop

}//for sl (string) loop
     printf ("Encrypted message is:\n %s\n", msg);

//loop for codeSequance
//chek if msg+codeSequance is > than limits
// add numbers to msg

return 0;} //main
