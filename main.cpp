#include <saucer/smartview.hpp>
#include <Frontend/embedded/all.hpp>
#include "GameEngine.h"

int main() {
    saucer::smartview smartview;

    smartview.set_title("Alcia, Final Version");
    smartview.set_force_dark_mode(true);

    //smartview.set_icon()
    smartview.set_dev_tools(true);


    smartview.embed(saucer::embedded::all());
    smartview.serve("index.html");

    GameEngine engine;
    engine.expose_methods(smartview);

    smartview.show(); // Show the smartview
    smartview.run(); // And finally enter the run-loop.

    return 0;
}
