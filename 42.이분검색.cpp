#include<iostream>
#include<algorithm>

// 이분탐색
// N개의 숫자가 주어지면 정렬 후, M이 몇 번째에 있는지 출력하라

using namespace std;

int main()
{
	int n, m;

	cin >> n >> m;

	int *arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);

	int left = 0, right = n - 1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (arr[mid] == m) {
			cout << mid + 1;
			return 0;
		}
		else if (arr[mid] > m) right = mid - 1;
		else left = mid + 1;
	}

	return 0;
}