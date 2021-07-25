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
    cin>>t;//TAKES NO. TEST CASES
    while(t!=0){
    cin>>n; //TAKES NO. OF ELEMENTS IN AN ARRAY
    int *ar = new int[n];
    for(i=0;i<n;i++){
        cin>>ar[i]; //TAKES ELEMEMTS OF AN ARRAY
    }
    cin>>k; // TAKE THE KEY ELEMENTS YOU WANT TO SEARCH
   result=search_pairs(ar,n,k);
   cout<<result;

t=t-1;
}
}