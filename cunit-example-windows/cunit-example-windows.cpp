// cunit-example-windows.cpp : Defines the entry point for the application.
//

#include "cunit-example-windows.h"

#include <test.pb.h>

int main() {
	std::cout << "Welcome to c-unit." << std::endl;
	cunit::test::CUnitTestMessage msg;
	msg.set_name("My name is c-unit");
	std::cout << "Computer day what?? " << msg.name() << std::endl;
	int c;
	std::cin >> c;
	return 0;
}
