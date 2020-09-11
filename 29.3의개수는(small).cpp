#include<iostream>

// 1 ~ N까지 숫자의 일의자리 마다 카드를 셀 때, 총 3의 개수는?
// N이 100,000이하의 작은 수 일 때

using namespace std;

int main()
{
	int n;
	cin >> n;

	int cnt=0;

	for (int i = 1; i <= n; i++) {
		int tmp = i;
		while (tmp > 0) {
			int r = tmp % 10;
			tmp /= 10;
			if(r==3) cnt++;
		}
	}
	
	cout << cnt;

	return 0;
}
