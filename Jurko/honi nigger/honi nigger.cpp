

#include <iostream>
using namespace std;
#include <string>;
int main()
{
	int n = 0;
	int k = 0;
	cin >> n;
	cin >> k;

	char polje[3];
	char red[3];
	int broj = 0;
	for (int i = 0; i < 3; i++) {
		cin >> polje[i];
	}
	for (int i = 0; i < 3; i++) {
		cin >> red[i];
	}
	switch (polje[0])
	{
	case 'o':	switch (polje[2])
	{
	case 'o':broj = 456; break;
	case '-':	switch (red[1])
	{
	case 'o':if (k == 0) {
		cout << "3";
	}
			else {
		cout << "4";
	}; break;
	case '-':if (k == 0) {
		cout << "2";
	}
			else {
		cout << "5";
	}; break;
	default:
		break;
	};
			break;
	default:
		break;
	}
			; break;
	case '-':if (k == 0) {
		cout << "1";
	}
			else {
		cout << "6";
	}; break;
	default:
		break;
	}
	switch (polje[2])
	{
	case 'o':broj = 456; break;
	default:
		break;
	}
	if (broj == 456) {
		switch (red[0])
		{
		case'-': cout << "4"; break;
		case'o':cout << "6"; break;

		default:
			break;
		
			switch (red[1])
			{
			
			case'o':cout << "5"; break;

			default:
				break;


	}
	
}


