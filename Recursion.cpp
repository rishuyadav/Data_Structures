#include<iostream>
using namespace std;
int fun1() {
	cout << "Fun 1 callled" << endl;
	fun1();
	return 0;
}
int main() {
	fun1();
	return 0;
}
