// demo02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <assert.h>

class time {
private:
    int hrs, mins, secs;
public:
    // if no constructor is implemented by the programmer, then the compiler
    //  provides a default constructor - which doesn't initialize data members

    // constructor - param-less - initialize the object (with fixed values)
    //  constructor name = class name
    //  no explicit return type
    //  auto called by the compiler ... to initialize the object
    time() {
        this->hrs = 0;
        this->mins = 0;
        this->secs = 0;
    }
    // constructor - parameterized - initialize the object (with given values/args)
    time(int hrs, int mins, int secs) {
        this->hrs = hrs;
        this->mins = mins;
        this->secs = secs;
    }
    //  if no destructor written by programmer, a default destructor provided by the compiler.

    // destructor - complement of constructor i.e. de-initialize the object
    //  programmer can write at max one destructor in class -- always paramless.
    ~time() {
        // for very simple class -- writing destructor is not needed
        //  you can rely on compiler provided default destructor
        printf("bye!\n");
    }
    // setters or mutators
    void set_hrs(int hrs) {
        assert(hrs >= 0 && hrs < 24);
        this->hrs = hrs;
    }
    void set_mins(int mins) {
        assert(mins >= 0 && mins < 60);
        this->mins = mins;
    }
    void set_secs(int secs) {
        assert(secs >= 0 && secs < 60);
        this->secs = secs;
    }
    // getters or inspectors
    int get_hrs() {
        return this->hrs;
    }
    int get_mins() {
        return this->mins;
    }
    int get_secs() {
        return this->secs;
    }
    // facilitators
    void display() // void display(time * this) 
    {
        //printf("time=> %d:%d:%d\n", hrs, mins, secs);
        printf("time=> %d:%d:%d\n", this->hrs, this->mins, this->secs);
    }
};


int main()
{
    // struct time t1 = { 10, 20, 40 }; // In C -- declare & initialize
    time t1; // local var is created on stack
    t1.set_hrs(10);
    t1.set_mins(10);
    t1.set_secs(10);

    time t2; // local var is created on stack
    t2.set_hrs(15);
    t2.set_mins(15);
    t2.set_secs(15);
    //t1.hrs = 12; // error: private members cannot be accessed outside the class

    t1.display(); // display(&t1);
    t2.display(); // display(&t2);
    
    printf("time=> %d-%d-%d\n", t2.get_hrs(), t2.get_mins(), t2.get_secs());
    if(t2.get_hrs() > 12)
        printf("time=> %d-%d-%d PM\n", t2.get_hrs()-12, t2.get_mins(), t2.get_secs());
    else
        printf("time=> %d-%d-%d AM\n", t2.get_hrs(), t2.get_mins(), t2.get_secs());
    
    time t3;    // initialization done by param-less ctor
    t3.display();

    time t4(10, 20, 40); // initialization done by parameterized ctor
    t4.display();

    //time t5(1, 1); // error: no ctor available with 2 args
    return 0;
}
