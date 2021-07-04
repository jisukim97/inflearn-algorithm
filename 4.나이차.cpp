#include<iostream>
using namespace std;

//자연수n이 주어지고 n개의 숫자가 주어지면 이들 중 가장 큰 차이를 구하라. 
 
int main() {
	
    int n, max, min;
    cin >> n >> max;
    min = max;

    for (int i = 1; i < n; i++) {
        int tmp;
        cin >> tmp;
        
        if (tmp > max) max = tmp;
        else if (tmp < min) min = tmp;
    }

    cout << max - min;
      

    return 0;
}
