#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int total = 0;
	for (int i = 1; i < argc; ++i)
		total += atoi(argv[i]);

	cout << "Sum = " << total;

	return 0;
}
int plusOne(n) {
    return n+1
}

