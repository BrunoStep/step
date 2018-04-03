#include <iostream>
using namespace std;

class A
{
	int a[10];
	int size;
public:
	A() {
		size = 10;
		for (int i = 0; i < 10; i++)
			a[i] = i + i;
	}

	int& operator[](int j) {
		return a[j];
	}

	int get() const {
		return size;
	}
};

int  main() {
	int i, j;
	A object;
	cout << "\nOne object :\n";
	for (i = 0; i < object.get(); i++) {
		cout << object[i] << " ";
	}
	cout << "n\n";
	A arrey[3];
	cout << "\nArrey of objects :\n";

	for (int i = 0; i < 3; i++) {
		for (j = 0; j < object.get(); j++) {
			cout << arrey[i][j] << "";
		}
		cout << "\n\n";
	}
	return 0;
}