#include <iostream>
#include <new>

using namespace std;


constexpr double pi = 3.1415926;

#define radians(deg) ((deg) * pi /180)


int main() {


	constexpr double d3 = 42.0;
	constexpr double d8 = radians(d3);

	try {
		int* t = new int;
		delete t;
	}
	catch (bad_alloc e) {
		cout << e.what() << endl;
		return 1;
	}

	string* s = new(nothrow)string();
	if (s == nullptr) {
		cout << "memory alloc error: s" << endl;
		return 1;
	}
	delete(nothrow, s);
	
	char* c = new(nothrow) char[100];
	if (nullptr == c) {
		cout << " memory alloc error: c" << endl;
	}
	delete[](nothrow, c);






	return 0;
}