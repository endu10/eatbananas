#include <iostream>
#include <vector>

using namespace std;

//void func(int);

int main() {


	vector<string> str = {"apple", "alpha","beta"};

	auto str0 = str[0];
	const auto& str1 = str[2];

	str[0] = "changed";
	str[2] = "changed";

	cout << str0<<","<<str1;

	return 0;
}