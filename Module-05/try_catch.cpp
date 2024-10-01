#include <iostream>
using namespace std;

int main() {
    try {
        // Code that may throw an exception
        int x = 0;
        if (x == 0) {
            throw runtime_error("Division by zero error!");
        }
        int y = 10 / x;
    } 
    catch (const runtime_error& e) {
        // Catch and handle the exception
        cout << "Caught an exception: " << e.what() << endl;
    }
    
    cout << "Program continues..." << endl;
    return 0;
}
