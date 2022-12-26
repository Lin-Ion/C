#include "std_lib_facilities.h"

int main() {
	double val = 0;
	vector <double> vals;
	string unit = "";

	constexpr double m_per_cm = 0.01;	//100m == 1cm
	constexpr double cm_per_in = 2.54;	//1in == 2.54cm
	constexpr double in_per_ft = 12;	//1ft == 12in

	bool init = true;
	double val_min = 0;	//최솟값
	double val_max = 0;	//최댓값
	double val_sum = 0;	//합계
	int val_count = 0;	//개수 == vals.size()

	cout << "입력: ";
	while (cin >> val >> unit) {
		if (unit == "in" || unit == "ft" || unit == "cm" || unit == "m") {}
		else {
			cout << '\'' << unit << "'는 잘못된 단위입니다.\n";
			cout << "가능한 단위: in, ft, cm, m\n";
			cout << "입력: ";
			continue;
		}

		cout << "입력받은 값: " << val << unit;
		{
			if (unit == "cm")
				val *= m_per_cm;
			else if (unit == "in")
				val *= m_per_cm * cm_per_in;
			else if (unit == "ft")
				val *= m_per_cm * cm_per_in * in_per_ft;
		}
		if (init) {
			val_min = val;	//최솟값 저장
			val_max = val;	//최댓값 저장
			val_sum = val;	//합계 저장
			init = false;
		}

		else {
			if (val < val_min) {
				cout << " 지금까지 가장 작은 값";
				val_min = val;
			}
			if (val > val_max) {
				cout << " 지금까지 가장 큰 값";
				val_max = val;
			}
		}

		++val_count;	//==vals.size()
		val_sum += val;
		vals.push_back(val);

		cout << "\n\n";
		cout << "입력: ";
	}
	cout << '\n';
	cout << "최솟값: " << val_min << "m\n";
	cout << "최댓값: " << val_max << "m\n";
	cout << "값의 개수: " << val_count << '\n';
	cout << "값의 합: " << val_sum << "m\n";

	sort(vals);
	for (double x : vals) cout << x<<'\n';
}