/*
	Girilen araliktaki tek sayilari ayri cift sayilari ayri toplayip adetlerini hesaplayan prog - ODEV
	dongu olarak while kullanilacak
	(TekCiftToplam.cpp)
*/
#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
//
int main(){
	int altDeger, ustDeger, ciftTop=0, ciftAdet=0, tekTop=0, tekAdet=0;
	cout << "alt degeri giriniz: ";
	cin >> altDeger;
	cout << "ust degeri giriniz: ";
	A10:
	cin >> ustDeger;
//
	if (altDeger>=ustDeger){
		cout << "ust deger daha buyuk olmalidir, tekrar giriniz: ";
		goto A10;
	}
//
	while (altDeger<=ustDeger){
		if (altDeger%2==0){
			ciftTop += altDeger;
			ciftAdet++;
		} else{
			tekTop += altDeger;
			tekAdet++;
		}
		altDeger++;
	}
//
	cout << "tek sayilar toplami : " << tekTop << endl
		 << "tek sayilar adedi   : " << tekAdet << endl
		 << "cift sayilar toplami: " << ciftTop << endl
		 << "cift sayilar adedi  : " << ciftAdet << endl;
//
	getch();
	return 0;
}
