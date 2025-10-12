// find largest and smallest array element
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of element : ";
    cin>>size;
    int arr[size];
    cout<<"<<Enter your all element of array>>"<<endl;
    for(int i=0;i<size;i++){
        cout<<"Enter "<<i+1<<" element of array : "<<endl;
        cin>>arr[i];
    }
    int largest=arr[0] , smallest=arr[0];
    for(int i=0;i<size-1;i++){
       if(smallest>arr[i+1]){
            smallest = arr[i+1];
       }
       if(largest<arr[i+1]){
            largest = arr[i+1];
       }
    }
    cout<<"The largest element "<<largest<<" And the smallest element of this array is "<<smallest<<endl;
    return 0;
}