#include <iostream>
using namespace std;
int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int digit[10]{ 0 };
	char ch{};

	while (true) {
		ch = cin.get();
		if (ch == '\n') break;
		++digit[ch - 48];
	}

	// if (N != 30n)
	if (digit[0] == 0) {
		cout << -1 << '\n';
		return 0;
	}

	int sum =
		digit[1]
		+ digit[2] * 2
		+ digit[4]
		+ digit[5] * 2
		+ digit[7]
		+ digit[8] * 2;

	// if (N != 3n)
	if (sum % 3 != 0) {
		cout << -1 << '\n';
		return 0;
	}

	// output
	for (int d = 9; d >= 0; --d) {
		for (int i = digit[d] - 1; i >= 0; --i) {
			cout << d;
		}
	}
	cout << '\n';

	return 0;
}