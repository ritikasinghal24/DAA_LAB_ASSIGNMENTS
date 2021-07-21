#include<iostream>
using namespace std;
int Linear_search(int n,int *a, int k){
    int i,temp,index;
    for(i=1;i<=n;i++){
        if(a[i]==k){
            temp=1;
            index=i;
        }
    }
    if(temp==1){
        cout<<"PRESENT"<<index;
    }
    else{
        cout<<"NOT PRESENT"<<n;
    }
    return 0;
    
}
int main(){
    int i,k,n;
    cout<<"Enter n";
    cin>>n;
    int *a=new int[n];
    cout<<"Enter elements of the array";
    for(i=1;i<=n;i++){
        cin>>a[i];
    }
    cout<<"Enter the key you want to search";
    cin>>k;
    Linear_search(n,a,k);
    
}