#include <iostream>
using namespace std;

class hero
{

public:
    int x;
    int y;

public:
    void getx()
    {
        cout << "value of x" << x;
    }
    void gety()
    {
        cout << "value of x" << y;
    }

    void set(int p, int q)
    {

        x = p;
        y = q;
    }
};

// for inhertinace child making
// class keyowrd +child class name +access modeifer specify + parnet class name
class bachha : protected hero
{

public:
    int age;

public:
    void get()
    {
        cout << "age is" << age;
    }
    void addx()
    {
        cout << "vlaue of x after 2 add" << x + 2;
    }
};

int main()
{
    bachha b1;
    // b1.x;
    b1.getx();
    b1.gety();
    b1.set(2, 3);
    b1.getx();
    b1.gety();
    b1.age;
    // procted is similar to prviate cnanot access outside the class but accees inside class
    // and can access child class

    // inhertance like parent to child some peropesties or featirespaased down
    // parent class/super class /base clas
    // child class /sub class/derived class
    // public parent +public child class=public
    // public parent +private child class=private
    // public parent +protected child class=protected

    // protected elemetn or varibale hai mein parent +public child class=protected
    // protected elemetn or varibale hai mein parent +private child class=protected
    // protected elemetn or varibale hai mein parent +protected child class=private

    // prviate parent elmetn hai +public child class=Na
    // prviate parent +private child class=Na
    // prviate parent +protected child class=Na

    return 0;
}