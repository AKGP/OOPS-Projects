#include <iostream>
using namespace std;


class ComplexNumber {
    private:
        int real;
        int img;
    public:
    void display(void);
    ComplexNumber(int real, int img){
        this->real = real;
        this->img = img;
    }
};

 void ComplexNumber :: display(){
            cout<<this->real<<"+ i"<<this->img<<endl;
        }



int main(){
ComplexNumber c1(1,2);
ComplexNumber c2(3,4);
c1.display();
c2.display();
}
