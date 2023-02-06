#include<iostream>
#include<list>
#include<vector>
#include<map>
using namespace std;
int main()
{
    list<int>myList;
    myList.push_back(1);
    myList.push_back(2);
    myList.push_back(3);
    myList.push_front(0);
    cout<<"Elements in myList: ";
    for (int x: myList)
        cout<<x<<"\t";
    cout<<endl;
    vector<string>myVector;
    myVector.push_back("apple");
    myVector.push_back("banana");
    myVector.push_back("orange");
    cout<<"Second element in myVector: "<<myVector[1]<<endl;
    cout<<"Third element in myVector: "<<myVector.at(2)<<endl;
    map<int, string>myMap;
    myMap[1]="one";
    myMap[2]="two";
    myMap[3]="three";
    cout<<"Value of key 2 in myMap: "<<myMap[2]<<endl;
    if (myMap.count(4)>0)
        cout<<"Key 4 exists in myMap" <<endl;
    else
        cout<<"Key 4 does not exist in myMap"<<endl;
    return 0;
}