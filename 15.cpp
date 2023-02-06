#include<iostream>
using namespace std;
class CAL_AREA
{
    public: 
        float r, h;
        virtual float volume()=0;
        void getdata(float a)
        {
            r=a;
        }
        void setdata(float b)
        {
            h=b;
        }
};
class cone: public CAL_AREA
{
    public:
        float volume()
        {
            return (0.33*3.14*r*r*h);
        }
};
class hemisphere: public CAL_AREA
{
    public:
        float volume()
        {
            return (0.66*3.14*r*r*r);
        }
};
class cylinder: public CAL_AREA
{
    public:
        float volume()
        {
            return (3.14*r*r*h);
        }
};

int main()
{
    float r1,h1;
    cout<<"Enter radius: ";
    cin>>r1;
    cout<<"Enter height: ";
    cin>>h1;
    cone aa;
    hemisphere bb;
    cylinder cc;
    aa.getdata(r1);
    aa.setdata(h1);
    cout<<"Volume of cone: "<<aa.volume()<<" square units"<<endl;
    bb.getdata(r1);
    cout<<"Volume of hemisphere: "<<bb.volume()<<" square units"<<endl;
    cc.getdata(r1);
    cc.setdata(h1);
    cout<<"Volume of cylinder: "<<cc.volume()<<" square units"<<endl;
    return 0;
}