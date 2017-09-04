#include <iostream>

int main(int argv, char* argc[]) {
	auto numberOfPeople = atoi(argc[1]);
	auto numberOfSimulation = atoi(argc[2]);

	std::cout << numberOfPeople << ' ' << numberOfSimulation << '\n';
	std::cout.flush();
}
