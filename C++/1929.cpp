#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
int main()
{
	//입력
	int M = 0;
	int N = 0;

	cin >> M >> N;

	//배열 생성
	bool* A = new bool[N + 1]();// false로 초기화


	//소수찾기 시작
	bool inRange = true;			
	int max_i = ceil(sqrt(N));
	int i = 2;
	int j = 2;
	int n_p = 0;

	// i가 2인 경우
	j = ceil((double)M / i);	// 시작이 M일 때, i*j는 M 이상이어야 함!
	if (j < i) {
		j = i;
		inRange = false;
	}

	// int n_p == non_prime
	for (n_p = i * j; n_p <= N; n_p += i) {
		A[n_p] = true;
	}

	// i가 3이상인 경우
	for (i = 3; i < max_i; i += 2) {
		if (inRange) {
			j = ceil((double)M / i);
			if (j < i) {
				j = i;
				inRange = false;
			}
		}
		else j = i;

		for (n_p = i * j; n_p <= N; n_p += i) {
			A[n_p] = true;
		}
	}

	// 출력
	for (i = M; i <= N; ++i) {
		if (A[i] == false)
			cout << i << '\n';
	}

	// 배열 갯수 조절 필요성 있음
	return 0;
}