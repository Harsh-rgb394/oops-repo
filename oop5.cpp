#include <iostream>
using namespace std;

class hero
{

public:
    int a;
    int b;

public:
    void bark()
    {
        cout << "bark" << endl;
    }
};

class human
{

public:
    int c;
    int d;

public:
    void print()
    {
        cout << "speaking";
    }
};

// multiple inhertince
class hybrid : public hero, public human
{
};
// single level inhertincae
class ironman : public hero
{
};

class falcon : public hero
{
};
// more than 1 level mutilevle inhertince
class vsison : public hero
{
};

int main()
{
    // vsison v1;
    // v1.print();
    hybrid h1;
    h1.bark();
    h1.print();

    return 0;
}