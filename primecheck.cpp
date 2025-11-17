#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the no.: ";
    cin >> n;

    bool isprime = true;

    if (n > 2) {
        for (int i = 2; i < n/2 - 1; i++) {
            if (n % i == 0) {
                isprime = false;
            }
        }

        if (isprime == false) {
            cout << "not prime" << endl;
        } else {
            cout << "prime" << endl;
        }

    } else if (n == 2 || n == 1) {
        cout << "prime" << endl;
    } else {
        cout << "negative input" << endl;
    }

    return 0;
}
