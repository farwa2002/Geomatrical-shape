#include <iostream>

class Hexagon {
private:
    double sideLength;

public:
    Hexagon(int lastDigit) : sideLength(lastDigit) {}

    double calcArea() {
        return 1.5 * 1.732 * sideLength;
    }

    double calcPeri() {
        return 6 * sideLength;
    }

    double calcAngleSum() {
        return 6 * 120;
    }

    void display() {
        std::cout << "Hexagon Properties:" << std::endl;
        std::cout << "Area: " << calcArea() << std::endl;
        std::cout << "Perimeter: " << calcPeri() << std::endl;
        std::cout << "Sum of Angles: " << calcAngleSum() << std::endl;
    }
};

class Square {
private:
    double sideLength;

public:
    Square(int lastDigit) : sideLength(lastDigit + 1) {}

    double calcAreaSquare() {
        return sideLength * sideLength;
    }

    double calcPeriSquare() {
        return 4 * sideLength;
    }

    void display() {
        std::cout << "\nSquare Properties:" << std::endl;
        std::cout << "Area: " << calcAreaSquare() << std::endl;
        std::cout << "Perimeter: " << calcPeriSquare() << std::endl;
    }
};

int main() {
    // Extract last digit of CNIC
    std::string cnic = "XYTYHFDTBS6";
    int lastDigit = cnic[cnic.length() - 1] - '0';

    Hexagon hexagon(lastDigit);
    Square square(lastDigit);

    while (true) {
        std::cout << "\nMenu:" << std::endl;
        std::cout << "1. Hexagon Properties" << std::endl;
        std::cout << "2. Square Properties" << std::endl;
        std::cout << "Any other key to exit." << std::endl;

        char choice;
        std::cin >> choice;

        switch (choice) {
            case '1':
                hexagon.display();
                break;
            case '2':
                square.display();
                break;
            default:
                std::cout << "Exiting the program." << std::endl;
                return 0;
        }
    }

    return 0;
}
