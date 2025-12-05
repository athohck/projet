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