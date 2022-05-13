#include <bits/stdc++.h>
using namespace std;
#include "thirdfraction_class.cpp"

int main(){
	
	Fraction f1(10,3);
	Fraction f2(15,5);
	
	Fraction f3 = f1.add(f2);
	f1.display();
	f2.display();
    f3.display();
	
	Fraction f4 = f1.multiply(f2);
	f1.display();
	f2.display();
    f3.display();

		
}