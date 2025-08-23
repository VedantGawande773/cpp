#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    Complex();                        
    Complex(int r, int i);            

    int getReal();                    
    int getImag();                    

    void setReal(int r);              
    void setImag(int i);              

    void display();
};
