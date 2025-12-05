#include "poo.h"
#include <iostream>
#include <string>
#include <cstdlib>

class generatePassword{
public:
    
    //Déclaration des caractéres pour le genereteur ce mot de passe
    std::string caracteres = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%";

    void pass(int longueur){
    //Générer le mot de passe grace a la boucle for 
    std::string Mot_De_Passe = "";
    for(int i = 0; i < longueur; i++){
        int index = rand() % caracteres.length();
        Mot_De_Passe += caracteres[index];    
    }
    std::cout << "\nVotre mot de passe : " << Mot_De_Passe << std::endl;
}

};


int main(){
    

    srand(time(0));//Initialiser le generateur de nombres aléatoire
    generatePassword password;
    int longueur;
    std::cout << "==GÉNÉRATEUR DE MOT DE PASSE==\n";
    std::cout << "chosissez une longueur souhaiter : " << std::endl;
    std::cin >> longueur;

    password.pass(longueur);





    return 0;
}