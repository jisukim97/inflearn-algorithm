#include<iostream>

// 선택 정렬 with 오름차순

using namespace std;

int main()
{
	int n;
	cin >> n;

	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++) {
		int smallest = i;
		for (int j = i + 1; j < n; j++) 
			if (arr[smallest] > arr[j]) smallest = j;
		int tmp = arr[i];
		arr[i] = arr[smallest];
		arr[smallest] = tmp;
	}

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

	return 0;
}
