#include<iostream>
#include<math.h>
using namespace std;
class polynomial
{
    float a, b, r1, r2, y;
    int c;
    public:
        void getdata()
        {
            cout<<"Enter all the coefficient:\n";
            cin>>a>>b>>c;
        }
        void roots()
        {
            y=(b*b-4*a*c);
            if(y>0)
            {
                r1=(-b+pow(y,0.5))/(2*a);
                r2=(-b-pow(y,0.5))/(2*a);
                cout<<"Roots are: "<<r1<<" and "<<r2<<endl;
            }
            else
                cout<<"No real roots\n";
            
        }
        
};
int main()
{
    polynomial obj;
    obj.getdata();
    obj.roots();
    return 0;
}