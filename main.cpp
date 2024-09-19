/* ---------------------------
Laboratoire : 01
Auteur(s) : Manuel Cabras - manuel.cabras@heig-vd.ch
Date : 17.09.2024
But : me présenter via un programme cpp.
Remarque(s) :
--------------------------- */
#include <iostream>

using namespace std;

int main() {

    const char* deco[2] = {"# # # # # # # # # #"," # # # # # # # # # "};

    for (int i = 0; i < 4; i++) {
        cout << deco[i%2] << endl;
    }

    cout << endl;
    cout << "    #####        Nom : Manuel Cabras" << endl;
    cout << " d## . . ##b     Kernel : Human v30.0 " << endl;
    cout << "   #  \\  #       Stack : Java, Kotlin, C#, Javascript, PHP, golang, powershell" << endl;
    cout << "    #(_)#        Experience : ████▒▒▒▒▒▒" << endl;
    cout << "      #          Experience (detailed) : Travaillé en environnement .NET et JS (Node) professionnellement" << endl;
    cout << "                 J'ai contribué pour un projet FOSS en Kotlin/Java, occasionnellement du c++" << endl;
    cout << "                 Je reste une pive en c++" << endl;
    cout << "                 Leisure : Musique, photographie, fitness, tout ce qui occupe ma tête avec des problèmes" << endl;
    cout << endl;
    cout << " ### On fait quoi avec la programmation? ### " << endl;
    cout << " Avec une optique optimiste, je dirais qu'on résout des problèmes avec. Avec le temps j'ai réalisé que " << endl;
    cout << " la programmation me rend flemmard, je délègue mes tâches à des programmes. En gros, cela me permet de " << endl;
    cout << " gagner du temps et optimiser les ressources en confiant des tâches répétitives et bien spécifiées à un ordinateur" << endl;
    cout << " Ce qu'on peut faire? Ce que l'on veut. S'amuser, donner vie à des machines, améliorer notre vie, " << endl;
    cout << " nous la compliquer si nous sommes du côté de l'IDE... En somme, nous mandatons une puce pour effectuer " << endl;
    cout << " des tâches de manière plus performante et précise par rapport à un humain afin de nous améliorer le quoticien" << endl;
    return 0;
}
