#include<iostream>

// 현재 마라톤 상황에서 각각의 선수가 열심히 달렸을 때 받을 수 있는 최선의 등수를 출력
// 큰 숫자일 수록 실력이 좋다는 것, 자신보다 실력이 낮은 사람들만 재칠 수 있음

using namespace std;

int main()
{
	int n;
	cin >> n;

	int* skill = new int[n];

	for (int i = 0; i < n; i++) { 
		int tmp, now = i+1;//now는 현재 등수
		cin >> tmp;
		skill[i] = tmp;
		for (int j = i-1; j >= 0; j--) 
			if (tmp > skill[j]) now--;
		cout << now<<" ";
	}
	return 0;
}
