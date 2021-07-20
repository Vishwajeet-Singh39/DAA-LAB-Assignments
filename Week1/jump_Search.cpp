#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter the number of test cases: ";
    cin>>t;
    while(t-->0){
        int n,k,f=0,s,c=0;
        cout<<endl<<"Enter the size of array: ";
        cin>>n;
        int a[n];
        cout<<"Enter the sorted elements(non negative integers): "<<endl;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<"Enter the element to be searched: ";
        cin>>k;
        s=1;
        if(a[s-1]==k){
                cout<<"The element "<<k<<" is present in the array."<<endl;
                cout<<"Number of comparisons: 1";
                f=1;
                continue;
        }
        s=2;
        while(s/2<=n){
            if(a[s]>=k){
                for(int j=s/2;j<=s&&j<n;j++){
                    if(a[j]==k){
                        cout<<"The element "<<k<<" is present in the array."<<endl;
                        cout<<"Number of comparisons: "<<c+3+j-s/2;
                        f=1;
                        break;
                    }
                }
                if(f==1){
                    break;
                }
            }
            s*=2;
            c++;
        }
        if(f==0){
            cout<<"The element "<<k<<" is not present in the array."<<endl;
            cout<<"Number of comparisons: "<<n-s/4+c+1;
        }
    }
    return 0;
}