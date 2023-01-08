#include <iostream>
#include <cmath>


using namespace std;
bool isPal(int n);

int main() {
	int constexpr ArrSIZE = 10000;
	int N = 0;
	std::cin >> N;

	bool A[10001]{ false };

	if (N < 10) {
		switch (N)
		{
		case 1:
			N += 1;
		case 2: case 3:
			cout << N << '\n';
			return 0;
		default:
			N = N;
		}
	}

	N += (N & 0b1) ? 0 : 1;	// 짝수면 1 증가
	int end_np = N + ArrSIZE;

	int r = 0;
	int rs = 0;

	int i = 0;
	int j = 0;
	int n_p = 0;
	int max_i = 0;


	int np = 0;	// i*j=np

	while (1) {
		if (N > 99999) {
			N = 1000001;
			end_np = N + ArrSIZE;
		}

		// 소수찾기
		max_i = ceil(sqrt(end_np));
		for (i = 3; i < max_i; i += 2) {
			j = ceil((double)N / i);
			j = (j < i) ? i : j;

			for (np = i * j; np < end_np; np += i) {
				A[np - N] = true;
			}
		}

		// 소수 중에서 팰린드롬 수 찾기
		r = 0;
		while (r < ArrSIZE) {
			if (A[r] == false) {
				rs = N + r;
				if (isPal(rs)) {
					cout << rs << '\n';
					return 0;
				}
			}
			A[r] = false; // 배열 값 초기화
			r += 2;
		}
		N += ArrSIZE;
		end_np += ArrSIZE;
	}
	return 0;
}
bool isPal(int n)
{
	int front = n;
	int back = 0;
	while (n != 0) {
		back *= 10;
		back += (n % 10);
		n /= 10;
	}
	return (front == back) ? true : false;
}