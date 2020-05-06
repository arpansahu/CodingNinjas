#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    int osum = 0;
    int esum = 0;

    while(n){
        if((n % 10) % 2 == 0)  esum += n % 10;
        else osum += n % 10;
        n = n / 10;
    }
    cout <<esum <<" "<<osum;
    return 0;

}
