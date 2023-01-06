#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
int main()
{
	//입력
	int M = 2;
	int N = 1000000;

	cin >> M >> N;

	//배열 생성
	bool* A = new bool[N + 1](); //false로 초기화

	//소수찾기 시작
	// i가 2인 경우
	bool inRange = true;
	int max_i = sqrt(N);
	{
		int i = 2;
		int j = ceil((double)M / 2);
		if (j < 2) {
			j = 2;
			inRange = false;
		}

		// int n_p == non_prime
		for (int n_p = i * j; n_p <= N; n_p += i)
			A[n_p] = true;
	}

	// i가 3이상인 경우
	int j = ceil((double)M / 2);

	if (j < 3) {
		j = 3;
		inRange = false;
	}

	for (int i = 3; i < max_i; i += 2) {

		for (int n_p = i * j; n_p <= N; n_p += i) {
			cout << i << ", " << j << ", " << n_p << ", " << i * j << '\n';
			A[n_p] = true;
		}
	}

	//출력
	for (int i = M; i <= N; ++i) {
		if (A[i] == false)
			cout << i << '\n';
	}

	//배열 갯수 조절 필요성 있음
	return 0;
}