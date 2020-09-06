#include<iostream>

//1~n까지의 숫자중 소수의 개수 구하기
//주의: 200,000까지의 input을 제한시간 1초 안에 처리하기 위해, 주어진 수의 제곱근까지만 소수 체킹

using namespace std;


int main()
{
	int n;
	cin >> n;

	int cnt = 0;

	for (int i = 2; i <= n; i++) {
		int flag = 1; //소수가 아니면 0으로
		for (int j = 2; j * j <= i; j++) 
			if (i % j == 0) {
				flag = 0;
				break;
			}
		if (flag) cnt++;
	}

	cout << cnt;

	return 0;
} 