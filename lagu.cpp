#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> daftarLagu = {"Ini Abadi", "Monokrom"};

    daftarLagu.insert(daftarLagu.begin() + 1, "everything u are");
    daftarLagu.push_back("Aitakatta");
    daftarLagu.erase(daftarLagu.begin());

    cout << "hasil akhir: ";

    for (string lagu : daftarLagu) {
        cout << lagu << " ";
    }

    return 0;
}