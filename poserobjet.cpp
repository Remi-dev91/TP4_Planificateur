#include "poserobjet.h"
#include <iostream>

PoserObjet::PoserObjet(double p_finX,double p_finY,double p_finZ)
{
    m_finX = p_finX;
    m_finY = p_finY;
    m_finZ = p_finZ;
}

void PoserObjet::executer(ContexteRobot& ctx){
    ctx.deplacerVers(m_finX,m_finY,m_finZ);
    std::cout<< "deplacement vers "<< m_finX << " " << m_finY << " " << m_finZ << std::endl;
    ctx.deplacerVers(m_finX,m_finY,(m_finZ-m_finZ));
    std::cout<< "position de la pince "<< m_finX << " " << m_finY << " " << (m_finZ-m_finZ) << std::endl;
    ctx.ouvrirPince();
    ctx.deplacerVers(m_finX,m_finY,m_finZ);
    std::cout<< "position de la pince "<< m_finX << " " << m_finY << " " << m_finZ << std::endl;

}
