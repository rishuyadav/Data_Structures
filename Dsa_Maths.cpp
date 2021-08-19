//To check if a number is palindrome or not
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

------------------------------------------------------------------------
//Count the number of trailing zeros
//Naive approach would be to calculate the factorial and then iterate through the number tilll factorial %2==0
//Time complexity would be O(n)
//More efficient approach we get 10 by multi of 2 and 5 here 5 is limiting digit
//Countin the number of 5s in the prime factorization of number iterate i=i*5 and add n/5 to the sum,theta(logn)



#include<iostream>
using namespace std;
int main() {
	int n, total5 = 0;
	cin >> n;
	for (int i = 5; i <= n; i = i * 5) {
		total5 += n / 5;

	}
	cout << total5;
}
