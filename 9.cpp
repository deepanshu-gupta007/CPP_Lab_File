#include <iostream>
using namespace std;
class SavingsAccount
{
    static float annualInterestRate;
    float savingsBalance;
    public:
        SavingsAccount(){}
        SavingsAccount(int value)
        {
            savingsBalance=value;
        }
        void calculateMonthlyInterest()
        {
            savingsBalance+=((savingsBalance*annualInterestRate)/12);
        }
        static void modifyIntererestRate(float value);
        float GetBalance() const 
        { 
            return savingsBalance; 
        }
};
float SavingsAccount::annualInterestRate=0;
void SavingsAccount::modifyIntererestRate(float value)
{
    annualInterestRate=value;
}
int main()
{
    SavingsAccount saver1(2000.00);
    SavingsAccount saver2(3000.00);
    SavingsAccount::modifyIntererestRate(4);
    saver1.calculateMonthlyInterest();
    cout<<"Balance 1: "<<saver1.GetBalance()<<endl;
    saver2.calculateMonthlyInterest();
    cout<<"Balance 2: "<<saver2.GetBalance()<<endl;
    SavingsAccount::modifyIntererestRate(5);
    saver1.calculateMonthlyInterest();
    cout<<"Balance 1: "<<saver1.GetBalance()<<endl;
    saver2.calculateMonthlyInterest();
    cout<<"Balance 2: "<<saver2.GetBalance()<<endl;
    return 0;
}