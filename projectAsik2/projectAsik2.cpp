

#include <iostream>
using namespace std;

int main() {
	srand(time(0));


	int nbil = (rand() % 10);
	string status;

	if (nbil % 2 == 0) {
		status = "genap";
	}

	else {
		status = "ganjil";
	}
}



