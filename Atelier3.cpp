#include <iostream>

using namespace std;

class Voiture{
private:
    string marque;
    string modele;
    int annee;
    float kilometrage;
    float vitesse;
    public:
    Voiture():marque("inconnue"), modele("inconnue"), annee(0), kilometrage(0.0), vitesse(0.0){}
    Voiture(string Mar, string Mod, int An, float Klm, float V):marque(Mar), modele(Mod), annee(0), kilometrage(0.0), vitesse(0.0) {}

    void Accelerer(float valeur);
    void Freiner(float valeur);
    void AfficheInfo() const;
    void Avancer(float distance);

    ~Voiture() {
        cout << "La voiture " << marque << " " << modele << " est détruite!" << endl;
    }
};

void Voiture::Accelerer(float valeur){
    vitesse+=valeur;
}

void Voiture::Freiner(float valeur){
    if(vitesse-valeur>=0){
        vitesse-= valeur;
    }else {
    vitesse=0;
    }
}

void Voiture::AfficheInfo()const{
    cout<<"Marque:"<<marque<<endl;
    cout<<"Modele:"<<modele<<endl;
    cout<<"Annee:"<<annee<<endl;
    cout<<"Kilometrage:"<<kilometrage<<"klm"<<endl;
    cout<<"Vitesse:"<<vitesse<<"km/h"<<endl;
}

void Voiture::Avancer(float distance){
      kilometrage+=distance;
}


int main(){

     Voiture maVoiture("Lamborghini", "Aventador", 2020, 15000, 0);

    maVoiture.AfficheInfo();
    maVoiture.Accelerer(50);
    maVoiture.Avancer(10);
    maVoiture.Freiner(20);
    maVoiture.AfficheInfo();
    return 0;
}
