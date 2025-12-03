#ifndef ROTATION_H
#define ROTATION_H
#include "actionrobot.h"


class Rotation : public ActionRobot
{
private:
    int m_angle;
public:
    Rotation(int p_angle);
    void executer(ContexteRobot& ctx) override;
};

#endif // ROTATION_H
