#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int temp = n;
    int val = 0,base = 1;
    while(temp){
        int last_digit = temp % 10;
        temp  = temp /10;
        val = val + last_digit * base;
        base = 2 * base;
    }
    cout << val;
}
