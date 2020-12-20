#include <functional>
#include <iostream>

struct Num {
	Num(int num) : num_(num) {}

	void Print_add(int i) const {
		std::cout << num_ + i << std::endl;
	}

	int addition(int a, int b)  {
		return a + b;
	}

	int num_;
};

void print_num(int i, int b) {
	std::cout << i + b<< std::endl;
}

double my_divide(double a, double b) {
	return a / b;
}


int main() {


	using namespace std::placeholders;


	std::function<void(int, int)> fDisplay = print_num;
	fDisplay(1, 2);

	std::function<void(const Num&, int)> faddDisplay = &Num::Print_add;
	Num n1(22);
	faddDisplay(n1, 2);

	std::function<int( Num&, int, int)> faddReturn = &Num::addition;
	std::cout << faddReturn(n1, 1, 2) << std::endl;

	//binding mydivide
	auto fn_five = std::bind(my_divide, 10, 2);
	std::cout << fn_five() << std::endl;

	auto fn_half = std::bind(my_divide, _1,2);
	std::cout << fn_half(12) << std::endl;


}