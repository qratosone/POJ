#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
#include <algorithm>
using namespace std;
int main() {
	char cipher[26];
	char clear[26];
	memset(cipher, 0, 26);
	memset(clear, 0, 26);
	string input;
	cin >> input;
	for (int i = 0; i < input.length(); i++)
	{
		cipher[input[i] - 'A']++;
	}
	cin >> input;
	for (int i = 0; i < input.length(); i++)
	{
		clear[input[i] - 'A']++;
	}
	sort(cipher, cipher + 26);
	sort(clear, clear + 26);
	for (int i = 0; i < 26; i++)
	{
		if (cipher[i]!=clear[i])
		{
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}