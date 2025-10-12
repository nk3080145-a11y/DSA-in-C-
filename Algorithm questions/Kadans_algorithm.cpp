// Maximun subarray sum
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int sz;
    cout<<"Enter the size of array : ";
    cin>>sz;
    vector<int> vec(sz,0);
    for(int i=0;i<sz;i++){
        cout<<"Enter "<<i+1<<" Element of array : ";
        cin>>vec[i];
    }
    int maxSum = INT32_MIN;
    for(int st=0;st<sz;st++){
        int currentSum = 0;
        for(int end=st;end<sz;end++){
            currentSum += vec[end];
            maxSum = max(currentSum,maxSum);
        }
    }
    cout<<"Max subarray sum = "<<maxSum<<endl;
    return 0;
}