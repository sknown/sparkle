#include "were/were_event_loop.h"
#include "platform/x11/platform_x11.h"
#include "compositor/gl/compositor_gl.h"

int main(int argc, char *argv[])
{
    WereEventLoop *loop = new WereEventLoop();

    Platform *platform = platform_x11_create(loop);
    Compositor *compositor = compositor_gl_create(loop, platform);

    platform->start();
    
    loop->run();
    
    platform->stop();

    delete compositor;
    delete platform;
    delete loop;

    return 0;
}

