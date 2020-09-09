#include<iostream>

// 온도의 최댓값, 총 n개의 온도가 주어지면, 연속된 k개의 온도의 합이 최대가 되는 값을 출력
// 1차원 배열 구간합: 제한시간 1초만에 풀기

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	int* arr = new int[n];
	int sum = 0;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp; 
		sum = sum + tmp;
		arr[i] = sum;
	} //누적합을 arr에 저장

	int maxi = arr[k - 1];
	for (int i = 0; (i+k)<n; i++) {
		int tmp = arr[i + k] - arr[i];
		if (tmp > maxi) maxi = tmp;
	}
	cout << maxi;

	return 0;
}
