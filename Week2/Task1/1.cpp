#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t-->0){
        int n,k,f=0,s;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cin>>k;
        s=n/2;
        for(int i=0;i<n;i++){
            if(a[s]==k){
                cout<<k<<"-";
                f=1;
                break;
            }
            else if(a[s]>k){
                s/=2;
            }
            else{
                s=s+(n-s)/2;
            }
        }
        if(f==0){
            cout<<"Key not present"<<endl;
        }
        while(a[s]==k && s!=0){
            s--;
        }
        int c=0;
        s++;
        while(a[s]==k && s!=n){
            s++;
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}