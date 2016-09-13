#include <stdio.h> // add basic C labriray of commands
#include <cs50.h> // addet aditional labriry writen by Harward

int main (void)
{
    printf ("Enter time You spend in a shower, please.\n");
    int waterUsage=129; int showerTime= get_int(); int w = waterUsage * showerTime; // reciving values and calculating ammount of bottles
    printf ("Water usage for %i minutes of shower is %i onces\n", showerTime, w);
    printf ("This ammount of water is equal to %i bottles of water\n", w/16);
}// end of main
