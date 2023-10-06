#include<iostream>
#include<cmath>
using namespace std;
double my_f(double x,double a,int n){
    double fx= (pow(x,n)-a)*(pow(x,n)-a);
    return fx;

}
double newtons_method (double x0,int n,double a,double epsilon)
{
    double dfx, ddfx;
    dfx=2*n*(pow(x0,n)-a)*pow(x0,n-1);
    ddfx=(n-1)*dfx/x0 + 2*n*n*pow(x0,2*n-2);
    double x1=x0-dfx/ddfx;
    }
    while(abs(x1-x0) >epsilon){
    x0=x1;
    dfx=2*n*(pow(x0,n)-a)*pow(x0,n-1);
    ddfx=(n-1)*dfx/x0 + 2*n*n*pow(x0,2*n-2);
    x1=x0-dfx/ddfx; 
    }
    return x0;





int main(){
    int n;
    double  a;
    double e=0.001,g;
    cin>>n>>a>>g;
    cout<<fixed;
    cout.precision(4);
cout<<newtons_method(g,n,a,e);
}