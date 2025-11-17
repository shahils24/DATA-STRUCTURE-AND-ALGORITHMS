#include <iostream>
using namespace std;

int main(){
    int n,p ;
    cout<<"enter the no. upto which u want to check: ";
    cin>>n;
    cout<<"Enter the no. to check division : ";
    cin>>p;
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        if (i % p == 0) {
            sum = sum + i;
        }
    }

    cout << "the sum of number upto " << n <<" is divisible by "<< p <<" is: " <<sum ;
}
