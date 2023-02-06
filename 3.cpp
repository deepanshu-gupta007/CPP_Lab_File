#include<iostream>
using namespace std;
class bank
{
    int accno, bal, temp;
    string name, type;
    public:
        void initial(int x)
        {
            bal=x;
        }
        void getdata()
        {
            cout<<"Enter account number: ";
            cin>>accno;
            cin.ignore();
            cout<<"Enter name of the depositor: ";
            getline(cin, name);
            cout<<"Enter type of account(saving or current): ";
            getline(cin, type);
        }
        void deposit()
        {
            cout<<"Enter the amount to be deposited: ";
            cin>>temp;
            bal=bal+temp;
        }
        void withdraw()
        {
            cout<<"Enter the amount to be withdraw: ";
            cin>>temp;
            bal=bal-temp;
        }
        void display()
        {
            cout<<"-----OUTPUT-----------\n";
            cout<<"Name of the depositor: "<<name<<endl;
            cout<<"Balance: "<<bal<<endl;
        }
};
int main()
{
    int n;
    cout<<"Enter your balance in your account: ";
    cin>>n;
    bank obj;
    obj.initial(n);
    obj.getdata();
    obj.deposit();
    obj.withdraw();
    obj.display();
    return 0;
}