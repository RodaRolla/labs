#include <iostream>
#include <cstdlib>
using namespace std;
	int main(){
	setlocale(LC_ALL, "Russian"); 
	int a,b,c;
	cout << "� = ";
	cin >> a;
	cout << "B = ";
	cin >> b;
	cout << "C = ";
	cin >> c;
	if ((a+b>c) & (b+c>a) & (c+a>b)) 
		cout << "����������� ����������" << endl;
	else 
		cout<< "����������� �� ����������"<< endl;
return 0;
}








