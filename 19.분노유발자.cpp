#include<iostream>

//n명의 앉은 키가 앞자리부터 순서대로 주어질때, 
//뒷사람을 모두 가려 앞의 화면이 보이지 않게 하는 분노유발자의 수를 찾아라

using namespace std;

int main()
{
	int n;
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int maxi = arr[n-1];
	int cnt = 0; //분노유발자 수 저장
	for (int i = n-1; i >=1; i--) 
		if (maxi < arr[i]) {
			cnt++;
			maxi = arr[i];
		}

	cout << cnt;

	return 0;
}
