// WAP to print all the unique values in an array
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter "<<i+1<<" Element of an array : ";
        cin>>arr[i];
    }
    int unique;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(i!=j && arr[i]==arr[j]){
                break;
            }
            else{
                unique = arr[i];
            }
        }
    }
    cout<<"This is unique element = "<<unique<<endl;
    return 0;
}