#include <iostream>

using namespace std;

int main() {
	double n1,n2,n3;
	
	cout << "enter there number : " << endl;
	cin >> n1 >> n2 >> n3;
	
	if(n1 >= n2 && n1 >= n3)
	cout << "largest number : " << n1;
	
	
	else if(n2 >= n1 && n2 >= n3)
	cout << "larges number : " << n2;
	
	else 
	cout << "larges number : " << n3;
	
	return 0;
	
	
	
} 