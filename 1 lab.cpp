#include <iostream>
#include <cstdlib>
using namespace std;
	int main(){
	setlocale(LC_ALL, "Russian"); 
	int a,b,c;
	cout << "А = ";
	cin >> a;
	cout << "B = ";
	cin >> b;
	cout << "C = ";
	cin >> c;
	if ((a+b>c) & (b+c>a) & (c+a>b)) 
		cout << "треугольник существует" << endl;
	else 
		cout<< "треугольник не существует"<< endl;
return 0;
}








