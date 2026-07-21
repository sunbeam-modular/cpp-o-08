#include <stdio.h>

// struct in C++ -- 
//  collection of logically related data members
//      and the functions operating on that data
//  e.g. person --> string name, int age, string addr
//          --> display_person(), can_vote(), ...
//  e.g. time --> int hrs, int mins, int secs --> clock time
//          --> display(), increment(), ...

//  all members are by default public.

struct time {
    // data members
public:
    int hrs;
    int mins;
    int secs;
    // member functions
public:
    void display() {
        printf("Time=> %d:%d:%d\n", hrs, mins, secs);
    }
    void increment() {
        // increment secs, increment mins, increment hrs(0-23) ...
    }
};

int main()
{
    struct time t1 = { 21, 02, 15 }; // declare var & init it
    struct time t2; // declare var
    t2.hrs = 37;
    t2.mins = 59;
    t2.secs = 59;
    t2.increment();
    struct time* p2 = &t2;
    t1.display();
    p2->display();
    return 0;
}

