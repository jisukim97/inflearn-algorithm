#include<iostream>

// 정렬된 두 배열 합쳐, 정렬된 새로운 배열을 출력하기

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

	int totlen = n1 + n2;
	for (int i = 0; i < totlen; i++) {
		if (p1 >= n1){
			for (; p2 < n2; p2++) cout << arr2[p2] << " ";
			break;
		}
		if (p2 >= n2){
			for (; p1 < n1; p1++) cout << arr1[p1] << " ";
			break;
		}
		if (arr1[p1] < arr2[p2]) cout << arr1[p1++]<<" ";
		else cout << arr2[p2++]<<" ";
	}

	return 0;
}