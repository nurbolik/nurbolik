#include <iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    
    int a = n % 10;
    int b = (n % 100) / 10;
    int c = n / 100;

    cout << a + b + c << endl;
    return 0;
}