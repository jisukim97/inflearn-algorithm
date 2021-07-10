#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)

int digit_cnt(int n) {
	int r, q, cnt = 0;

	while (1) {
		r = n % 10;
		q = n / 10;

		if (q > 0) {
			cnt++;
			n = q;
		}
		else {
			cnt++;
			break;
		}
	}

	return cnt;
}

int cal_prev(int n, int digit) {
	int sum = 0;

	if (digit != 1) {
		digit--;
		while (digit > 0) {
			sum += digit * 9 * (int)pow(10, digit - 1.0);
			digit--;
		}
	}

	return sum;
}

int cal_remainder(int n, int digit) {
	int start = (int)pow(10, digit - 1.0);

	return digit * (n - start + 1);
}

int main() {

	int n, digit;
	scanf("%d", &n);

	digit = digit_cnt(n);
	printf("%d", cal_prev(n, digit) + cal_remainder(n, digit));


	return 0;
}
