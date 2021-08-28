#include <iostream>  
using namespace std;

int main()
{
	string food = "Meme Pizza";
	string &area = food;
	cout << area << endl;
	cout << food << endl; 
	return 0;  
}

