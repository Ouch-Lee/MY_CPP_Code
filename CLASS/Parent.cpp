#include <iostream>
#include <string>

using namespace std;
class Parent
{
private:
    /* data */
    int id;
    string name;

public:
    Parent(/* args */) : id(1), name("null")
    {
        cout << "calling default constructor \n"  ; // << endl
    };

    Parent(int i, string n) : id(i), name("null")
    {
        cout << "calling Parent constructor \n"  ;
    }
    ~Parent();
};

Parent::Parent(/* args */)
{
}

Parent::~Parent()
{
}
