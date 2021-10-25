#include <iostream>
using namespace std;

int fib(int n){
    if (n<2){
        return n;
    }
    return fib(n-1) + fib(n-2);
}
int main() {
    int position;
    cout<<"Enter your position: ";
    cin>>position;

    cout<<"The next for fibonacci series is"<<fib(position)<<endl;

    return 0 ;
}