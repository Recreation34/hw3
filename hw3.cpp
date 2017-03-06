#include <iostream>

using namespace std;

struct complexNumber{
	
	double a;
	
	double b; // imaginary part
	
	
	void operator+=(complexNumber& compex){
		
		a = a + compex.a;
		
		b = b + compex.b;
		
	}
	
	void operator-=(complexNumber& compex){
		
		a = a - compex.a;
		
		b = b - compex.b;
		
	}
	
	void operator*=(complexNumber& complex){
		
		double tempa = ( a * complex.a ) - ( b * complex.b );
		
		double tempb = ( a * complex.b ) + ( b * complex.a );
		
		a = tempa;
		b = tempb; 
		
	}
	
	
};

ostream& operator<<(ostream& out, complexNumber& c){
	
	out << c.a << " " << c.b << 'i' << endl;
	return out;
	
}

istream& operator>>(istream& in, complexNumber& c){
	
	in >> c.a >> c.b;
	
	return in;
	
}

int main(int argc, char** argv) {
	
	complexNumber comp1,comp2;
	
	comp1.a = 5.0;
	comp1.b = 2.0;
	
	
	// set second complex number by user
	
	cout << "First complex number : " << comp1 << endl;
	
	cout << "Please set second complex number" << endl;
	cin >> comp2;
	
	cout << "Second complex number : " << comp2 << endl;
	
//	comp1+=comp2;
	
	cout << "addition : " << comp1 << endl;

//	comp1-=comp2;
	
	cout << "subtruction : " << comp1 << endl;
	
//	comp1*=comp2;
	
	cout << "multply : " << comp1 << endl;
	
	return 0;
}
