// C++ headers -- do not have .h extensions.
// C++ organize all classes, methods, objects/variables into logical containers.
//	These containers are called as "namespaces".
// All standatd library classes, functions, and objects are in "std" namespace.
#include <iostream> 
using namespace std;

// In C++, console input/output is done using objects of some pre-defined classes.
//	class ostream -- output stream (printing)
//	class istream -- input stream (scanning)
// The objects of these classes are also already created in the lib -- global objects.
//	cin - stdin - istream class object
//	cout - stdout - ostream class object
//	cerr - stderr - ostream class object
// Output syntax
//	cout << "Hello, World!";
//	cerr << "Some error occurred!";
// Input syntax
//	cin >> var;
// cin/cout/cerr these objects work with special operators.
//	insertion operator << -- with cout/cerr (for output/print)
//  extraction operator >> -- with cin (for input/scan)

int main() {
	int num1, num2, result;
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;
	result = num1 + num2;
	cout << "Result: " << result << endl;

	char name[80];
	cout << "Enter name: ";
	cin >> name; // to input full string including spaces - use separate fn cin.getline();
	cout << "Name: " << name << endl;

	cout << "\tBye!";
	return 0;
}
