//11c -- postincrement with friend function
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
        friend abc operator--(abc &ob, int);
};
abc operator--(abc &ob, int)
{
    abc ob1; 
    ob1.n=--ob.n;
    return ob1;
}
int main()
{
    abc ob, pp;
    ob.getdata();
    cout<<"Previous Value = "<<ob.value()<<endl;
    ob=(ob--);
    cout<<"New Value = "<<ob.value()<<endl;
    return 0;
}