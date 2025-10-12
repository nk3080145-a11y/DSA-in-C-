// Vector Function 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    // size
    cout<<"size = "<<vec.size()<<endl;
    // push back use for add element in order
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    cout<<"size of after push back = "<<vec.size()<<endl;
    for(int val : vec){
        cout<< val << endl;
    }
    // pop back use of delete element in vector
    vec.pop_back();
    cout<<"size of after pop back = "<<vec.size()<<endl;

    for(int val : vec){
        cout<< val << endl;
    }
    // front use for print 1st element in vector
    cout<<"Next Function"<<endl;
    cout<<vec.front()<<endl;
    // back use for print last element in vector
    cout<<"Next Function"<<endl;
    cout<<vec.back()<<endl;
    // at function mtlb jaise ham array ke kisi element ko print krne ke liye likhte hai arr[i] isme ven.at(i) isme ye syntax hai
    cout<<"Next Function"<<endl;
    cout<<vec.at(0)<<endl;
    cout<<"Next Function"<<endl;
    cout<<vec.size()<<endl;
    cout<<vec.capacity ()<<endl;

    return 0;
}