#include<iostream>
#include "string"
using namespace std;

int main() {
    // Write your code here
    int n;
    cin >>n;
    int temp = n,rev = 0;
    while( temp  > 0){
        int lastDigit = temp % 10;
        temp = temp / 10;
        rev = rev * 10 + lastDigit;
    }
    cout << rev;
    return 0;
}
