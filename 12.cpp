#include <iostream>
using namespace std;
class Base
{
    private:
        int pvt = 1;
    protected:
        int prot = 2;
    public:
        int pub = 3;
};
class Derived1: private Base 
{
    public:
        void display()
        {
            cout<<"Private base private variable: Error\n";
            cout<<"Private base protected variable: "<<prot<<endl;
            cout<<"Private base public variable: "<<pub<<endl;
        }
};
class Derived2: protected Base 
{
    public:
        void display()
        {
            cout<<"Protected base private variable: Error\n";
            cout<<"Protected base protected variable: "<<prot<<endl;
            cout<<"Protected base public variable: "<<pub<<endl;
        }
};
class Derived3: public Base 
{
    public:
        void display()
        {
            cout<<"Public base private variable: Error\n";
            cout<<"Public base protected variable: "<<prot<<endl;
            cout<<"Public base public variable: "<<pub<<endl;
        }
};
int main() 
{
    Derived1 obj1;
    Derived2 obj2;
    Derived3 obj3;
    obj1.display();
    obj2.display();
    obj3.display();
    return 0;
}
