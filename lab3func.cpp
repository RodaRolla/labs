#include <iostream> 
#include <math.h> 
#include <cmath> 
#include <cstdlib>
using namespace std; 

int getSum(int arr[], int num) {
	int sum=0;
	for (int i=1; i<num-1; i++) {
		sum+=arr[i]; 
		// cout <<"getSum "<<sum<<' '<<i<<' '<<arr[i]<<endl;
	}
	return sum;
}

int getSumP(int arr[], int num) {
	int sum=0;
	
	for (int *p=arr+1; p-arr<num-1; p++) {
		sum+=*p; 
	}
	return sum;
}

int main() 
{ 
	setlocale(LC_ALL, "Russian"); 
	const int n = 100; 
	int sum,k,a[n],min,max;  
	cout<< "Введите количество элементов массива: "; 
	cin >> k; 
	for (int i = 0; i < k; i++) {
		cout<<"array["<<i<<"]=";
		cin>> a[i];
	}
	// Get summ
	sum=getSumP(a,k);
	cout << "Сумма без первого и последнего элементов массива = "<< sum<<"\n";
	max=min=a[0];
	for (int i = 1; i < k;i++) 
	{
		if (a[i]>max)
			max=a[i];
		if (a[i]<min)
			min=a[i];		
	}
	cout <<"Максимальный элемент = "<<max<<"\nМинимальный элемент = "<<min<<"\n"; 
	system ("pause");
}
