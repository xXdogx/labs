#include "Both.h"
#include <iostream>

int main() {
	BothTasks BothTasks{ 0,0,0 };
  unsigned int currentValue = 0;
  do {
      std::cin >> currentValue;

      if (!std::cin) {
          std::cout << "Error occurred." << "/n";
          return 1;
      }
  	try {
  		BothTasks(currentValue);
  	}
  	catch (const std::overflow_error& e) {
  		std::cout << e.what() << "/n";
  		return 2;
  	}
  } while (currentValue && std::cin);

	std::cout << "Maximum successive equal elements number: " << LocalMax.count << "\n";
	std::cout << "Strict local maxima number: " << Equal.countV << "\n";
}
