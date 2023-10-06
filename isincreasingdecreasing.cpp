#include<iostream>
using namespace std;
int f(int a[],int n)
{for(int i=0;i<n;i++){


    if (a[i]<a[i+1])
    {return 1;}
    else if  (a[i]>a[i+1])
  {  return 2;}
  else
  return 3;

}


}
int main()
{
    int n,i;
    cin>>n;
    int a[n];
for(i=0;i<n;i=i+1){
    cin>>a[i];}


    cout<<f(a,n);


}
