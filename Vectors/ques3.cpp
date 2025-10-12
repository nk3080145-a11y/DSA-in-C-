// Ek program likho jo user se n elements input le aur unhe ek vector me store kare.
// Phir vector ke maximum aur minimum element ko find karke print kare.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter a size of array : ";
    cin>>n;
    vector<int> vec(n,0);
    for(int i=0;i<vec.size();i++){
        cout<<"Enter the "<<i+1<<" element of vector"<<endl;
        cin>>vec[i];
    }
    int min = INT32_MAX;
    int max = INT32_MIN;
    for(int i=0;i<vec.size();i++){
        if(min>vec[i]){
            min = vec[i];
        }
        if(max<vec[i]){
            max = vec[i];
        }
    }
    cout<<"The minimum value in this vector is "<<min<<" and the maximum value is "<<max<<endl;

    return 0;
}