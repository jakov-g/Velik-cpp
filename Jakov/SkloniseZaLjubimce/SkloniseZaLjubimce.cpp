#include <iostream>
#include <vector>
using namespace std;
class Ljubimac {
private:
    string ime;
    string vrsta;
    int energija;
public:
    string getIme() {
        return ime;
    }
    int getEnergija() {
        return energija;
    }
    void igrajSe() {
        if (energija > 20) { cout << ime << " se igra\n-20 energije\n"; energija = energija - 20; }
        else {
            cout << "Preumoran je :(\n";
        }
    }
    void jedi() {
        energija += 30;
        if (energija > 100) { energija = 100; }
        cout << "Kako samo" << ime << "umiljato i slatko jede\n";
    }
    void ispisi() {
        cout << "----------------\n" << ime << endl << vrsta << endl << "Energija: " << energija << endl << "----------------\n";
    }
    Ljubimac(string _ime, string _vrsta, int _energija) {
        ime = _ime;
        vrsta = _vrsta;
        energija = _energija;
    }
};

class Skloniste {
private:
    string naziv;
    int kapacitet;
    vector<Ljubimac> lista;
public:
    void dodajLjubimca(Ljubimac ljubimac) {
        if (kapacitet <= 0) {
            cout << "Nema mjesta u skolinstu\n"; return;
        }
        for (Ljubimac a : lista) {
            if (a.getIme().compare(ljubimac.getIme()) == 0) {
                cout << ljubimac.getIme() << " vec postoji\n";
                return;
            }
        }
        lista.push_back(ljubimac);
    }
    void ispisiSve() {
        cout << "-----------------------------\n" << naziv << "-----------------------------\n";
        if (lista.size() == 0) {
            cout << "Skloniste je prazno\n";
        }
        else {
            for (Ljubimac a : lista) {
                a.ispisi();
            }
        }
    }
    void igrajSeSaSvima() {
        for (Ljubimac a : lista) {
            a.igrajSe();
        }
    }
    void nahraniUmorne() {
        for (Ljubimac a : lista) {
            if (a.getEnergija() < 40) { a.jedi(); }
        }
    }
    void udomi(string ime) {
        for (Ljubimac a : lista) {
            if (ime.compare(a.getIme()) == 0) {

            }
        }
    }
};

int main()
{
    Skloniste skloniste("Sretne sape", 3);

    cout << "=== DOLAZAK LJUBIMACA ===\n";
    skloniste.dodajLjubimca(Ljubimac("Miki", "macka", 50));
    skloniste.dodajLjubimca(Ljubimac("Rex", "pas", 20));
    skloniste.dodajLjubimca(Ljubimac("Miki", "macka", 80));
    skloniste.dodajLjubimca(Ljubimac("Bubi", "zec", 90));
    skloniste.dodajLjubimca(Ljubimac("Luna", "pas", 60));

    cout << "\n=== POCETNO STANJE ===\n";
    skloniste.ispisiSve();

    cout << "\n=== VRIJEME ZA IGRU ===\n";
    for (int krug = 1; krug <= 2; krug++) {
        cout << "Krug " << krug << "\n";
        skloniste.igrajSeSaSvima();
    }

    cout << "\n=== HRANJENJE UMORNIH ===\n";
    skloniste.nahraniUmorne();

    cout << "\n=== NAJAKTIVNIJI LJUBIMAC ===\n";
    skloniste.ispisiNajaktivnijeg();

    cout << "\n=== UDOMLJAVANJE ===\n";
    skloniste.udomi("Rex");
    skloniste.udomi("Pero");

    cout << "\n=== NOVI LJUBIMAC ===\n";
    skloniste.dodajLjubimca(Ljubimac("Luna", "pas", 60));

    cout << "\n=== ZAVRSNO STANJE ===\n";
    skloniste.ispisiSve();

    return 0;

}
