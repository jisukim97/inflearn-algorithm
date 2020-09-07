#include<iostream>

//주어진 n초 동안, 임계치 m을 넘으면 경보가 울림. 경보가 가장 오래 지속된 초를 구하라

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	
	int maxi = 0; //여태껏 지속 시간들 중 가장 큰 값
	int last = 0; //현재 지속 시간
	int flag = 0; //1이 되면 경보음이 울리는 중이라는 뜻
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		if (tmp > m)
			if (flag)
				last++;
			else {
				flag = 1;
				last = 1;
			}
		else flag = 0;

		if (maxi < last) maxi = last;
	}

	cout<<maxi;

	return 0;
}
