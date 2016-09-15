#include <stdio.h> // add basic C labriray of commands
#include <cs50.h> // addet aditional labriry writen by Harward

/* Я решилизменить описание задачи, на более адекватное. Ибо у банкоматов нет своих БД
 на 100 человек. Речь будет о личном счете постоянного клиента в магазине. Это уже адекватно.
 
 Задача: разработать БД постоянных клиентов на 100 чел., с функциями:
 1) просмотр бонусного счета; 2) снятие денег с бонусного счета.
 Итого: задача та-же, но сама задача уже адекватна реальности. 
 
 ПРОБЛЕМЫ: (1) не получается передавать в аргумент и результат функций множества*/

int initCDB (int CDB[], int totalClients);
int accountStep1 ();
void accountStep2 (int accountN);
void accountInfo (int CDB[], int accountN);
int accountGetMoney (int CDB[], int accountN);

int main (void) { int totalClients=100; int CDB[totalClients]; // array for client accounts in database 
initCDB(CDB[], totalClients);
int accountN = accountStep1();
} //MAIN


// f of initizlazing shop clients accounts DB
int initCDB (int CDB[], int totalClients) {for (int i=0; i<100; i++) {CDB[i]=10*i-(i*4);}
return CDB[];} //initCDB 

// f for getting from client number of HER/HIS account STEP 1
int accountStep1 () {
    printf ("Enter a number of Your account, pretty-pretty please\n");
    int accN=get_int();
    while (accN<0 && accN>99) { //ensure USER entered a valid account number
        printf ("Wrong number of account!\n Enter valid number Scum!\n"); accN=get_int();}
   accountStep2(accN); //go to STEP 2
return accN;} //accountStep1 

// f for selection of available actions on STEP 2
void accountStep2 (int accountN) {
    printf ("Dear MoneyBag, sorry - CLient, pretty-pretty please select Your action\n 1) Watch Your account.\n 2) Take money from Your account.\n");
    int actionN=get_int();
    while (actionN<1 && actionN>2) { //ensure USER have entered a valid action
        printf ("No such action Scum!\n Select between 1 and 2\n"); actionN=get_int();
    }
    switch (actionN) {
        case 1: accountInfo( CDB[], accountN); break;
        case 2: CDB[accountN]= accountGetMoney(CDB[], accountN); break;
    } //SWITCH
} //accountStep2


// f for watching ammount of money on a Buyer account
void accountInfo (int CDB[], int accountN) { printf ("There is $%i on Your account number #%i\n", CDB[accountN], accountN);
} //accountInfo

// f for withdraw of money from Buyer account
int accountGetMoney (int CDB[], int accountN) {int sumTOdraw=0;
    while (sumTOdraw>CDB[accountN] && sumTOdraw<1){
        accountInfo(CDB, accountN);
        printf ("Enter ammount of money to withdraw");
        sumTOdraw = get_int();
    }//while
    CDB[accountN]=CDB[accountN]-sumTOdraw;
    printf ("You withdraw %i. There is $%i on Your account.\n Thank You for using our shop!\n We are glad to have your money. :)\n", sumTOdraw, CDB[accountN]);
return CDB[accountN];} //accountGetMoney

