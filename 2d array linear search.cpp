#include<iostream>

using namespace std;
int main() {
	string name;
	string names[] = { "ali","hamza" };
	string numbers[] = { "03450522036","031157738656" };
	cin >> name;
	for (int i = 0; i < 2; i++)
	{
		if (names[i]==name)
		{
			cout <<  "found"<<numbers[i];
			
			return 0;
			//break;use or not
		}
	}
	cout << "it not found ";
	//return 1; use or not
}
