#include <iostream>
using namespace std;
#define FirstVal 3
#define SecondVal 3
#define myval 5
#if FirstVal*SecondVal == 9
int main() {
	cout << "9\n" << myval;
	return 0;
}
#elif FirstVal*SecondVal == 15
int main() {
	cout << "15\n";
	return 0;
}
#else
int main() {
	cout << "Not 9 or 15\n";
	return 0;
#endif