#include<iostream>
using namespace std;
int main()
{
	int n, k, rev = 0;
	cin >> n;
	int temp = n;
	while (temp > 0) {
		k = temp % 10;
		rev = rev * 10 + k;
		temp = temp / 10;

	}
	if (rev == n) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
}

