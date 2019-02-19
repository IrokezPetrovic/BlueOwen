#if !defined(OWENCONTROLLER_HPP)
#define OWENCONTROLLER_HPP

#include "IOwenController.hpp"
#include "../Owen/IOwen.hpp"

class OwenController : public IOwenContoller
{
  public:
    OwenController(IOwen *owen);
  private:
};

#endif // OWENCONTROLLER_HPP
