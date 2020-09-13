#include<iostream>
#include<algorithm>

// 교집합문제 (MS 인터뷰 출제)
// 무작위로 나열된 배열 두개가 들어오면, 1초만에 교집합을 구하라
// 힌트: 시간복잡도를 줄이는 방법, 투포인터

using namespace std;


int main()
{
	int n1, n2, p1=0, p2=0; //p1,p2는 배열 1,2의 현재 위치를 가리키는 각각의 포인터
	
	cin >> n1;
	int* arr1 = new int[n1];
	for (int i = 0; i < n1; i++)
		cin >> arr1[i];

	cin >> n2;
	int* arr2 = new int[n2];
	for (int i = 0; i < n2; i++)
		cin >> arr2[i];

	sort(arr1, arr1 + n1);
	sort(arr2, arr2 + n2);

	while (p1 < n1 && p2 < n2) {
		if (arr1[p1] == arr2[p2]) {
			cout << arr1[p1++] << " ";
			p2++;
		}
		else if (arr1[p1] < arr2[p2]) p1++;
		else p2++;
	}

	return 0;
}