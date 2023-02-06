#include<iostream>
using namespace std;
class Time
{
    int min, hr, sec;
    public: 
        void input() 
        {
            cout<<"Enter - Hour: Min: Sec\n";
            cin>>hr>>min>>sec;
        }
        Time operator+(Time T1)
        {
            Time T3;
            T3.sec=T1.sec+sec;
            T3.min=T1.min+min;
            T3.hr=T1.hr+hr;
            if (T3.sec>=60)
            {
                T3.min++;
                T3.sec=T3.sec%60;
            }
            if (T3.min>=60)
            {
                T3.hr++;
                T3.min=T3.min%60;
            }
            return T3;
        }
        void display()
        {
            cout<<"Time = "<<hr<<":"<<min<<":"<<sec<<"\n";
        }
};
int main()
{
    Time T1, T2, T3;
    T1.input();
    T2.input();
    T3=T1+T2;
    T3.display();
    return 0;
}