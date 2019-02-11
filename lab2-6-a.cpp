#include <iostream>
#include <cstdlib>
using namespace std;
	int main(){
	setlocale(LC_ALL, "Russian"); 
	int a,b,c;
	cout << "A = ";
	cin >> a;
	cout << "B = ";
	cin >> b;
	cout << "C = ";
	cin >> c;
	if ((a+b>c) & (b+c>a) & (c+a>b)) 
		cout << "o?aoaieuiee nouanoaoao" << endl;
	else 
		cout<< "o?aoaieuiee ia nouanoaoao"<< endl;
return 0;
}
