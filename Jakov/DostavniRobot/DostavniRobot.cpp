#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Narudzba {
private:
    int ID;
    string naziv;
    int tezina;
    int adresa;
    int nagrada;
public:
    Narudzba(int _ID, string _naziv, int _tezina, int _adresa, int _nagrada) {
        ID = _ID;
        naziv = _naziv;
        tezina = _tezina;
        adresa = _adresa;
        nagrada = _nagrada;
    }
    int const getID() {
        return ID;
    }
    string const getNaziv() {
        return naziv;
    }
    int const getTezina() {
        return tezina;
    }
    int const getAdresa() {
        return adresa;
    }
    int const getNagrada() {
        return nagrada;
    }
    void Ispisi() {
        cout << "ID: " << ID << "\nNaziv: " << naziv << "\nTezina: " << tezina << "\nAdresa: " << adresa << "\nNagrada: " << nagrada;
    }
};

class DostavniRobot {
private:
    int baterija;
    int nosivost;
    int zarada;
    vector <Narudzba> narudzbe;
    vector <int> odabraniID;
public:
    DostavniRobot() {
        baterija = 20;
        nosivost = 10;
        zarada = 0;
    }
    int const getBaterija() {
        return baterija;
    }
    int const getNosivost() {
        return nosivost;
    }
    int const getZarada() {
        return zarada;
    }
    void UnesiNarudzbu(Narudzba narudzba) {
        narudzbe.push_back(narudzba);
        odabraniID.push_back(narudzba.getID());
    }
    void IspisiStanje() {
        cout << "Baterija: " << baterija << "\nNosivost: " << nosivost << "\nZarada: " << zarada << "\nPreostale narudzbe:\n";
        for (Narudzba i : narudzbe) {
            cout << i.getNaziv();
            if (i.getID() == odabraniID[0]) {
                cout << "[ODABRANO]" << endl;
            }
            cout << endl;
        }
    }
    void PromjeniOdabir(int id) {
        for (Narudzba a : narudzbe) {
            if (a.getID() == id && odabraniID.at(0) != id) {
                odabraniID.push_back(a.getID());
                return;
            }
            else {
                if (odabraniID.at(0) == id) { odabraniID.erase(odabraniID.begin()); return; }
            }
        }
        cout << "ID ne postoji.";
    }
    void prikaziPlan() {
        int ukupnaTezina;
        int ukupnaNagrada;
        cout << "Odabrane narudzbe: \n";
        for (Narudzba adamjegay : narudzbe) {
            for (int i = 0; i < odabraniID.size(); i++) {
                if (adamjegay.getID() == odabraniID[i]) {
                    cout << adamjegay.getNaziv() << endl;
                }
            }
        }
    }
};

int main() {
    // Napravi robota i dodaj pocetne narudzbe.
    int izbor;
    do {
        cout << "\n=== DOSTAVNI ROBOT ===\n";
        cout << "1 - Stanje i narudzbe\n";
        cout << "2 - Odaberi ili makni paket iz plana\n";
        cout << "3 - Pregledaj plan\n";
        cout << "4 - Pokreni dostavu\n";
        cout << "5 - Predlozi do dva paketa\n";
        cout << "6 - Isprazni plan\n";
        cout << "7 - Otkazi narudzbu\n";
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
