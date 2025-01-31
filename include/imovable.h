#ifndef IMOVABLE_H
#define IMOVABLE_H

#include <utility>

typedef std::pair<int, int> Position;
typedef std::pair<int, int> Velocity;

class IMovable
{
public:
  IMovable();

  virtual Position getPosition() = 0;  
  virtual Velocity getVelocity() = 0;
  virtual void setPosition(Position newPosition) = 0;
};

#endif // IMOVABLE_H
