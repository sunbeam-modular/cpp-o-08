#include <stdio.h>
#include <assert.h>

// class in C++ -- user-defined data type (like struct in C)
//  collection of logically related data members
//      and the functions operating on that data
//  e.g. person --> string name, int age, string addr
//          --> display_person(), can_vote(), ...
//  e.g. time --> int hrs, int mins, int secs --> clock time
//          --> display(), increment(), ...

//  all members are by default private.

class time {
private:    // data members
    int hrs;
    int mins;
    int secs;
public:    // member functions
    void set_hrs(int h) {
        assert(h >= 0 && h < 24); // ensure that the condn is valid
        hrs = h;
    }
    void set_mins(int m) {
        assert(m >= 0 && m < 60);
        mins = m;
    }
    void set_secs(int s) {
        assert(s >= 0 && s < 60);
        secs = s;
    }
    void display() {
        printf("Time=> %d:%d:%d\n", hrs, mins, secs);
    }
    void increment() {
        // increment secs, increment mins, increment hrs(0-23) ...
    }
    // ...
};

int main()
{
    time t2; // declare var
    t2.set_hrs(37); // runtime error -- assertion
    t2.set_mins(59);
    t2.set_secs(59);
    t2.display();
    return 0;
}

