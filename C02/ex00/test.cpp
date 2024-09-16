#include <iostream>

class Fixed {
private:
    int fixedPointValue;                // Stores the fixed-point value as an integer.
    static const int fractionalBits = 8;  // Number of fractional bits, always 8.

public:
    // Default constructor
    Fixed() : fixedPointValue(0) {
        std::cout << "Default constructor called, value initialized to 0." << std::endl;
    }

    // Copy constructor
    Fixed(const Fixed &other) : fixedPointValue(other.fixedPointValue) {
        std::cout << "Copy constructor called, value copied: " << other.fixedPointValue << std::endl;
    }

    // Copy assignment operator overload
    Fixed& operator=(const Fixed &other) {
        std::cout << "Copy assignment operator called." << std::endl;
        if (this != &other) {  // Check for self-assignment
            this->fixedPointValue = other.fixedPointValue;
            std::cout << "Value copied: " << other.fixedPointValue << std::endl;
        }
        return *this;
    }

    // Destructor
    ~Fixed() {
        std::cout << "Destructor called." << std::endl;
    }

    // Getter function for raw bits
    int getRawBits(void) const {
        std::cout << "getRawBits called, returning: " << this->fixedPointValue << std::endl;
        return this->fixedPointValue;
    }

    // Setter function for raw bits
    void setRawBits(int const raw) {
        std::cout << "setRawBits called, setting value to: " << raw << std::endl;
        this->fixedPointValue = raw;
    }
};

int main() {
    Fixed a;                   // Calls the default constructor
    Fixed b(a);                 // Calls the copy constructor
    Fixed c;                    // Calls the default constructor
    c = b;                      // Calls the copy assignment operator

    std::cout << "a's raw bits: " << a.getRawBits() << std::endl;
    std::cout << "b's raw bits: " << b.getRawBits() << std::endl;
    std::cout << "c's raw bits: " << c.getRawBits() << std::endl;

    c.setRawBits(1024);         // Set new raw bits for object `c`
    std::cout << "c's new raw bits: " << c.getRawBits() << std::endl;

    return 0;
}
