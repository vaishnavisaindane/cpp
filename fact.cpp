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
    int n;
    cout<<"enter num";
    cin>>n;
    int num=fact(n);
 cout<<num;
    return 0;
}
