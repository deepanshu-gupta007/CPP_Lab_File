#include<iostream>
using namespace std;
class calculator
{
    int as, ar;
    float ac;
    public:
        void calculateArea(int x)
        {
            as=x*x;
            cout<<"Area of square: "<<as<<endl;
        }
        void calculateArea(int l, int b)
        {
            ar=l*b;
            cout<<"Area of rectangle: "<<ar<<endl;
        }
        void calculateArea(float r)
        {
            ac=3.14*r*r;
            cout<<"Area of circle: "<<ac<<endl;
        }
};
int main()
{
    int x,l,b;
    float r;
    calculator obj;
    cout<<"Enter length of side of square: ";
    cin>>x;
    obj.calculateArea(x);
    cout<<"Enter length and breadth of rectangle:\n";
    cin>>l>>b;
    obj.calculateArea(l,b);
    cout<<"Enter radius of circle: ";
    cin>>r;
    obj.calculateArea(r);
    return 0;
}