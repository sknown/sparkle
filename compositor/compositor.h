#ifndef COMPOSITOR_H
#define COMPOSITOR_H

#include "sparkle.h"

class Compositor
{
public:
    virtual ~Compositor() {}
    virtual int displayWidth() = 0;
    virtual int displayHeight() = 0;

    WereSignal<void ()> frame;
};

#endif //COMPOSITOR_H

