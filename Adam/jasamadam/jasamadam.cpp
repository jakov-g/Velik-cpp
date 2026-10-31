#include <iostream>
#include <vector>
using namespace std;

class Sef {
private:
	string naziv;
	vector<int> kartice;
	vector<int> zbroj;
	int tren = 0;
	bool otvoren = 0;
public:
	Sef(string _naziv, vector<int> _kartice, vector<int> _zbroj) { naziv = _naziv; kartice = _kartice; zbroj = _zbroj; }
	void ispisi() {
		if (otvoren) { cout << "Sef je otvoren!"; return; }
		cout << "=== SEF: " << naziv << " ===\n"
			<< "Brava: " << tren + 1 << " / " << zbroj.size() << endl
			<< "Trenutni zbroj: " << zbroj.at(tren) << endl
			<< "Kartice: \n";
		for (int i = 0; i < kartice.size(); i++) {
			cout << i + 1 << ". " << kartice.at(i) << endl;
		}
	}
	void pokusaj(int prvi, int drugi) {
		if (otvoren) { cout << "Sef je otvoren!"; return; }
		if (prvi-1 > kartice.size()) { cout << "Prvi broj ne postoji"; return; }
		if (drugi-1 > kartice.size()) { cout << "Drugi broj ne postoji"; return; }
		if (prvi == drugi) { cout << "Dvaput je odabrana ista kartica"; return; }
		if (kartice.at(prvi - 1) + kartice.at(drugi - 1) == zbroj.at(tren)) { 
			cout << "Sef je otvoren!";
			if (prvi > drugi) { kartice.erase(kartice.begin() + prvi - 1); kartice.erase(kartice.begin() + drugi - 1);}
			else { kartice.erase(kartice.begin() + drugi - 1); kartice.erase(kartice.begin() + prvi - 1);}
			tren++;
			if (tren > zbroj.size()) { cout << "Cijeli sef je otvoren"; otvoren++; }
		}
	}
};

int main()
{

}