#include<iostream>

//n명이 1~given 숫자까지의 합을 잘 구했는지 채점하는 프로그램

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int given, answer;
		cin >> given >> answer;

		int sum;
		if (given % 2 == 0) 
			sum = (given / 2) * (1 + given);
		else {
			sum = ((given-1) / 2) * given;
			sum += given;
		}
		
		if (answer == sum) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
} 
