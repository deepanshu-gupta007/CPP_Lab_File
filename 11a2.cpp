//11a without friend fn
#include <iostream>
using namespace std;
class abc
{
    int n;
    public :
        void getdata()
        {
            cout<<"Enter value: ";
            cin>>n;
        }
        int value()
        {
            return n;
        }
        abc operator-()
        {
            abc ob1;
            ob1.n=-n;
            return ob1;
        }
};
int main()
{
    abc ob;
    ob.getdata();
    ob=(-ob);
    cout<<"New Value = "<<ob.value()<<endl;
    return 0;
}