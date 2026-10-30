#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> orang = {"Budi", "Siti"};

    orang.insert(orang.begin(), "Roni");
    orang.push_back("Dewi");
    orang.erase(orang.begin());

    cout << "hasil akhir: ";

    for (string nama : orang) {
        cout << nama << " ";
    }

    return 0;
}