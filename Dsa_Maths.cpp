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

----------------------------------------------------------------------------------------------------------------
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

----------------------------------------------------------------------------------------------------------------

//GCD
//Naive Solution : take min(a,b) and iterate towards 0
//as soon find the number dividing both its gcd : Time complexity O(min(a,b))
//Efficient Solution:

//Euclidean Algorithms
//Let b be smaller than a
//then gcd(a,b)= gcd(a-b,b)
//Why? Let 'g' be GCD of 'a' and 'b'
//a=gx,b=gy and GCD(x,y)=1
//(a-b)=g(x-y)
#include<iostream>
using namespace std;
int gcd(int a, int b) {
	while (a != b) {
		if (a > b) {a = a - b;}
		else {b = b - a;}
	}
	return a;
}

//Optimized version of Euclidean algorithm
int gcdOptimized(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcdOptimized(b, a % b);
}
int main() {
	cout << gcdOptimized(12, 24);
}

----------------------------------------------------------------------------------------------------------------
//Prime check 
//Iterate till sqrt(n) cause divisors of numbers are in pairs Efficiency O(sqrt(n))
#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n) {
	if (n == 1) {return false;}
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	int n;
	cin >> n;
	if (isPrime(n)) {cout << "Prime";}
	else {cout << "Not Prime";}

}
//More Optimized solution
//First check for multiple of 2 or 3 it reduces a lot of iterations, reduces iterations to 1/3rd alsmost
bool isPrimeOptimized(int n){
	if(n==1){return false;}
	if(n==2||n==3){return true;}
	if(n%2==0||n%3==0){return false;}
	for(int i=5;i<=sqrt(n);i=i+6){
		if (n%i==0||n%(i+2)==0){return false;}

	}
	return true;
}