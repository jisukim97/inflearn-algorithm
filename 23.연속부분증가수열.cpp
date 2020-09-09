#include<iostream>

// 연속 부분 증가수열

using namespace std;

int main()
{
	int n;
	cin >> n;

	int cnt = 1, num;
	cin >> num;
	int pre = num; //맨 첫 숫자 넣고 cnt=1, max=1로 설정
	int maxi = 1; 

	for (int i = 1; i < n; i++) {
		cin >> num;
		if (pre <= num) { //증가하면 연속 길이 cnt++해주고 max값과 비교
			cnt++;
			if (cnt > maxi) maxi = cnt;
		}
		else cnt = 1; //증가아니면 새로 시작
		pre = num; //다음 숫자로 포인터 이동
	}

	cout << maxi;

	return 0;
}
