#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool flage=0;

    for(int i=2;i<n;i++)
    {
        if(n%i==0){

     cout<<"non prime ";
    flage=0;

        }
    
    }
    if(flage=1){
        cout<<"prime";

    }
   return 0;

}