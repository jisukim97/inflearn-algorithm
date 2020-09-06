#include<iostream>

//주어진 개수만큼 들어오는 수를 뒤집어서
//소수인지 판별하기
//주의: 1은 소수가 아님

using namespace std;

int reverse(int x) {
	int rnum = 0;
	while (x > 0) {
		int one = x % 10;
		x /= 10;
		rnum = rnum * 10 + one;
	}
	return rnum;
}

bool isPrime(int x) {
	int i;
	bool flag = true;
	for (int i = 2; i < x; i++) 
		if (x % i == 0) {
			flag = false;
			break;
		}
	return flag;
}

int main()
{
	int n;
	cin >> n;
	
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		int tmp = reverse(arr[i]);
		if (isPrime(tmp)) cout << tmp;
	}
	
	return 0;
}