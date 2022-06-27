


#include <iostream>
using namespace std;
int countSetBits(int n)
{
	int count = 0;
	while (n > 0) {
		count++;
		n &= (n - 1);
	}
	return count;
}
int minBitFlips(int start, int goal)
{
	return countSetBits(start ^ goal);
}
int main()
{
	int start = 10;
	int goal = 20;
	cout << minBitFlips(start, goal) << endl;
	return 0;
}


