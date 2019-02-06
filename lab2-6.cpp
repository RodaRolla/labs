#include <iostream>
#include <math.h>
#include <stdexcept>

using namespace std;

// ����������� ������������������
#define LIMIT (100)

#define ABS(n) ((n)<0?(-n):(n))

// ��� �� ���������, �� �� ������������ � ����� ������������ ��������.
double factorial(double n) {
    //return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
	return (n <= 1) ? 1 : factorial(n - 1) * n;
}

// �����
void pause(string msg) {
    cin.clear();
    cout << msg;
    cin.ignore(100000, '\n');
    cin.get();
}

int main(void) {
	double x, precision;
	double u; 
	double seq,func;
	int i; 
	
	setlocale(LC_ALL, "Russian");

	cout << "X = ";
	cin >> x;
	cout << "Precision = ";
	cin >> precision;

	// ������������������
    for (i=0, u=0, seq=0; i<LIMIT; i++) {
    	seq+=(u=pow(x,3*i)/factorial(3*i));
    	cout << "seq=" << seq << " i=" << i << " u=" << u << " x^(3i)=" << pow(x,3*i) << " (3i)!=" << factorial(3*i) << endl;
    	if (ABS(u)<precision) break;
    }

    // �������
    func=exp(x)/3+2*exp(-x/2)*cos(x*sqrt(3)/2);

	cout << endl;
    cout << "���         = " << seq << endl;
    cout << "��������    = " << u << endl;
    cout << "����������  = " << i << endl;
    cout << "�������     = " << func << endl;
    cout << "����������� = " << precision << endl;

    if (func!=0) {
     	cout << "���. ����.  = " << ABS((seq-func)/func) << endl;
    } else {
    	cout << "�� ���� ��������� ������������� ����������� ��� func==0" << endl;
    }

    pause("������� ����� >>> ");
}
