#include <iostream>
#include "ouvrirpince.h"

OuvrirPince::OuvrirPince()
{

}

void OuvrirPince::executer(ContexteRobot& ctx) {
    std::cout << "Ouvrir Pince..." << std::endl;
    ctx.ouvrirPince();
}

void OuvrirPince::afficherNom() const {
    std::cout << "Action: OuvrirPince";
}
