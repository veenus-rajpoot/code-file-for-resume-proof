#include<iostream>
using namespace std;
void swap(int n,int m){
   int temp=n;
   n=m;
   m=temp;
}

int main(){
    int n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        swap( i, j);

    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
        
    }

}}