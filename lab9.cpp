#include <iostream>
#include <cmath>

int size(int);
int rec_size(int);

int main() {
	int num;
	std::cout << "Enter a number...\n";
	std::cin >> num;
	std::cout << "Recursive method: " << rec_size(num) << std::endl;
	std::cout << "Non-recursive method: " << size(num) << std::endl;
	return 0;
}
int size(int num) {
	int count = 0;
	do {
		count++;
	} while (num /= 10);
	return count;
}

int rec_size(int num) {
	return abs(num) < 10 ? 1 : 1 + rec_size(num / 10);
}
