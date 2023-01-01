#include "std_lib_facilities.h"

int char_to_int(char guess);
int main()
try {
	constexpr int SIZE = 4;
	vector<int> answer(SIZE);
	vector<int> guess(SIZE);
	string guess_temp; // 4칸

	{
		// answer 초기화
		int seed = 0;
		cout << "시드 입력: ";
		cin >> seed;

		if (!cin) error("잘못된 입력");

		seed_randint(seed);	// srand() 작동X
	}

	for (int current_index = 0; current_index < SIZE; ++current_index) {
		bool duplicated = true;
		while (duplicated) {
			duplicated = false;

			answer[current_index] = randint(0, 9);

			// 중복된 값 확인
			for (int previous_index = 0; previous_index < current_index; previous_index++) {
				if (answer[current_index] == answer[previous_index]) {
					duplicated = true;
					break;
				}
			}
		}
	}

	bool matched = false;
	while (!matched) {
		int bull = 0;
		int cow = 0;

		// 정수 입력받기
		cout << "네 개의 정수 입력: ";
		cin >> guess_temp;

		if (!cin) error("잘못된 입력");
		if (guess_temp.size() != SIZE) error("입력받은 정수 개수 불일치");

		for (int i = 0; i < SIZE; ++i) {
			guess[i] = char_to_int(guess_temp[i]);
		}


		// 순서 일치 여부 확인
		for (int guess_index = 0; guess_index < SIZE; ++guess_index) {
			for (int answer_index = 0; answer_index < SIZE; ++answer_index) {
				if (guess[guess_index] == answer[answer_index]) {
					(answer_index == guess_index) ? ++bull : ++cow;
					break;
				}
			}
		}

		cout << bull << " Bulls " << cow << " Cows" << '\n';
		if (bull == SIZE) matched = true;
	}

	return 0;
}
catch (exception& e) {
	cerr << "에러: " << e.what() << '\n';
	return 1;
}
catch (...) {
	cerr << "알 수 없는 에러\n";
	return 2;
}

int char_to_int(char guess)
{
	// char('0')  == int(48)  => int(0)
	// ...
	// char('9')  == int(57)  => int(9)

	if (guess < 48 || guess > 57) error("숫자가 아닌 문자 입력");
	return guess - 48;
}
