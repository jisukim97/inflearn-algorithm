#include<iostream>
#include<algorithm>

// N!을 계산해서 일의자리부터 연속된 0의 개수는?

using namespace std;

int main()
{
	int n;
	cin >> n;

	int* arr = new int[n+1] {0, };

	for (int i = 2; i <= n; i++) {
		int tmp = i;
		int j = 2;
		while (tmp > 1) {
			if (tmp % j == 0) {
				tmp /= j;
				arr[j]++;
			}
			else j++;
		}
	}
	
	cout<< min(arr[2], arr[5]);
	

	return 0;
}
