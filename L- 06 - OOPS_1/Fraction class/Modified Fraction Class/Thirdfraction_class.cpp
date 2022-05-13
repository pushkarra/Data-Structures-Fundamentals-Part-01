class Fraction {
	
	private:
		
		int numerator;
		int denominator;
		
	public:
		
		
	    Fraction(int numerator, int denominator){
			this -> numerator = numerator;
			this -> denominator = denominator;
			return ;
	    }
		
	    void display(){
			cout<< this -> numerator <<" / "<< this -> denominator << endl;
			return;
	    }
		
	    void simplify(){
			int gcd = 1;
			int j = min(numerator,denominator);
			
			for(int i=2; i<=j; i++){
				if((this -> numerator % i == 0) && (this -> denominator % i ==0)){
					gcd = i;
				}
			}
			
			numerator = (numerator/gcd);
			denominator = (denominator/gcd);

	    }
		
	    Fraction add(Fraction const &f2){                            // adding const for avoiding illegal changes
	                                                                // adding & for avoiding extra copying
	                                                                // including fraction class to save the result
			
			int mul = this -> denominator * f2.denominator;
			int a = mul/this -> denominator;
			int b = mul/f2.denominator;
			int up = ((this -> numerator*a) + (f2.numerator*b));
			
//			numerator = up;
//			denominator = mul;
			
			Fraction fnew(up,mul);                                // setting up the values for new object
			fnew.simplify();                                     // acting as this.simplify
			return fnew;                                         // returning the fraction 
	    }
	    
	    Fraction multiply(Fraction const &f2){
	    	
	    	int num1 = numerator * f2.numerator;
	    	int num2 = denominator * f2.denominator;
	    	
//	    	numerator = num1;
//	    	denominator = num2;
	    	
	    	Fraction fnew(num1,num2);
			fnew.simplify();    // acting as this.simplify
			return fnew;
		}
		
		
};