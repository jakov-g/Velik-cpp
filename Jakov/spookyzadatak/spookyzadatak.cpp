#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Sastojak {
private:
    string naziv;
    unsigned int carobnaSnaga;
public:
    Sastojak(string _naziv, unsigned int _snaga) {
        naziv = _naziv;
        carobnaSnaga = _snaga;
    }
    string getNaziv() const {
        return naziv;
    }
    unsigned int getSnaga() const {
        return carobnaSnaga;
    }
    void pojacaj(int iznos) {
        carobnaSnaga += iznos;
    }
    void ispisi() {
        cout << naziv << endl << "Snaga: " << carobnaSnaga;
    }
};

class Kotao {
private:
    string naziv;
    vector <Sastojak> sastojci;
public:
    Kotao(string _naziv) {
        naziv = _naziv;
    }
    void dodajSastojak(Sastojak sastojak) {
        sastojci.push_back(sastojak);
    }
    void ispisi() {
        cout << naziv << endl;
        if (sastojci.empty()) { cout << "Kotao je prazan. Vjestica je gladna!"; }
        else {
            for (int i = 0; i < sastojci.size(); i++) {
                cout << (i + 1) << ". " << sastojci[i].getNaziv() << endl;
            }
        }
    }
    void ukloniZadnji() {
        if (sastojci.empty()) { cout << "Kotao je prazan. Vjestica je gladna!"; }
        else {
            cout << "Maknut je " << sastojci.back().getNaziv();
            sastojci.pop_back();
        }
    }
    void pronadiParove(int trazenaSnaga) {
        int brojParova = 0;
        for (int i = 1; i <= sastojci.size(); i++) {
            Sastojak usporedni = sastojci[i];
            for (int j = 1; j <= sastojci.size(); j++) {
                Sastojak usporedni2 = sastojci[j];
                if ((usporedni.getSnaga() + usporedni2.getSnaga()) == trazenaSnaga && &usporedni != &usporedni2) {
                    cout << i + 1 << " i " << j + 1 << ": " << usporedni.getNaziv() << "(" << usporedni.getSnaga() << ") + " << usporedni2.getNaziv() << "(" << usporedni2.getSnaga() << ")" << endl;
                    brojParova++;
                }
            }
        }
        if (brojParova == 0) {
            cout << "Nema parova za trazenu snagu";
        }
    }
    void skuhajNapitak(int trazenaSnaga) {
        int brojParova = 0;
        while (brojParova == 0)
        for (int i = 0; i < sastojci.size(); i++) {
            Sastojak usporedni = sastojci[i];
            for (int j = 0; j < sastojci.size(); j++) {
                Sastojak usporedni2 = sastojci[j];
                if ((usporedni.getSnaga() + usporedni2.getSnaga()) == trazenaSnaga && &usporedni != &usporedni2) {
                    cout << i + 1 << " i " << j + 1 << ": " << usporedni.getNaziv() << "(" << usporedni.getSnaga() << ") + " << usporedni2.getNaziv() << "(" << usporedni2.getSnaga() << ")" << endl;
                    sastojci.erase(sastojci.begin() + i - 1);
                    sastojci.erase(sastojci.begin() + j - 1);
                    brojParova++;
                }
            }
        }
        if (brojParova == 0) {
            cout << "Nema parova za trazenu snagu";
        }
    }

};

int main()
{
    int izbor;
    do {
        cout << "\n=== VJESTICIN KOTAO ===\n";
        cout << "1 - Prikazi sastojke\n";
        cout << "2 - Dodaj sastojak\n";
        cout << "3 - Ukloni zadnji sastojak\n";
        cout << "4 - Pronadi parove za napitak\n";
        cout << "5 - Skuhaj napitak\n";
        cout << "6 - Pojacaj sve sastojke\n";
        cout << "7 - Skuhaj otrovnu juhu\n";
        cout << "0 - Izlaz\n";
        cout << "Odabir: ";
        cin >> izbor;

        switch (izbor) {
        case 1: { break; }
        case 2: { break; }
        case 3: { break; }
        case 4: { break; }
        case 5: { break; }
        case 6: { break; }
        case 7: { break; }
        case 0: { break; }
        default:
            cout << "Nepostojeca opcija!\n";
        }
    } while (izbor != 0);
    return 0;

}