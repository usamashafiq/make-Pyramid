#include <iostream>
#include <string>
using namespace std;

int main()
{
	string list = "abcdefghijklmnopqrstuvwxyz{";
	string::const_iterator x = list.begin(), x2;

	for (int p = 1; p <= 14; ++p) {
		int w, count = 0; // set to 0 each iteration

						  // output spaces
		for (int k = 13; k >= p; --k)
			cout << ' ';

		x2 = x; // set starting point

				// output first half of characters
		for (int c = 1; c <= p; ++c) {
			cout << *x2;
			x2++; // move forwards one letter
			count++; // keep count of iterations
		}


		// output back half of characters
		for (w = 1; w < count; ++w) {
			if (x2 < x)
			{
				x2++;
			}
			else {
				x2 -= 2;
				cout << *x2;
				x2++; // move backwards one letter
			}

		}

		x++; // next letter
		cout << '\n';
	}

	cout << endl;
	system("pause");
	return 0;
}
