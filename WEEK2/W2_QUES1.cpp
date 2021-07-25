#include<iostream>
using namespace std;
int search(int *ar,int n,int k){
int i,temp=0;
    for(int i=0;i<n;i++){
        if(k==ar[i]){
            temp=temp+1;
        }
    }
    return temp;
}
int main(){
int n,i,c=0,k,result,t;
int *ar = new int[n];
cin>>t;
while(t!=0){
cin>>n;// TAKES NO. OF ELEMENTS IN AN ARRAY
for(i=0;i<n;i++){
    cin>>ar[i];// TAKE ELEMENTS OF AN ARRAY
}
cin>>k;//TAKES THE KEY ELEMENT YOU WANT OT SEARCH 
result=search(ar,n,k);
if(result!=0){
    cout<<"frequency of k is : " <<k <<"-" << result;
}
else{
    cout<<k<<"-"<<"NOT FOUND";
}
t=t-1;
}
}