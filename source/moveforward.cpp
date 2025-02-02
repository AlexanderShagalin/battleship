#include "moveforward.h"

 MoveForward::MoveForward(std::shared_ptr<IMovable> obj)
    : m_obj(obj)
{
}

void MoveForward::execute()
{
    m_obj->setPosition(m_obj->getPosition() + m_obj->getVelocity());
}
