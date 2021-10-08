#include<iostream>
using namespace std;
int binarySearch(int k,int a[],int n){
        for(int i=0;i<n;i++){
            if(a[i]==k){
                return i;
            }
        }
        return -1;
}
int main(){
    int t;
    cin>>t;
    label:
    while(t-->0){
        int n,s,f=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                s=a[i]+a[j];
                int x=binarySearch(s,a,n);
                if(x>-1){
                    cout<<i+1<<", "<<j+1<<", "<<x+1<<endl;
                    f=1;
                    goto label;
                }
            }
        }
        cout<<"No sequence found."<<endl;
    }
    return 0;
}