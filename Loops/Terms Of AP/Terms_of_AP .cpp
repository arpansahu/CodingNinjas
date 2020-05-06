#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int N = 1 ,count = 0;count < n;N++ ) if( ((3 * N) + 2)%4 != 0 ) {cout <<(3 * N) + 2<<" "; count++;}
    return 0;
}
