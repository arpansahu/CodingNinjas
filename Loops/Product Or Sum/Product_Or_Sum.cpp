#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int Choice;
    cin >> Choice;
    
    if(Choice  == 1){
        int sum = 0;
        for(int  i = 1 ;i <= N ; i++) sum += i;
        cout <<sum;
        }
    else if(Choice == 2) {
        int product = 1;
        for(int  i = 1 ;i <= N ; i++) product = product * i;
        cout<<product;
    }
    else{
        cout << -1;
    }
	return 0;
}
