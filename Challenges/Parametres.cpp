#include <iostream>

using namespace std;

void fonction(int count) {
    cout << "nombre de paramètres : " << count << endl;
}

int main() {
    int limit = 0;

    while (true) {
        try {

            if (limit > 10) {
                fonction(limit);
            } else {
                cout << "vérifions pour " << limit << " paramètres" << endl;
            }
            limite++;
            //limit=2147483648;
        } catch (...) {
            cout << "nous avons une erreur pour " << limit << " paramètres" << endl;
            break;
        }
    }

    return 0;
}
