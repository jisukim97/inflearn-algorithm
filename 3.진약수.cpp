#include<iostream>
using namespace std;

//�ڿ���n�� �־����� n�� ������� ���� ����Ͻÿ�.
  
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
