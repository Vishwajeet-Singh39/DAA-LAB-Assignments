#include<iostream>
using namespace std;
int main(){
    int n,k,f=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements(non negative integers): "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the element to be searched: ";
    cin>>k;

    for(int i=0;i<n;i++){
        if(a[i]==k){
            cout<<"The element "<<k<<" is present in the array."<<endl;
            cout<<"Number of comparisons: "<<i+1;
            f=1;
            break;
        }
    }
    if(f==0){
        cout<<"The element "<<k<<" is not present in the array."<<endl;
        cout<<"Number of comparisons: "<<n;
    }
    return 0;
}