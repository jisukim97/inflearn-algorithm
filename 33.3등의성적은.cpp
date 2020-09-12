#include<iostream>

// 3등의 성적은?
// 선택 정렬을 응용한 문제. 이번에는 내림차순
// 동점이 몇명이든 한 점수를 한 등수로 생각해서 푼다.

using namespace std;

int main()
{
	int n;
	cin >> n;

	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++) {
		int biggest = i;
		for (int j = i + 1; j < n; j++) 
			if (arr[biggest] < arr[j]) biggest = j;
		int tmp = arr[i];
		arr[i] = arr[biggest];
		arr[biggest] = tmp;
	}

	int change = 0; //2번째 변하는 지점에 3등의 점수
	int prev = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] != prev) {
			change++;
			prev = arr[i];
		}
		if (change == 2) {
			cout << prev;
			break;
		}
	}
		
	return 0;
}
