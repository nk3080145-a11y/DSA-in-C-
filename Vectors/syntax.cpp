#include<iostream>
#include<vector>
using namespace std;
int main(){
    // first syntax this vector is empthy
    vector<int> vec1;
    cout<<vec1[0]<<endl;
    // second syntax
    vector<int> vec2 = {1,2,3};
    cout<<vec2[0]<<endl;
    cout<<vec2[1]<<endl;
    cout<<vec2[2]<<endl;
    // third syntax
    vector<int> vec3(3,0);
    cout<<vec3[0]<<endl;
    cout<<vec3[1]<<endl;
    cout<<vec3[2]<<endl;
    return 0;

}