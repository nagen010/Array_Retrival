#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int a, b, n[1000], output = 0;;
	cin >> a >> b;
	for (int i = 0; i < b; ++i)
	{
		cin >> n[i];
	}
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	for (int i = 0; i < 1000; i++)
	{
		if (a == n[i])
		{
			output = i;
			break;
		}
	}
	cout << output;
	return 0;
}