#include<iostream>
using namespace std;

int main() {
    int n ;
    cin >> n;
    if(n == 0) cout <<0;
    int temp = n;
    int arr[32];
    int  i = 0;
    while(temp){
        arr[i] = temp % 2;
        temp = temp / 2;
        i++;
    }
    for(--i;i >= 0;i--){
        cout<<arr[i];
    }
    return 0;
}
