#include<iostream>
#include "cmath"
using namespace std;

int main() {
    // Write your code here
    long long int n;
    char c;
    cin>>n >> c;

    if(c == 'A') cout << round((n + (n * 0.20) +  (n * 0.50) + 1700 - (n * 0.11)));
    else if(c == 'B')  cout <<round((n + (n * 0.20) +  (n * 0.50) + 1500 - (n * 0.11)));
    else  cout << round(( n + (n * 0.20) +  (n * 0.50) + 1300 - (n * 0.11));
    return 0;
}
