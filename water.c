#include <stdio.h> // add basic C labriray of commands
#include <cs50.h> // added aditional labriry of commands writen by Harward

int main (void)
{
    printf ("minutes: ");
    int iShowerTime= get_int(); //ask for input of time spent in shower
    int iWaterUsage=192;  
    int iW = iWaterUsage * iShowerTime;
    printf ("bottles: %i\n", iW/16); // printing out ammount of water
}//main
