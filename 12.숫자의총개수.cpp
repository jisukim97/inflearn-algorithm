#include<iostream>
#include<cmath>

//1~n까지 총 사용되는 숫자 digit의 개수를 구하기
//주의: 제한시간 1초이므로 이중for문으로 일일이 개수세는 것 금지

using namespace std;

int main()
{
	int n;
	cin >> n;

	int digit = 1;
	int boundary = 9; //9, 99, 999 가 되어 자릿수를 체킹
	int cnt = 0;

	while (boundary <= n) {
		cnt += 9 * pow(10,digit-1) * digit;
		boundary = boundary * 10 + 9;
		digit++;
	}
	boundary /= 10; digit--;

	cnt += (n - boundary) * (++digit);

	cout << cnt;

	return 0;
}