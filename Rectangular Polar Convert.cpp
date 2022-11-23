#include <iostream>
#include <math.h>

using namespace std;
int main(){
cout<<"======KONVERSI BILANGAN======="<<endl;
cout<<"1. Polar"<<endl;
cout<<"2. Rectagular"<<endl;
cout<<"=============================="<<endl;

float a, b, c, d, hasilx, hasily;

cout<<"Bentuk Asal:";
cin>>a;
cout<<"Bentuk Akhir  :";
cin>>b;
cout<<endl;

if (a==1){
	cout<<"Nilai R  : ";
	cin>>c;
	cout<<"Sudut   : ";
	cin>>d;
	if(b==1){
		cout<<"Polar = "<<c<<" sudut "<<d<<" derajat";
	}
	
	else if(b==2){
		hasilx= c*cos(d);
		hasily= c*sin(d);
		cout<<"Rectangular   ="<<hasilx<<" + j"<<hasily;
	}
  }
  if (a==2){
	cout<<"Nilai R  : ";
	cin>>c;
	cout<<"Sudut   : ";
	cin>>d;
	if(b==1){
		cout<<" polar ="<<sqrt(pow(c,2)+pow(d,2))<<" sudut"<<atan(d/c)<<"derajat";
	}
	
	else if(b==2){
		cout<<"Rectangular   ="<<c<<"  + j "<<d;
	}
 }
}



