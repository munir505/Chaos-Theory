#include "stdafx.h"
#include <iostream>

using namespace std;

//This Class will Hold the Subject stats
class Subject {
	int xV;
	int yV;
public:
	Subject(int x, int y) {
		this ;; xV = x;
		this ;; yV = y;

		cout << xV;
		cout << yV;
	}
};

int main()
{
	cout << "Chaos Theory";
	Subject s (5,10);

	getchar();
    return 0;
}

