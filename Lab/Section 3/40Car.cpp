#include <iostream>
#include <string>
using namespace std;
class Car {
private:
    string model;
    double mileage;
public:
    void inputDetails() {
        cout << "Enter car model: ";
        cin.ignore(); 
        getline(cin, model);
        cout << "Enter mileage (in miles per gallon): ";
        cin >> mileage;
    }
    double getMileage() const {
        return mileage;
    }
    const string& getModel() const {
        return model;
    }
};

int main() {
    const int numCars = 7;
    Car cars[numCars];
    for (int i = 0; i < numCars; ++i) {
        cout << "\nEnter details for Car " << i + 1 << ":\n";
        cars[i].inputDetails();
    }
    double maxMileage = -1.0;
    int maxMileageIndex = -1;
    for (int i = 0; i < numCars; ++i) {
        if (cars[i].getMileage() > maxMileage) {
            maxMileage = cars[i].getMileage();
            maxMileageIndex = i;
        }
    }
    if (maxMileageIndex != -1) {
        cout << "\nCar with the highest mileage:\n";
        cout << "Model: " << cars[maxMileageIndex].getModel() << endl;
        cout << "Mileage: " << cars[maxMileageIndex].getMileage() << " miles per gallon\n";
    } else {
        cout << "\nNo data available.\n";
    }
    return 0;
}
