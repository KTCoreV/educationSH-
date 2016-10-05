#include <stdio.h> // add basic C labriray of commands
#include <cs50.h> // added aditional labriry of commands writen by Harward
#include <math.h> // add math library of commands for round the numbers

void cashe (void); // anounced function prototype

int main (void) { cashe (); } // main is short cause all job is done in f cashe

void cashe (void) {
    printf ("Enter ammount of change You recive\n"); 
     float sum = get_float(); // retrive form USER ammount of change
    int change = round(sum*100); // multiply float on 100 and round it for propper result
    int n=0; // ammount of coins
    
     if (change>0){  // check if USER entered a valid number of change
        while (change>0) {   // loop that asks how much change has left 
       
                // if change is greater than a quarter numder of coins is increesed and 25 is substracted 
                // from change
             if (change>=25){change=change-25; n++; } 
    
                // if change is lesser than 25 but greater or equal to 10, give 10th coin and incrise coin counter
            else if (change<25 && change>=10) {change=change-10; n++; } 
     
                // if change is lesser than 10 but greater or equal to 5, give 5th coin and incrise coin counter
            else if (change<10 && change>=5) {change=change-5; n++; }
     
                // if change is lesser than 5, give penny and incrise coin counter. PROBLAM located here!!!
            else if (change<5 && change>0) {change=change-1; n++; }
        }//while
    
    // if USER entered a wrong sum function ask a new entery by self-recalling
    } else { printf("Wrong number. :(\n"); cashe ();} 
    
    //printing number of coins given as change
    printf ("%i\n", n);   
} // end of cashe
