#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Initialisation de la graine pour la génération de nombres aléatoires
    std::srand(std::time(0));

    // Génération du nombre mystère entre 1 et 100
    int nombreMystere = std::rand() % 100 + 1;

    // Variables pour le jeu
    int nombre;
    int tentatives = 0;

    // Boucle principale du jeu
    while (true) {
        // Demande du nombre à l'utilisateur
        std::cout << "Quel est le nombre ? ";
        std::cin >> nombre;

        // Vérification de la validité du nombre
        if (nombre < 1 || nombre > 100) {
            std::cout << "Erreur de saisie !" << std::endl;
            continue;
        }

        // Incrémentation du nombre de tentatives
        tentatives++;

        // Comparaison du nombre avec le nombre mystère
        if (nombre < nombreMystere) {
            std::cout << "C'est plus ! Il vous reste " << 15 - tentatives << " tentatives" << std::endl;
        } else if (nombre > nombreMystere) {
            std::cout << "C'est moins ! Il vous reste " << 15 - tentatives << " tentatives" << std::endl;
        } else {
            std::cout << "Bravo, vous avez trouvé le nombre mystère !!! Au bout de " << tentatives << " tentatives." << std::endl;
            break;
        }

        // Vérification du nombre de tentatives
        if (tentatives >= 15) {
            std::cout << "Vous avez atteint le nombre maximum de tentatives. Le nombre mystère était : " << nombreMystere << std::endl;
            break;
        }
    }

    return 0;
}
