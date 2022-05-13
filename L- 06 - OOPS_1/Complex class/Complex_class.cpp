class Complex{
	
	private:
		
		int real;
		int imaginary;
		
	public:
		
		Complex(int real, int imaginary){
			this -> real = real;
			this -> imaginary = imaginary;
		}
		
		void print(){
			cout<< real <<" + "<<"i"<< imaginary << endl;
	    }
	    
	    void add(Complex c2){
	    	real = real + c2.real;
	    	imaginary = imaginary + c2.imaginary;
		}
		
		void multiply(Complex c2){
			int p1 = real * c2.real;
			int p2 = real * c2.imaginary;
			int p3 = imaginary * c2.real;
			int p4 = imaginary * c2.imaginary;
			
			real = p1 - p4;
			imaginary = p2 + p3;
		}
	
};