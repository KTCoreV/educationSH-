#include <stdio.h> // add basic C labriray of commands
#include <cs50.h> // addet aditional labriry writen by Harward

/* ПРОБЛЕМЫ: (1) при задании нечетных цифр с 3 в конце, ошибочно подсчитывает число пенни (1 коп.) */
void cashe (void); // anounced function prototype

int main (void) { cashe (); } // main is short cause all job is done in f cashe

void cashe (void) {
    printf ("Enter ammount of change You recive\n"); 
    float change = get_float(); int n=0; int q=0; int t=0; int f=0; int p=0; // retrive form USER ammount of change at set counters fo coins
    if (change>=0.001){  // check if USER entered a valid number of change
        while (change>0.00) {   // loop that asks how much change has left 
            // if change is greater than a quarter numder of coins is increesed and 25 is substracted from change
            if (change>=0.25){change=change-0.25; n++; q++;} 
            // if change is lesser than 25 but greater or equal to 10, give 10th coin and incrise coin counter
            else if (change<0.25 && change>=0.1) {change=change-0.1; n++; t++;} 
            // if change is lesser than 10 but greater or equal to 5, give 5th coin and incrise coin counter
            else if (change<0.1 && change>=0.05) {change=change-0.05; n++; f++;}
            // if change is lesser than 5, give penny and incrise coin counter. PROBLAM located here!!! If enter non even NUM - wrong ammount of pennies
            else if (change<0.05) {change=change-0.01; n++; p++;}}
        
    } else { printf("Wrong number. :(\n"); cashe ();} // if USER entered a wrong sum function ask a new entery by self-recalling
    printf ("You recived %i coins\n Quarters: %i, 10th: %i, 5th: %i, penny: %i\n Change remains: %30f\n", n, q, t, f, p, change); // printing number of coins given as change 
} // end of main 
