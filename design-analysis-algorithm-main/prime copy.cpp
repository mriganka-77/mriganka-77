// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter a number: ";
//     cin >> n;
//     bool p = true;
//     for (int i = 2; i < n; i++) {
//         if (n % i == 0) {
//             p = false;
//             break;
//         }
//     }
//     if (p) {
//         cout << "The number "<<n<<" is prime" << endl;
//     } else {
//         cout <<"The number "<<n<<" is not Prime" << endl;
//     }
//     return 0;
// }

// the time and space complexity  of this code is 
// O(n)>>time complexity and 
// O(1)>>spae complexity respectively.

//! make two method and like primeOne amd PrimeTwo and in orimeOne fine the output upto sqrt upto n  and in other method find the output upto n

#include <iostream>
#include <cmath>
using namespace std;

bool primeOne(int n) {
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return true;
}

bool primeTwo(int n) {
    if(n < 2) return false;
    for(int i = 2; i < n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(primeOne(n))
        cout << "primeOne: " << n << " is prime\n";
    else
        cout << "primeOne: " << n << " is not prime\n";
cout<<endl;
    if(primeTwo(n))
        cout << "primeTwo: " << n << " is prime\n";
    else
        cout << "primeTwo: " << n << " is not prime\n";

    return 0;
}

//! the time and space complexity  of this code is
//! O(sqrt(n))>>time complexity and
//! O(1)>>spae complexity respectively.