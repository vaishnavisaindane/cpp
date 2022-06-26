#include <iostream>

using namespace std;
void fib(int n){
    int t1=0,t2=1;
    int nextterm;
    for(int i=1;i<=n;i++){
    cout<<t1<<endl;
    nextterm=t1+t2;
    t1=t2;
    t2=nextterm;
    }
 return;   
}

int main()
{
    int n;
    cout<<"enter the number for fibonacci series";
    cin>>n;
    fib(n);
    return 0;
}
