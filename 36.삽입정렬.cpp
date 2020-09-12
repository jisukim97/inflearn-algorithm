#include<iostream>

// 삽입 정렬

using namespace std;

int main()
{
	int n;
	cin >> n;

	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int i, j;
	for (i = 1; i < n; i++){
		int tmp = arr[i];
		for (j = i - 1; j >= 0; j--) {
			if (tmp < arr[j])
				arr[j + 1] = arr[j];
			else break;
		}
		arr[j + 1] = tmp;
	}

	for (i = 0; i < n; i++)
		cout << arr[i] << " ";

	return 0;
}
