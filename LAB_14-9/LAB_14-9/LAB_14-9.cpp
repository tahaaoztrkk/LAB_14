#include <iostream>
using namespace std;

class Car {
private:
    int speed;

public:
 
    Car(int speed = 0) {
        this->speed = speed;
    }

    void setSpeed(int s) {
        speed = s;
    }

    int getSpeed() {
        return speed;
    }

    void display() {
        cout << "Car speed: " << speed << " km/h" << endl;
    }
};

int main() {

    Car myCar(60);

    Car* carPtr = &myCar;

    cout << "Using object:" << endl;
    myCar.display();

    cout << "\nUsing pointer:" << endl;
    cout << "Speed: " << carPtr->getSpeed() << " km/h" << endl;

    carPtr->setSpeed(100);
    cout << "After modification: ";
    carPtr->display();

    Car* dynamicCar = new Car(80);
    cout << "\nDynamic car: ";
    dynamicCar->display();

    delete dynamicCar;

    return 0;
}