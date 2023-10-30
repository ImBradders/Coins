#include <iostream>
#define COUNT(a) sizeof(a)/sizeof(a[0])

int main() {
	int coins[] = { 50, 25, 10, 5, 2, 1 };

	std::cout << "Enter amount of change to calculate: ";
	
	int changeToGive = 0;
	std::cin >> changeToGive;

	for (int i = 0; i < COUNT(coins); i++) {
		int result = changeToGive / coins[i];
		changeToGive %= coins[i];

		if (result == 1) {
			std::cout << result << " " << coins[i] << "p coin" << std::endl;
		}
		else {
			std::cout << result << " " << coins[i] << "p coins" << std::endl;
		}
	}

	return EXIT_SUCCESS;
}
