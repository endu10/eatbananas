#include <iostream>
#include <initializer_list>
#include <vector>

using namespace std;

void func(initializer_list<int> v) {

	for (int i : v) {
		cout << i << '\t';
	}

	cout << "\n";
}

class bla {
public:
	bla() {
		cout << "default constructor \n";
	}

	bla(initializer_list<int>) {
		cout << "initializer_list constructor \n";
	}

	bla(int) {
		cout << "single int constructor \n";
	}


};


int main() {

	func({ 1,2,3,4 });

	vector<int> v1{ 1,2,3 };
	vector<int> v3(2);

	for (int i : v3) {
		cout <<i<<"\n";
	}

	//func(v1);

	bla bla1{};
	bla bla2{ 1,2,3 };
	bla bla3(1);


	return 0;
}
