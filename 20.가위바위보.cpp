#include<iostream>

//주어진 회차 만큼 A와 B가 가위바위보를 한 정보를 A, B 각각 한줄씩 받음
// 1:가위, 2: 바위, 3: 보

using namespace std;

int main()
{
	int n;
	cin >> n;

	int* A = new int[n];
	int* B = new int[n];

	for (int i = 0; i < n; i++)
		cin >> A[i];

	for (int i = 0; i < n; i++)
		cin >> B[i];

	for (int i = 0; i < n; i++) {
		if (A[i] == 1 && B[i] == 3) cout << "A\n";
		else if (A[i] == 3 && B[i] == 1) cout << "B\n";
		else if (A[i] > B[i]) cout << "A\n";
		else if (B[i] > A[i]) cout << "B\n";
		else cout << "D\n";
	}

	return 0;
}