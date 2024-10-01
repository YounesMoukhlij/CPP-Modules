#include <iostream>
#include <stdexcept>

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



// int main() {
//     try {
//         int x = -1;
//         if (x < 0) {
//             throw invalid_argument("Negative value not allowed");
//         }
//     } 
//     catch (const invalid_argument& e) {
//         cout << "Invalid argument: " << e.what() << endl;
//     }
//     catch (const exception& e) {
//         // General catch-all for other exceptions
//         cout << "Exception: " << e.what() << endl;
//     }

//     return 0;
// }
