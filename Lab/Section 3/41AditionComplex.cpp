#include <iostream>
using namespace std;
class Complex {
private:
    double real;
    double imaginary;
public:
    Complex(double r, double i) : real(r), imaginary(i) {}
    void display() {
        cout << "Complex Number: " << real << " + " << imaginary << "i" << endl;
    }
    Complex add(const Complex& other) {
        Complex result(real + other.real, imaginary + other.imaginary);
        return result;
    }
};
int main() {
    double real1, imaginary1;
    cout << "Enter the real and imaginary parts of the first complex number: ";
    cin >> real1 >> imaginary1;
    double real2, imaginary2;
    cout << "Enter the real and imaginary parts of the second complex number: ";
    cin >> real2 >> imaginary2;
    Complex complex1(real1, imaginary1);
    Complex complex2(real2, imaginary2);
    cout << "\nEntered Complex Numbers:\n";
    complex1.display();
    complex2.display();
    Complex sum = complex1.add(complex2);
    cout << "\nSum of Complex Numbers:\n";
    sum.display();
    return 0;
}
