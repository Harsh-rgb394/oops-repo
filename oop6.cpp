#include <iostream>
using namespace std;
// herichal inrehtimcae 1 parnet and two chidls

class hero
{
public:
    int x;
    int y;

public:
    void print()
    {
        cout << "im parent";
    }
};

// inhertiance amigituy means declation of same funcions that reults error it can solve
// with socpe resolution
class villain
{
public:
    int z;

public:
    void print()
    {
        cout << "im villan";
    }
};

// muktiple  class inhirtance
class spect : public hero, public villain
{
};

// class child1 : public hero
// {
// public:
//     int z;

// public:
//     void first()
//     {
//         cout << "first child";
//     }
// };

// class child2 : public hero
// {
// public:
//     int t;

// public:
//     void secound()
//     {
//         cout << "secound child";
//     }
// };

int main()
{
    spect s1;
    // same name fduncion how differnce wiht scope resoultion
    // s1.print();
    s1.hero::print();
    s1.villain::print();

    // hero h1;
    // h1.print();

    // child1 c1;
    // c1.print();
    // c1.first();

    // child2 c2;
    // c2.print();
    // c2.first();
    // c2.secound();

    return 0;
}