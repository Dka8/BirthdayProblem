#include <iostream>

int main(int argv, char* argc[]) {
	if(argv < 3) return 1;

	auto numberOfPeople = atoi(argc[1]);
	auto numberOfSimulation = atoi(argc[2]);

	std::cout << numberOfPeople << ' ' << numberOfSimulation << '\n';
	std::cout.flush();
}
