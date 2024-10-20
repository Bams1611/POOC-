#include <iostream>

using namespace std;

void fonction(int count) {
    cout << "nombre de param�tres : " << count << endl;
}

int main() {
    int limit = 0;

    while (true) {
        try {
            // Si limit est sup�rieur � 10, on appelle la fonction avec le nombre de param�tres
            if (limit > 10) {
                fonction(limit); // Appelle la fonction avec le nombre de param�tres actuels
            } else {
                cout << "v�rifions pour " << limit << " param�tres" << endl;
            }
            //limite++;
            limit=2147483648;
        } catch (...) {
            cout << "nous avons une erreur pour " << limit << " param�tres" << endl;
            break;
        }
    }

    return 0;
}
