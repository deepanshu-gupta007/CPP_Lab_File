#include <iostream>
using namespace std;
class implementAbstraction
{
    int a, b;
    public:
        void set(int x, int y)
        {
            a=x;
            b=y;
        }
        void display()
        {
            cout<<"A = " <<a << endl;
            cout<<"B = " << b << endl;
        }
};
int main()
{
    implementAbstraction obj;
    obj.set(10, 20);
    obj.display();
    return 0;
}