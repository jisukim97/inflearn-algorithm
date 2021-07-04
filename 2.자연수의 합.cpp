#include<iostream>
using namespace std;

int main() {

    int a, b, i, sum=0;
    cin >> a >> b;

    for (i = a; i < b; i++) {
        cout << i << " +";
        sum += i;
    }
    sum += i;
    cout << i << " = " << sum;
      

    return 0;
}
