#include <iostream>

using namespace std;

void error(string s) {
	throw runtime_error(s);
}

class channel {
public:
	int i{};
	// 처음: 0번   
	// 마지막: N-1번
	int k1{};	// KBS1 의 위치
	int k2{};	// KBS2 의 위치
	char direction{ 'd' }; // 'd' == down , 'u'= up

	// 생성자
	channel(int N, int kbs1, int kbs2) {
		i = 0; // 0에서 last 중 하나의 값
		k1 = kbs1;
		k2 = kbs2;
		last = N;
		direction = { 'd' };
		last= set_last();
	}

	void down();
	void up();
	void swap_down();
	void swap_up();

private:
	int last{};

	int set_last();
	bool isTop = false;
	char set_direction();
	void error_test();

	void update();
};
void channel::down() {
	i++;
	update();
	cout << 1;
}
void channel::up() {
	i--;
	update();
	cout << 2;
}
void channel::swap_down() {
	if (i == k1) {
		down();
		/*
		if (i + 1 == k2) { k1++; k2--; }
		else { k1++; }
		*/
	}
	else if (i == k2) {
		if (i + 1 == k1) { k1--; k2++; }
		else { k2++; }
	}

	else { i + 1 == k1 ? k1-- : k2--; }

	i++;
	update();
	cout << 3;
}
void channel::swap_up() {
	if (i == k1) {
		if (i - 1 == k2) { k1--; k2++; }
		else { k1--; }
	}

	else if (i == k2) {
		if (i - 1 == k1) { k1++; k2--; }
		else { k2--; }
	}

	else { i - 1 == k1 ? k1++ : k2++; }

	i--;
	update();
	cout << 4;
}


void channel::update() {
	error_test();
	last = set_last();
	direction = set_direction();
	isTop = k1 < k2;
	error_test();
}
int channel::set_last() {
	int max = 0;
	//k1,k2,select의 맥스가 last보다 작으면 last=max
	if (k1 > max)max = k1;
	if (k2 > max)max = k2;;
	if (i > max)max = i;

	return (max > last) ? max : last;
}

char channel::set_direction()
{
	if (i == 0 && direction == 'u'&&isTop)
		return 'd';
	if (i == last && direction == 'd')
		return 'u';
}

void channel::error_test() {
	if (i<0 || i>last) {
		cout << "i: " << i << '\n'
			<< "last: " << k2 << '\n';
		error("i 인덱스 오버");
	}
	if (k1 == k2) {
		error("k1, k2의 값이 같음.");
	}
	if (k1<0 || k1>last) {
		error("k1 인덱스 오버");
	}
	if (k2<0 || k2>last) {
		cout << "last: " << last << '\n'
			<< "k2: " << k2 << '\n';
		error("k2 인덱스 오버");
	}
}


int main()
try {
	cin.tie(NULL);
	ios::sync_with_stdio(false);


	int N{ 0 };
	cin >> N;

	int kbs1 = 0;
	int kbs2 = 0;

	string chan{ 0 };
	for (int i = 0; i < N; ++i) {
		cin >> chan;

		if (chan.compare("KBS1")) kbs1 = i;
		else if (chan.compare("KBS2")) kbs2 = i;
		else;
	}
	channel ch(N, kbs1, kbs2);

	while ((ch.k1 == 0 && ch.k2 == 1) == false)
	{
		cout << "k1: " << ch.k1 << '\t' << "k2: " << ch.k2 << '\n'
			<<"i: " << ch.i << '\t' << "direction: " << ch.direction << '\n';
		if (ch.direction == 'd') {
			if (ch.i == ch.k1) ch.down();
			else if (ch.i == ch.k2) ch.swap_down();
			else ch.swap_down();
		}
		else if(ch.direction == 'u') {
			if (ch.i == ch.k1) ch.swap_up();
			else if (ch.i - 1 == ch.k1) ch.up();
			else ch.i == ch.k2 ? ch.swap_up() : ch.up();
		}
	}

	return 0;
}
catch (exception& e) {
	cerr << "\n\nERROR!!:" << e.what() << '\n';
	return 1;
}