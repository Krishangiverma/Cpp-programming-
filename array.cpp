#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array: "<<endl;
    cin>>n;
    int array[n];
    
    for(int i=0;i<n;i++){
        cout<<"enter "<<i<<" element: "<<endl;
        cin>>array[i];
    }
    for(int i=0;i<n;i++){
        cout<<"value at index "<<i<<" is "<<array[i]<<endl;
    }
    return 0;
}