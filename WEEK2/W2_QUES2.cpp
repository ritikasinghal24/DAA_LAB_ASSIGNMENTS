#include<iostream>
using namespace std;
int main(){
    int t,i,j,k,n,ar[20],c=0;
    cout<<"Enter no of test cases";
    cin>>t;
    while(t!=0){
    cout<<"Enter value of n"<<endl;
    cin>>n;
    cout<<"Enter elements of an array";
    for(i=1;i<=n;i++){
        cin>>ar[i];
    }
    for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){
            for(k=1;k<=n;k++){
                if(ar[i]+ar[j]==ar[k]){
                    cout<<i<<","<<j<<","<<k<<endl;
                    c=1;
                }
            }
        }
    }
    if(c==0){
        cout<<"NO SEQUENCE FOUND"<<endl;
    }
    t=t-1;
    }
}