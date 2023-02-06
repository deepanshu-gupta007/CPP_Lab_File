#include <iostream>
using namespace std;
#define sz 1000
template<class type>
class Array
{
    public:
        type dat[sz];
        int bottom;
        Array()
        {
            bottom=-1;
        }
        void Insert(type item)
        {
            dat[++bottom]=item;
        }
        type Delete()
        {
            if(bottom==-1)
                return 0;
            return dat[bottom--];
        }
        void show()
        {
            for(int i=0; i<=bottom; i++)
                cout<<dat[i]<<endl;
	    }
};
int main()
{
    Array<int>ob;
	ob.Insert(20);
	ob.Insert(10);
	ob.Insert(30);
	ob.Insert(40);
	cout<<"All items:\n";
	ob.show();
	cout<<"Element deleted:"<<ob.Delete()<<endl;
    cout<<"All items:\n";
	ob.show();
    return 0;
}