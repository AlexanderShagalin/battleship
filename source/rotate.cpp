#include "rotate.h"

Rotate::Rotate(std::shared_ptr<IRotatable> obj)
    : m_obj(obj)
{}

void Rotate::execute()
{
    auto newAngle = m_obj->getAngle() + m_obj->getAngleSpeed();
    if(newAngle > 360.0)
        newAngle -= 360.0;
    if(newAngle < 0.0)
        newAngle += 360.0;
    m_obj->setAngle(newAngle);
}
