#include<iostream>

// 멀티태스킹: N개의 작업이 들어오면 1초씩 돌아가면서 작업을 처리한다. K초 후 정전이 일어났다면, 
// 다시 컴퓨터가 켜지면 몇번부터 문제를 풀어야 하나?
// 주의: 한번 끝난 작업은 작업 스케줄에서 사라지고, 새로운 작업은 들어오지 않는다.

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int* job = new int[n];
	for (int i = 0; i < n; i++)
		cin >> job[i];

	int k;
	cin >> k;

	int index = 0;
	for (int i = 0; i < k; i++) {
		int prevent_infinite_loop = 0;
		if (index >= n) index = 0;
		while (job[index] == 0) { //처리되지 않은 일을 찾은 후
			index++; prevent_infinite_loop++;
			if (index >= n) index = 0;
			if (prevent_infinite_loop == n) {
				cout << -1;
				return 0;
			}
		}
		job[index++]--; //1초 처리
	}
	
	int prevent_infinite_loop = 0;
	for (int i = index; prevent_infinite_loop!=n ; index++) {
		if (index >= n) index = 0;
		if (job[index] != 0) {
			cout << index + 1;
			return 0;
		}
		prevent_infinite_loop++;
	}

	cout << -1;
	return 0;
}