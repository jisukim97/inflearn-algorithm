#include<iostream>
using namespace std;

//�ڿ���n�� �־����� n���� ���ڰ� �־����� �̵� �� ���� ū ���̸� ���϶�. 
 
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
