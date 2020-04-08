#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string a, b, c;
	cin >> a >> b >> c;
	vector<string> vec{ a, b, c };
	vector<string> out{ "F", "M", "S" };
	auto rock = count(vec.begin(), vec.end(), "rock");
	auto paper = count(vec.begin(), vec.end(), "paper");
	auto scis = count(vec.begin(), vec.end(), "scissors");

	if(rock == 2 && paper == 1)
	{
		auto index = distance(vec.begin(), find(vec.begin(), vec.end(), "paper"));
		cout << out[index];
	}
	else if(paper == 2 && scis == 1)
	{
		auto index = distance(vec.begin(), find(vec.begin(), vec.end(), "scissors"));
		cout << out[index];
	}
	else if(scis == 2 && rock == 1)
	{
		auto index = distance(vec.begin(), find(vec.begin(), vec.end(), "rock"));
		cout << out[index];
	}
	else
	{
		cout << "?";
	}
}