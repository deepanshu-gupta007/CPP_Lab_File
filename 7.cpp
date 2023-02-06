#include<iostream>
using namespace std;
class tollbooth
{
    int tc, tp, tnp;
    double tm;
    public:
        tollbooth()
        {
            tp=0, tnp=0, tc=0, tm=0;
        }
        void payingcar()
        {
            tp++;
            tm=tm+0.5;
        }
        void nonpaycar()
        {
            tnp++;
        }
        void display()
        {
            tc=tp+tnp;
            cout<<"Total number of paying cars: "<<tp<<endl;
            cout<<"Total number of non-paying cars: "<<tnp<<endl;
            cout<<"Total number of cars: "<<tc<<endl;
            cout<<"Total amount: "<<tm<<endl;
        }
};
int main()
{
    tollbooth t;
    t.payingcar();
    t.nonpaycar();
    t.display();
    return 0;
}