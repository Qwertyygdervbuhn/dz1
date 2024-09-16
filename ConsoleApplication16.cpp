#include <iostream>

using namespace std;
int main()
{
	int arr[5]{ 1,2,3,4,5 };
	for (int a = 0; a < 5; a++) {
		cout << arr[a] << "\t";
	}

	for (int i = 5; i > -1; i--) {
		cout << arr[i] << endl;
	}
	return 0;
}


