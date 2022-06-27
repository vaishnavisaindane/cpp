#include <iostream>

using namespace std;
int fact(int n){
    int factorial=1;
    for (int i=2;i<=n;i++)
    {
        factorial*=i; //factorial=i*factorial;
    }
    return factorial;
}

int main()
{
    int n,r;
    cout<<"enter num";
    cin>>n>>r;
    int num=fact(n)/(fact(r)*fact(n-r));
 cout<<num;
    return 0;
}
