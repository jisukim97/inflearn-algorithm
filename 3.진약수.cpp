#include<iostream>
using namespace std;

//자연수n이 주어지면 n의 진약수의 합을 출력하시오.
  
int main() {
	
    int n, i, sum;
    cin >> n;

    sum = i = 1;
    cout << i<<" + ";
    for (int j=++i; j*i!=n; i++) 
        if (n % i == 0) {
            cout << i<<" + ";
            sum += i;
        }
    
    sum += i;
    cout << i << " = " << sum;
      
    return 0;
}
