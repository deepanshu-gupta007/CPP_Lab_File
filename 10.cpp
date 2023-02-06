#include<iostream>
using namespace std;
class complex
{
    int real, img;
    public: 
        void input()
        {
            cout<<"Enter real and imaginary part:\n";
            cin>>real>>img;
        }
        void show()
        {
            cout<<"Result = "<<real<<"+j("<<img<<")\n";
        }
        complex operator + (complex &C2)
        {
            complex C3;
            C3.real=real+C2.real;
            C3.img=img+C2.img;
            return C3;
        }
        complex operator - (complex &C2)
        {
            complex C3;
            C3.real=real-C2.real;
            C3.img=img-C2.img;
            return C3;
        }
        void operator == (complex &C2)
        {
            if(real==C2.real && img==C2.img)
                cout<<"Yes";
            else
                cout<<"No";
        }
};
int main()
{
    complex C1, C2, C3;
    C1.input();
    C2.input();
    C3=C1+C2;
    C3.show();
    C3=C1-C2;
    C3.show();
    C1==C2;
    return 0;
}