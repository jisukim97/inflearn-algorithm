#include<iostream>

// N!의 표현법: 2~N까지의 곱으로 이루어진 N!에, 곱해지는 각 숫자를 이루는 소인수들의 개수를 출력하라

using namespace std;

int main()
{
	int n;
	cin >> n;

	int* arr = new int[n+1] {0, };

	for (int i = 2; i <= n; i++) {
		int tmp = i;
		int j = 2;
			if (tmp % j == 0) {
				tmp /= j;
				arr[j]++;
			}
			else j++;
		}
	}
	
	cout << n << "! = ";
	for (int i = 2; i <= n; i++)
		if (arr[i] != 0) cout << arr[i] << " ";
	

	return 0;
}
