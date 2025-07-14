#include <iostream>
using namespace std;

int main(){
	int x, y, t;
	x = 2;
	y = 5;
	cout << "x = " << x << "\n";
	cout << "y = " << y << "\n";
	t = x;
	x = y;
	y = t;
	cout << "\nSwap! \n\n";
	cout << "x = " << x << "\n";
	cout << "y = " << y << "\n";
	return 0;
}
