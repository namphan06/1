#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int tonghaiso(int a,int b);
int main(int argc, char** argv) {
	int a,b;
	cout<<"Nhap so a : ";
	cin>>a;
	cout<<"Nhap so b : ";
	cin>>b;
	int kq=tonghaiso(a,b);
	cout<<"ket qua cua phep cong "<<" a "<<"+"<<" b "<<" la : "<<kq;
	return 0;
}
int tonghaiso(int a,int b)
{
	return a+b;
}
