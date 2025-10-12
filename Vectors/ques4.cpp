#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec(1);
    for(int i=0;i<vec.size();i++){
        cout<<"Enter element : "<<endl;
        cin>>vec[i];
        if(vec[i]==0){
            break;
        }
    }
    for(int i : vec){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Size of vector : "<<vec.size()<<endl;
    cout<<"After pop_back : "<<endl;
    vec.pop_back();
    for(int i : vec){
        cout<<i<<" ";
    }
    cout<<"Size of vector : "<<vec.size()<<endl;
    return 0;
}