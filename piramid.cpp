#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
        {
            cout<<"*"<<" ";

        } 
        cout<<endl;
      for(int k=6-i;k>=1;k--)
      {
        cout<<" ";

      }

    } 
    return 0;

}