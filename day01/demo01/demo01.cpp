#include <stdio.h>

// struct in C -- collection of logically related data elements
//  - can be of same time or of different type
//  e.g. person --> string name, int age, string addr
//  e.g. time --> int hrs, int mins, int secs

struct time {
    int hrs;
    int mins;
    int secs;
};

void display(struct time* tm) {
    printf("Time=> %d:%d:%d\n", tm->hrs, tm->mins, tm->secs);
}

int main()
{
    struct time t1 = { 21, 02, 15 }; // declare var & init it
    struct time t2; // declare var
    t2.hrs = 10;
    t2.mins = 20;
    t2.secs = 40;
    display(&t1);
    display(&t2);
    return 0;
}

