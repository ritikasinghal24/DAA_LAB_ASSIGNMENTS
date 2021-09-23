#include<iostream>
using namespace std;
int search_pairs(int *ar, int n, int k){
    int i,j,temp=0,c=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            temp= ar[i]-ar[j];
            if(temp<0){
                temp=(-1)*temp;
            }
            if(temp==k){
                c=c+1;
            }
            temp=0;
        }        
    }
    return c;
}
int main(){
    int i,n,k,t,result;
    cout<<"Enter no. of test cases";
    cin>>t;
    while(t!=0){
    cout<<"Enter no of elements";
    cin>>n; 
    int *ar = new int[n];
    cout<<"Enter elements in the array";
    for(i=0;i<n;i++){
        cin>>ar[i]; 
    }
    cout<<"Enter the key ";
    cin>>k; 
   result=search_pairs(ar,n,k);
   cout<<result<<endl;
t=t-1;
}
}