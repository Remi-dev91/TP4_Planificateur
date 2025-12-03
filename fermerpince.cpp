#include <iostream>
#include "fermerpince.h"

FermerPince::FermerPince()
{

}

void FermerPince::executer(ContexteRobot& ctx) {
    std::cout << "Fermer Pince..." << std::endl;
    ctx.fermerPince();
}

void FermerPince::afficherNom() const {
    std::cout << "Action: FermerPince";
}
