#include<iostream>
using namespace std;
int main(){
    int i,j,n,t,arr[50];
    int key,comp=0,shifts=0;
    cout<<"Enter no of test cases";
    cin>>t;
    while(t!=0){
    cout<<"Enter no of elements";
    cin>>n;
    cout<<"Enter Elements of the array";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
        for(i=1;i<n;i++)
        {
           j=i-1;
           key=arr[i];
           while(j>=0 && key<arr[j])
           {
             arr[j+1]=arr[j];
             j=j-1;
             comp++;
             shifts++;
           }
           arr[j+1]=key;
           shifts++;
        }
         for(int i=0;i<n;i++)
         cout<<arr[i]<<" ";
         cout<<endl<<comp<<endl<<shifts<<endl;
    }
    return 0;
}
