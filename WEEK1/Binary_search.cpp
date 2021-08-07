#include<iostream>
using namespace std;
int BinarySearch(int n, int a[],int k ){
    int low=0,high=n,mid;
    while(low<=high){
        mid=(high+low)/2;
        if(a[mid]==k)
            return mid;
        else if(a[mid]<k)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}
int main(){
    int n,k,i,result,t;
    cout<<"test caes";
    cin>>t;
    while(t!=0){
        cout<<"enter n";
        cin>>n;
        int *a = new int[n];
        cout<<"enter elements";
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<"enter key u want to search";
        cin>>k;
        result=BinarySearch(n, a, k);
        if(result == -1){
            cout<<"NOT PRESENT "<<endl;
        }
        else{
            cout<<"PRESENT "<<result-1<<endl;
        }
        t=t-1;
    }
}