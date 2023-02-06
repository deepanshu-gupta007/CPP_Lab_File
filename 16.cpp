#include<iostream>
using namespace std;
class A
{
    protected:
        int a;
    public:
        void setA()
        {
            cout<<"Enter A = ";
            cin>>a;
        }
        void showA()
        {
            cout<<"A = "<<a<<endl;
        }
};
class B:public virtual A
{
    protected:
        int b;
    public:
        void setB()
        {
            cout<<"Enter B = ";
            cin>>b;
        }
        void showB()
        {
            cout<<"B = "<<b<<endl;
        }
};
class C:public virtual A
{
    protected:
        int c;
    public:
        void setC()
        {
            cout<<"Enter C = ";
            cin>>c;
        }
        void showC()
        {
            cout<<"C = "<<c<<endl;
        }
};
class D:public B, public C
{
    protected:
        int d;
    public:
        void setD()
        {
            cout<<"Enter D = ";
            cin>>d;
        }
        void showD()
        {
            cout<<"D = "<<d<<endl;
        }
};
int main()
{
    D obj;
    obj.setA();
    obj.setB();
    obj.setC();
    obj.setD();
    obj.showA();
    obj.showB();
    obj.showC();
    obj.showD();
    return 0;
}