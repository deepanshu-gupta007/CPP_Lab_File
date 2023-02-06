#include<iostream>
using namespace std;
class invoice
{
    string num, des;
    int quantity;
    double price;
    public:
        invoice()
        {
            num=" ";
            des=" ";
            quantity=0;
            price=0;
        }
        void setpartnumber(string pn)
        {
            num=pn;
        }
        void setpartdescription(string pd)
        {
            des=pd;
        }
        void setquantity(int qn)
        {
            quantity=qn;
        }
        void setprice(double pr)
        {
            price=pr;
        }
        string getpartnumber()
        {
            return num;
        }
        string getpartdescription()
        {
            return des;
        }
        int getquantity()
        {
            return quantity;
        }
        double getprice()
        {
            return price;
        }
        double getinvoiceamount()
        {
            if(quantity<0)
                quantity=0;
            if(price<0)
                price=0;
            return quantity*price;
        }
};
int main()
{
    invoice ob;
    string pn,pd;
    int qn;
    double pr;
    cout<<"Enter partnumber: ";
    getline(cin,pn);
    ob.setpartnumber(pn);
    cout<<"Enter partdescription: ";
    getline(cin,pd);
    ob.setpartdescription(pd);
    cout<<"Enter quantity: ";
    cin>>qn;
    ob.setquantity(qn);
    cout<<"Enter price per item: ";
    cin>>pr;
    ob.setprice(pr);
    cout<<"Partnumber: "<<ob.getpartnumber()<<endl;
    cout<<"Partdescription: "<<ob.getpartdescription()<<endl;
    cout<<"Quantity: "<<ob.getquantity()<<endl;
    cout<<"Price per item: "<<ob.getprice()<<endl;
    cout<<"Total amount: "<<ob.getinvoiceamount()<<endl;
    return 0;
}