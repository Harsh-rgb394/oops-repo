#include <iostream>
using namespace std;

class hero
{
private:
    int z;

public:
    void set(int x)
    {
        this->z = x;
    }
    void get()
    {
        cout << "value is " << z;
    }
};

int main()
{
    hero h1;
    h1.set(2);
    h1.get();
    // h1.set(2, 3);
    // h1.get();
    // encsupluationn wrap in single unit data members + beahvours
    // varibles + funcions
    // full encapsulation means mark all data private
    // advantges
    //  information hdiing/dta hinding
    //  security increase
    // code resuablity
    // encapulsaiton unit testing

    return 0;
}