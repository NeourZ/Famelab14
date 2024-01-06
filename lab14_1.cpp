#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	for (int i = 1 ; i <= N - 1 ; i ++){
		cout << "Pass " << i << ":" ;

		T temp = d[i];
		int x;
		for (x = i-1 ; x >= 0 ; x--){
			if(d[x] >= temp) break;
			d[x+1] = d[x];
		}
		d[x+1] = temp;

	for(int i = 0; i < 10; i++) cout << d[i] << " ";
	cout << '\n' ;
	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
