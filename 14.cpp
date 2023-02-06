#include<iostream>
using namespace std;
class shape
{
    protected:
        double x, y;
    public:
        void get_data()
        {
            cout<<"Enter values of sides:\n";
            cin>>x>>y;
        }
        virtual void display_area()=0;
};
class triangle: public shape
{
    public:
        void display_area()
        {
            cout<<"Area of triangle = "<<0.5*x*y<<endl;
        }
};
class rectangle: public shape
{
    public:
        void display_area()
        {
            cout<<"Area of rectangle = "<<x*y<<endl;
        }
};
int main()
{
    triangle t;
    rectangle r;
    shape *s[2];
    s[0]=&t;
    s[1]=&r;
    for(int i=0;i<2;i++)
    {
        s[i]->get_data();
        s[i]->display_area();
    }
    return 0;
}