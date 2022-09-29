#include <iostream>
#include <string>

using namespace std;

string Capitalize_first_letter(string text) {

	for (int x = 0; x < text.length(); x++)
	{
		if (x == 0)
		{
			text[x] = toupper(text[x]);
		}
		else if (text[x - 1] == ' ')
		{
			text[x] = toupper(text[x]);
		}
	}

	return text;
}

int main()
{
    string a;
    cin >> a;
	cout << Capitalize_first_letter(a);
	return 0;
}
