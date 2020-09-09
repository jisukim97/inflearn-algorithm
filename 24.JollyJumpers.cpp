#include<iostream>
#include<algorithm>

// 주어진 N개의 수가 든 배열에서, 각 인접한 두 수의 차이들에 1~N-1이 모두 포함되면 그것은 Jolly Jumper라고 함

using namespace std;

int main()
{
	int n;
	cin >> n;

	int* arr = new int[n - 1]{ 0, };
	int tmp1, tmp2;
	cin >> tmp1;

	for (int i = 1; i < n; i++) {
		cin >> tmp2;
		int gap = tmp2 > tmp1 ? tmp2 - tmp1 : tmp1 - tmp2;
		if (gap>=n || arr[gap] == 1) { 
			//두 수의 차가 n이상이거나
			//이미 존재하는 gap이면 더이상 볼 필요도 없이 NO
			cout << "NO";
			exit(0);
		}
		arr[gap] = 1; 
		tmp1 = tmp2;
	}

	for (int i = 1; i < (n-1); i++) {
		if (arr[i] != 1) {
			cout << "NO";
			exit(0);
		}
	}

	cout << "YES";

	return 0;
}
