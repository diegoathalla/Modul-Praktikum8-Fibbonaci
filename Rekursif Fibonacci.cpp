#include <iostream>
#include <conio.h>
using namespace std;

//mendeklarasikan fungsi fibonaccinya
int Fibonacci(int n);

int main(){
	int angka,hasil;
	//memasukkan angka deret fibonacci
	cout<<"Menghitung Fibonacci ke : "; cin>>angka;
	hasil=Fibonacci(angka);
	
	//Menampilkan hasil
	cout<<"Nilainya Adalah : "<<hasil; getch();
}

int Fibonacci(int n){
	//Memfilter urutan 0 dan 1
	if(n == 0||n == 1){
		//mengembalikan nilai sendiri
		return n;
	}
	//rekursif untuk mencari bilangan fibonacci
	else{
		return Fibonacci(n-1)+Fibonacci(n-2);
	}
}
