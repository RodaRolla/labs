#include <iostream>
#include <math.h>
#include <stdexcept>
#include <fstream>

using namespace std;

// Ограничение последовательности
#define LIMIT (100)

#define ABS(n) ((n)<0?(-n):(n))

// Как бы факториал, но он вещественный и имеет ограниченную точность.
double factorial(double n) {
    //return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
	return (n <= 1) ? 1 : factorial(n - 1) * n;
}

// Пауза
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
	double fmin,fmax,xmin,xmax;
	int imin,imax;
	
	fmin=fmax=xmin=xmax=0.0;
	
	setlocale(LC_ALL, "Russian");

	ofstream fout("lab6.txt");
	// проверить на открытие

	precision=0.01;
    fout << "N\tX\tРяд\tТочность\tКоличество\tФункция\tПогрешность" << endl;
	int inum=0;
	for (double x=-9.0; x<4.0; x+=0.1, inum++) {
		// Последовательность
	    for (i=0, u=0, seq=0; i<LIMIT; i++) {
	    	seq+=(u=pow(x,3*i)/factorial(3*i));
	    	//cout << "seq=" << seq << " i=" << i << " u=" << u << " x^(3i)=" << pow(x,3*i) << " (3i)!=" << factorial(3*i) << endl;
	    	if (ABS(u)<precision) break;
	    }
	    // Функция
	    func=exp(x)/3+2*exp(-x/2)*cos(x*sqrt(3)/2);
		// Output
		fout << inum << "\t" << x << "\t" << seq << "\t" << u << "\t"<< i << "\t"<< func << "\t"<< precision << endl;
		if (inum==0 || seq>fmax) {
		 	fmax=seq;
		 	imax=inum;
		 	xmax=x;
		}
		if (inum==0 || seq<fmin) {
		 	fmin=seq;
		 	imin=inum;
		 	xmin=x;
		}
	}
	fout << "Max=" << fmax << " Line=" << imax << " X=" << xmax << endl;
	fout << "Min" << fmin << " Line=" << imin << " X=" << xmin << endl;
	fout.close();
    pause("Готово! Нажмите Ентер >>> ");
}
