#include<iostream>

// 탄소C와 수소H로 이루어진 탄화수소가 입력값(ex: C2H4)으로 주어지면, 총 질량을 구하시오
// C는 12g, H는 1g
// 주의: 포함된 원소가 하나면 알파벳 뒤에 숫자가 주어지지 않음

using namespace std;

int main()
{
	string s;
	cin >> s;

	int cnt = 0;
	int slen = s.size();
	int i = 1;
	int num = 0;
	while (i < slen) {
		if (s[i] != 'H')
			num = num * 10 + (s[i] - '0');
		else if (s[i] == 'H') {
			cnt += (num > 0) ? 12 * num : 12;
			num = 0;
		}
		i++;
	}

	cnt += (num > 0) ? num : 1;

	cout << cnt;

	return 0;
}
