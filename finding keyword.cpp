#include<iostream>
using namespace std;
int main()
{
	const int size = 200;
	char pg[size];
	char sr[size];
	int a, temp = 0;
	cout << "please enter the paragraph:";
	cin.getline(pg, 200);
	cin.ignore();
	cout << "please enter the keyword to search:";
	cin.getline(sr,200);
	cin.ignore();
	for (a = 0; pg[a] != '\0'; a++)
	{
		if (sr[a] == pg[a])
		{
			temp++;
		}
	}
	cout << "The keyword found " << temp << "times";
return 0;
}
