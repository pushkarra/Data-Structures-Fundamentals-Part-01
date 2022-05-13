#include <bits/stdc++.h>
using namespace std;
#include "fraction_class.cpp"

int main(){
	
	Fraction f1(10,3);
	Fraction f2(15,5);
	
	f1.add(f2);
	f1.display();
	f2.display();
	
	f1.multiply(f2);
	f1.display();
	f2.display();
		
}