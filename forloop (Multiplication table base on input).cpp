#include <iostream>
using namespace std;
int main()
{
	int count, a;
	
	cout << "Enter an integer from 1-9: ";
	cin >> count;
	cout << "\n";
	a = count;
	count += 1;
	if ( count >= 1 && count <= 10 ){
		for ( int b = 1; b <= 10; b++ ){
			cout<< a << "*" << b << " = " << a*b << endl;
			}
	} else{
		cout << "Invalid input! ... Iteger must be from 1-9";
		}
	return 0;
}
