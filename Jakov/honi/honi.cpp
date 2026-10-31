

#include <iostream>
using namespace std;
#include <string>
int main()
{	
	int n = 0;
	int prvi = 0;
	int drugi = 0;
	int zadnji = 0;
	int korak = 0;
	
	cin >> n;

	cin >> prvi;
	cin >> drugi;
	for (int i = 0; i < n-2; i++) {
		cin >> zadnji;

	}
	if (prvi > drugi) {
		korak = prvi - drugi;
		if (zadnji == 0) {
			zadnji = drugi;
		}
		printf("for (int i=%d; i>=%d; i-=%d)", prvi, zadnji, korak);
		
	}
	if (prvi < drugi) {
		korak = drugi-prvi;
		if (zadnji == 0) {
			zadnji = drugi;
		}
		
		printf("for (int i=%d; i<=%d; i+=%d)", prvi, zadnji, korak);
	}
	if (prvi == drugi) {
		korak = drugi - prvi;
		if (zadnji == 0) {
			zadnji = drugi;
		}

		printf("for (int i=%d; i<=%d; i=%d)", prvi, zadnji, korak);
	}


}


