#include "attendre.h"

Attendre::Attendre(int p_duree)
{
    duree = p_duree;
}

void Attendre::executer(ContexteRobot& ctx){
    ctx.attendre(duree);
}
