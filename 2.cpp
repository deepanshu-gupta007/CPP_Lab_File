#include<iostream>
using namespace std;
class electricity
{
    float unit, cost, charge;
    string name;
    public:
        void getdata()
        {
            cin.ignore();
            cout<<"Enter the name of the user: ";
            getline(cin,name);
            cout<<"Enter the number of units consumed: ";
            cin>>unit;
        }
        void Unit()
        {
            if(unit>=0 && unit<=100)
                cost=60*0.01*unit;
            else if(unit>=100 && unit<=200)
                cost=80*0.01*unit;
            else
                cost=90*0.01*unit;
        }
        void Charge()
        {
            if(cost>300)
                charge=cost+(0.15*cost)+50;
            else
                charge=50+cost;
        }   
        void display()
        {    
            cout<<"-------------------------\n";
            cout<<"Name of the user: "<<name<<endl;
            cout<<"Charges of the user: "<<charge<<endl;
        }     
};
int main()
{
    int n, i;
    cout<<"Enter number of users: ";
    cin>>n;
    electricity obj[n];
    for(i=0; i<n; i++)
    {
        obj[i].getdata();
        obj[i].Unit();
        obj[i].Charge();
        obj[i].display();
    }
    return 0;
}